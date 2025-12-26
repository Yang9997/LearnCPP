#include<iostream>
using namespace std;
struct Task{
    int id;
    float length;
};

int main(){
    Task t;
    t.id=1;
    t.length =3.14;

    cout<<"id = "<<t.id<<", length = "<<t.length<<"."<<endl;
    return 0;
}