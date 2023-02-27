#include "color.hh"

Color::Color() :
R(0), G(0), B(0) {}

Color::Color(unsigned char red, unsigned char green, unsigned char blue):
R(red), G(green) , B(blue) {}

std::ofstream& Color::operator<<(std::ofstream &out)
{
    out << R << " " << G << " "  << B;
}
