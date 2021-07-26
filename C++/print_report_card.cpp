#include<iostream>
using namespace std;

int main(){
    float maths , science , sst , hindi , english , sum;
    // Subject 1
    cout<<"Enter the marks of the student in maths: ";
    cin >> maths;
    // Subject 2
    cout<<"Enter the marks of the student in science: ";
    cin >> science;
    // Subject 3
    cout<<"Enter the marks of the student in hindi: ";
    cin >> hindi;

    sum = (maths + science + hindi)/3;

    if (sum > 90){
        cout<<"Excellent \n";
    }
    else if ((sum > 80) || (sum >= 90)){
        cout<<"Good\n";
    }
    else if ((sum > 70) || (sum >= 80)){
        cout<<"Fair\n";
    }
    else if ((sum > 60) || (sum >= 70)){
        cout<<"Meet Expectations\n";
    }
    else{
        cout<<"Par";
    }
    
    return 0;
}