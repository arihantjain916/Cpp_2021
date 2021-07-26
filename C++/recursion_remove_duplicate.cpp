#include<iostream>
using namespace std;

string duplicate(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = duplicate(s.substr(1));

    if(ans[0] == ch){
        return ans;
    }
    else{
        return (ch + ans);
    }
}

int main(){
    string a = duplicate("aaaaarrrrriiiiihhhhaaaannnntttt");
    cout << a;
    return 0;
}