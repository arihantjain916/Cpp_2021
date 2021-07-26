#include<iostream>
using namespace std;

void stri(string a){
    if(a.length() == 0){
    return;
    }
    string r = a.substr(1);
    stri(r);
    cout<<a[0];
}

int main(){
    stri("arihant");
    return 0;
}