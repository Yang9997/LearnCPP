#include<iostream>
using namespace std;

int readNumber(){
    cout<<"Please enter a number:";
    int x{};
    cin>>x;

    return x;
}

void writeNumber(int x)
{
    cout<<"The sum is:"<<x<<'\n';
}

int main(){
    int x{readNumber()};
    int y{readNumber()};
    writeNumber(x+y);

    return 0;
}