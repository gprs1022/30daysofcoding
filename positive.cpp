#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n>0){
        cout<<"Number is positive";
    } else if(n<0){
        cout<<"Number is negative";
    } else {
        cout<<"number is zero";
    }
}