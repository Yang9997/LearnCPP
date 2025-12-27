#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a single character: ";
    char x{};
    cin>>x;
    cout<<"You entered '"<<x<<"'"<<", which has ASCII code "<<static_cast<int>(x)<<".\n";

    return 0;
}