#include "camera.hh"
#include "Matrix3d.cc"
#include <iostream>
#include <cmath>
#include <vector>


vector<Ray> Camera::getRays(int width, int height) const {
    std::vector<Vector3> centers(width * height);



    // Calcul de la distance focale
    double d = (_lookAt - _center).norm2();
    double f = d / tan(_alpha / 2.0);

    // Calcul de la matrice de rotation
    Vector3 z_axis = (_lookAt - _center).normalized();
    Vector3 x_axis = _up^(z_axis).normalized();
    Vector3 y_axis = z_axis^(x_axis).normalized();
    Matrix3D R = Matrix3D(x_axis.getX(), x_axis.getY(), x_axis.getZ(),
                          y_axis.getX(), y_axis.getY(), y_axis.getZ(),
                          z_axis.getX(), z_axis.getY(), z_axis.getZ());


    // Calcul des positions des centres des pixels
    double cx = width / 2.0;
    double cy = height / 2.0;
    double s = f / _zmin;
    for (int v = 0; v < height; v++) {
        for (int u = 0; u < width; u++) {
            double x = (u - cx) * s;
            double y = (v - cy) * s;
            double z = _zmin;
            Vector3 pixel_center = R * Vector3(x, y, z) + C;
            centers[v * width + u] = pixel_center;
        }
    }

    return centers;
}