#include<iostream>
using namespace std;
void increment(int* p){
    *p=*(p+1);
}

int main(){
    int x=10;
    increment(&x);
    cout<<x<<endl;
    return 0;
}