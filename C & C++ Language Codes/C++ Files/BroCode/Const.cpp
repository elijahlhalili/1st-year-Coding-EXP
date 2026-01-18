#include <iostream>
using namespace std;

int main ()
{

    // "const" is used so that your value can't be change

    const double pi = 3.14159;
    const double radius = 10;
    const double circumference = 2 * pi * radius;

    cout << circumference << "cm" << '\n';



    return 0;
}