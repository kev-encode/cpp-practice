// Pg. 39-40, "The C++ Programming Language Fourth Edition," Bjarne Stroustrup

#include <iostream> // note: includes declarations of standard stream I/O
using namespace std; // note: makes names from std visible without std::

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
    cout << "Hello, World!\n";
    print_square(1.234);
}