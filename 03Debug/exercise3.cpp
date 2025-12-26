#include<iostream>
using namespace std;
void d(){
    // here
}
void c(){

}
void b(){
    c();
    d();
}
void a(){
    b();
}

int main()
{
    a();
    return 0;
}