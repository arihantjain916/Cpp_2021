#include<iostream>
using namespace std;

void substring(string s , string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch; // code is function for finding the ascii value of the character.
    string a = s.substr(1);

    substring(a , ans);
    substring(a , ans + ch);
    substring(a , ans + to_string(code));
}

int main(){
    substring("AB" , "");
    cout<<endl;
    return 0;
}