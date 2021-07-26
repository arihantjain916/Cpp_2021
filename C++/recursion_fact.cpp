#include<iostream>
using namespace std;

int fact(int a){
    if((a == 0) || (a == 1)){
        return 1;
    }
    else{
        return a * fact(a-1);
    }
}

int main()
{
    int a , b;
    cout << "Enter the number: ";
    cin >> a;
    b = fact(a);
    cout << b;
    return 0;
}