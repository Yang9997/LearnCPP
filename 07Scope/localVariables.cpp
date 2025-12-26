#include<iostream>
using namespace std;
// 局部变量具有块作用域
// 同一个作用域内变量名必须唯一，但不同的嵌套作用域里可以重名，内层会遮蔽外层的名字。

int name;
void f(){
    extern int name; // 引用全局变量，一个链接
}

void f1(){
    int age;
}

void f2(){
    int age;// 局部变量，和上面的age不是一个age，没有链接
}

int main(){
    int i {5}; // i开始
    double d {4.0};// d开始

    int x{6};
    {
        int x{8};
        cout<<x<<"\n";
    }
    cout<<x<<"\n";
    return 0;
}// i和d都结束 开始-结束，生命周期


// 全局变量