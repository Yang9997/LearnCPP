#include<iomanip>
#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout<<"A byte is "<<CHAR_BIT<<"bits\n\n";

    cout<<left;

    cout<<setw(16)<<"bool: "<<sizeof(bool)<<" bytes\n";
    cout<<setw(16)<<"char: "<<sizeof(char)<<" bytes\n";
    cout<<setw(16)<<"short: "<<sizeof(short)<<" bytes\n";
    cout<<setw(16)<<"int: "<<sizeof(int)<<" bytes\n";
    cout<<setw(16)<<"long: "<<sizeof(long)<<" bytes\n";
    cout<<setw(16)<<"long long: "<<sizeof(long long)<<" bytes\n";

    cout<<setw(16)<<"float: "<<sizeof(float)<<" bytes\n";
    cout<<setw(16)<<"double: "<<sizeof(double)<<" bytes\n";
    cout<<setw(16)<<"long double: "<<sizeof(long long)<<" bytes\n";

    // gcc这里sizeof(void)会返回1,其他编译器有的会编译错误
    cout<<setw(16)<<sizeof(void)<<endl;

    int x{};
    cout<<"x is "<<sizeof(x)<<" bytes.\n";

    return 0;
}