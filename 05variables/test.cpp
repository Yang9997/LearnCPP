#include<iostream>
using namespace std;
void printInt(const int x){
    cout<<x<<"\n";
}
int main(){
    const double gravity{};
    printInt(5);
    printInt(6);
    return 0;
}