#include<cstddef>
#include<iostream>
using namespace std;
int main(){
    int x{5};
    size_t s{sizeof(x)};
    cout<<s<<'\n';

    return 0;
}