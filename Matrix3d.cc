//
// Created by scott on 02/03/23.
//

#include "Matrix3d.hh"
#include "vector.hh"

#include <iostream>
#include <array>
#include <cmath>

class Matrix3D {
public:
    Matrix3D() {
        data_ = { 0, 0, 0, 0, 0, 0, 0, 0, 0};
    }

    Matrix3D(double a11, double a12, double a13,
             double a21, double a22, double a23,
             double a31, double a32, double a33) {
        data_ = { a11, a12, a13, a21, a22, a23, a31, a32, a33 };
    }

    double& operator()(int i, int j) {
        return data_[i * 3 + j];
    }

    double operator()(int i, int j) const {
        return data_[i * 3 + j];
    }

    Matrix3D operator*(const Matrix3D& m) const {
        Matrix3D result;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                double& sum = result(i, j);
                for (int k = 0; k < 3; ++k) {
                    sum += (*this)(i, k) * m(k, j);
                }
            }
        }
        return result;
    }

    Vector3 operator*(const Vector3& v) const {
        Vector3 result;
        for (int i = 0; i < 3; ++i) {
            double& sum = result[i];
            for (int j = 0; j < 3; ++j) {
                sum += (*this)(i, j) * v[j];
            }
        }
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const Matrix3D& m) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                os << m(i, j) << " ";
            }
            os << "\n";
        }
        return os;
    }

private:
    std::array<double, 9> data_;
};