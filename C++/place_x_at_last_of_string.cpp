#include<iostream>
using namespace std;

string movex(string s){
    if(s.length() == 0){
        return "";
    }

    char a = s[0];
    string b = movex(s.substr(1));

    if(a == 'x'){
        return (b + a);
    }
    return (a+b);
}

int main(){
    cout << movex("axbxcx")<<endl;
    return 0;
}