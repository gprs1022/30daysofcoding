#include<iostream>
using namespace std;

int main(){
    int a, b,c;

    cin>>a>>b>>c;

    if(a>b>c){
        cout<<"a is greater";

    } else if(b>a>c){
        cout<<"b is greater ";
    } else if(c<a<b){
        cout<<"c is greater"<<c;
    }
    
    return 0;
}