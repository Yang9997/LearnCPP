#include<iostream>
using namespace std;
void printValue(int value)
{
    cout<<value<<"\n";
}

int aNumber(int number){
    return number;
}

int main(){
    printValue(5);
    aNumber(5);
    printValue(6);
    aNumber(6);
    printValue(7);
    aNumber(7);

    return 0;
}