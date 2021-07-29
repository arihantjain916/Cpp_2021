#include<iostream>
using namespace std;

struct arihant
{       
    int i;
    string s;
    char c;
    float f;
};

int main(){
    arihant a;
    a.i = {5};
    a.s = {"Arihant"};
    a.c = {'b'};
    a.f = {4.15};

    cout<<a.i<<endl;
    cout<<a.s<<endl;
    cout<<a.c<<endl;
    cout<<a.f<<endl;
    return 0;
}