#include <iostream>
using namespace std;
void output(double x1, double x2, char c)
{
    if (c == '+')
        cout<< x1 + x2;
    else if (c == '-')
        cout<< x1 - x2;
    else if (c == '*')
        cout<< x1 * x2;
    else if (c == '\\')
        cout<< x1 + x2;
    else
        return;
}
int main()
{
    cout << "Enter a double value: ";
    double x1;
    cin >> x1;
    cout << "Enter a double value: ";
    double x2;
    cin >> x2;
    cout << "Enter +, -, * ,\\: ";
    char c;
    cin >> c;

    cout<<x1<<" "<<c<<" "<<x2<<" = ";
    output(x1,x2,c);
    cout<<'\n';

    return 0;
}