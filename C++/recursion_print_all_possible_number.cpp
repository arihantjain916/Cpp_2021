#include <iostream>
using namespace std;

string number[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void possiblestr(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = number[ch - '0']; //ch-'0' is used to convert character value to integer value.
    string a = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        possiblestr(a, ans + code[i]);
    }
}

int main()
{
    possiblestr("23", "");
    return 0;
}