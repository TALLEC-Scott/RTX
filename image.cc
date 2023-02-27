#include "image.hh"

Image::Image(unsigned int height, unsigned int width, std::vector<Color> pixels):
_height(height), _width(width), _pixels(pixels) {}

void Image::createImage(std::string path)
{
    std::ofstream outfile (path + ".ppm");
    outfile << "P3" << "\n" << _width << "\n" << _height << "\n" << 255 << "\n";
    for (int i = 0; i < _height; i++)
    {
        for (int j = 0; j < _width; j++)
        {
           outfile << _pixels[i * _width + j] << " ";
        }
    }
}

/*int main(int argc, char const *argv[])
{
    std::vector<Color> pixels = {Color('f', 'f', 'f'), Color('f', 'f', 'f'), Color('f', 'f', 'f'), Color('f', 'f', 'f'),
    Color(255, 0, 0),Color('f', 'f', 'f'),Color('f', 'f', 'f'),Color('f', 'f', 'f'),
    Color('f', 'f', 'f'),Color('f', 'f', 'f'),Color('f', 'f', 'f'),Color('f', 'f', 'f'),
    Color('f', 'f', 'f'),Color('f', 'f', 'f'),Color('f', 'f', 'f'),Color('f', 'f', 'f')};
    Image image = Image(4, 4, pixels);
    image.createImage("test22");
    return 0;
}*/