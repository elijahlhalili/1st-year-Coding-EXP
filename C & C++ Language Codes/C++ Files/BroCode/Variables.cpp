#include <iostream>
using namespace std;    // used for shortcut of "cout"

int main ()
{

    //integer (whole number)
    int age = 18;
    int year = 2026;
    int days = 7;

    // double (number including decimal)
    double price = 10.67;
    double gpa = 1.55;
    double temperature = 25.1;

    // single character
    char gradeRate = 'A';
    char initial = 'E';
    char currency = '$';

    // boolean (ture or false)
    bool student = false;
    bool power = false;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Elijah L. Halili";
    string food = "Pizza";
    string address = "123 Eli St.";

    cout << food << '\n';
    cout << "Hello my name is " << name << '\n';
    cout << "I am " << age << " years old" << '\n';


    return 0;
}