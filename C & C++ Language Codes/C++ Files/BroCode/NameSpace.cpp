#include <iostream>
using namespace std;
using std::cout; //used for specific shortcut


namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main ()
{
    using namespace second;   //used so that you won't need to add the prefixe "second"

    cout << first::x << '\n';
    cout << x << '\n';

    return 0;
}