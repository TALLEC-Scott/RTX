#pragma once
#include <iostream>
#include <fstream>
using namespace std;


class Color{
    public:
        Color();
        Color(unsigned char R, unsigned char G, unsigned char B);
        friend ostream& operator<<(ostream &out, Color &color);
        
    private:
        unsigned char _R;
        unsigned char _G;
        unsigned char _B;
        
};
