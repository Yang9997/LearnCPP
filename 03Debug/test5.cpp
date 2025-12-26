#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
void addtest()
{
    cout<<"这个函数的输出应该是：2，0，0，-2\n";
    cout<<add(1,1)<<' ';
    cout<<add(-1,1)<<' ';
    cout<<add(1,-1)<<' ';
    cout<<add(-1,-1)<<' ';
}

int main(){
    addtest();

    return 0;
}