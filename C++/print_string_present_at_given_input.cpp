#include<bits/stdc++.h>
using namespace std;

void printspell(int n,string str[])
{
    if(n==0){
        return;
    }
    printspell(n/10,str);
    int number = n % 10;
    cout << str[number] << " ";
}

int main()
{
    int n;
    cout<<"Enter the input here: "<<endl;
    cin>>n;
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Answer is: ";
    printspell(n,str);
    return 0;
}