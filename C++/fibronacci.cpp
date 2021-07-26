#include<iostream>
using namespace std;

int fib(int a){
    if((a == 0) || (a == 1)){
        return 1;
    }
    return fib(a-2) + fib(a-1);
}

int main(){
    int a , b;
    cout << "Enter the number: ";
    cin >> a;
    b = fib(a);
    cout << b;
    return 0;
}
