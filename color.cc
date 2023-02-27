#include "color.hh"
using namespace std;

Color::Color() :
_R(0), _G(0), _B(0) {}

Color::Color(unsigned char red, unsigned char green, unsigned char blue):
_R(red),_G(green) , _B(blue) {}

// int main(int argc, char const *argv[])
// {
//     Color color = Color(1, 5, 8);
//     cout << color << endl;
//     return 0;
// }

ostream &operator<<(ostream &out, Color &color)
{
    return out << (int)color._R << " " << (int)color._G << " "  << (int)color._B;
}
