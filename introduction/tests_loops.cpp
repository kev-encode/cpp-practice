#include <iostream>
using namespace std;

bool accept()
{
    cout << "Do you want to proceed? (Y/n)\n";

    char answer = 0;
    cin >> answer;

    if (answer == 'Y') return true;
    return false;
}

int main()
{
    accept();
    return 0;
}