#pragma once
#include "color.hh"
#include <vector>
#include <string>
#include <fstream>  
//#include <pam.h>

class Image{

    public:
        Image(unsigned int height, unsigned int width, std::vector<Color> pixels);
        Color getPixel(unsigned int x, unsigned int y);
        void setPixel(unsigned int x, unsigned int y, Color pixel);
        void createImage(const std::string& Path);
    private:
        unsigned int _height;
        unsigned int _width;
        std::vector<Color> _pixels;

};