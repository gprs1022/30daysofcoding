#include<iostream>
using namespace std;


int main() {

    int n;
    cin>>n;
    int reverseNumber =0;

    while(n>0){
     int ld = n%10;

     reverseNumber = (n*10)+ ld;

     n =n/10;

     
    }

    cout<<reverseNumber;
    



}