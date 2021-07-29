#include<iostream>
using namespace std;

int main(){
    // int arr[] = {1,2,3,4,5};
    // cout<<sizeof(arr)<<endl;
    // cout<<arr[1]<<endl;

    // for(int a: arr){
    //     cout<<a<<endl;
    // }

    int s;
    cout<<"Enter the size of an array: ";
    cin>>s;
    int arr[s];
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    for(int a:arr){
        cout<<a<<endl;
    }
    return 0;
}