#include<iostream>
using namespace std;
int main(){
    unsigned short x{65535};
    cout<<"x was: "<<x<<'\n';

    x=65536;
    cout<<"x is now: "<<x<<'\n';

    x=65537;
    cout<<"x is now: "<<x<<'\n';

    x=-1;
    cout<<"x is now: "<<x<<'\n';

    x=-2;
    cout<<"x is now: "<<x<<'\n'; 

    return 0;
}
