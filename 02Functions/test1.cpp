#include<iostream>
using namespace std;
int getValue(){
    cout<<"输入一个数字："<<endl;
    int input {};
    cin>>input;

    return input;
}

int main(){
    int num {getValue()};
    cout<<num<<" bouble is "<<num*2<<endl;
    return 0;
}