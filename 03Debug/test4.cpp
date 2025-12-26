#include<iostream>
using namespace std;

void a()
{
    cout<<"a() called\n";
}

void b()
{
    cout<<"b() called\n";
    a();
}

int main(){
    a();
    b();

    return 0;
}