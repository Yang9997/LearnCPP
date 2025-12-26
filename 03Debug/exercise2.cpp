#include<iostream>
using namespace std;
int readNUmber()
{
    cout<<"Please enter a numbher:";
    int x{};
    cin>>x;
    return x;
}

void writeNumber(int x){
    cout<<"The quotient is: "<<x<<'\n';
}

int main(){
    int x{};
    int y{};
    x=readNUmber();
    y=readNUmber();
    writeNumber(x/y);

    return 0;
}