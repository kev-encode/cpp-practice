#include <iostream>
#include <complex>
#include <vector>
using namespace std;

int main()
{
    double d1 = 2.2;
    double d2 {2.3};
    auto b = true;

    complex<double> z1(3.0, 4.0);
    complex<double> z2(d1, d2);
    complex<double> z3 {d1, d2};

    vector<int> v {1, 2, 3, 4, 5};

    cout << d1 << " " << d2 << "\n";
    cout << z1 << " " << z2 << " " << z3 << "\n";

    return 0;
}