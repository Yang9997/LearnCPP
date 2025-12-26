#include<iostream>
#define ENABLE_DEBUG
using namespace std;

int getUserinput()
{
#ifdef ENABLE_DEBUG
cout<<"getUserInput() called\n";
#endif
    cout<<"Enter a number:"<<endl;
    int x;
    cin>>x;
    return x;
}

int main(){
#ifdef ENABLE_DEBUG
cout<<"main() called.\n";
#endif
    int x = getUserinput();
    cout<<"You entered: "<<x<<"\n";
    return 0;
}