#include<iostream>
using namespace std;

void substring(string s , string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string a = s.substr(1);

    substring(a , ans);
    substring(a , ans + ch);
}

int main(){
    substring("ABC" , "");
    cout<<endl;
    return 0;
}