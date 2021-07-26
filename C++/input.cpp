#include<iostream>
using namespace std;
// using istream std;

int main(){
    char name[50];
    cout << "Enter the number: ";
    // cin >> name;
    // To print string with space in it then use
    cin.getline(name,50);
    cout << name;
    return 0;
}