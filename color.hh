#pragma once
#include <iostream>
#include <fstream>  


class Color{
    public:
        Color();
        ~Color();
        Color(unsigned char  R, unsigned char  G, unsigned char  B);
        std::ofstream& Color::operator<<(std::ofstream &out);
        
    private: 
        unsigned char R;
        unsigned char G;
        unsigned char B;
        
};
