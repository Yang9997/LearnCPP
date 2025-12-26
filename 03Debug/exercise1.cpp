#include <iostream>
using namespace std;
int readNumber()
{
    int x;
    cout << "Please enter a number: ";
    cin >> x;
    // x = 10;
    return x;
}

void writeAnswer(int x)
{
    cout << "The sum is: " << x << '\n';
}

int main()
{
    int x{};
    x = readNumber();
    x = x + readNumber();
    writeAnswer(x);

    return 0;
}