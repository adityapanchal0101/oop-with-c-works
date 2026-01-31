#include <iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter First number: ";
    cin>>a;

    float b;
    cout<<"Enter Second number: ";
    cin>>b;

    char op;
    cout<<"Enter operator: ";
    cin>>op;

    if (op == '+' ){
        cout<<"sum is : "<<a+b;
    }

    else if (op == '-' ){
        cout<<"difference is : "<<a-b;
    }

    if (op == '/' ){
        cout<<"Division is : "<<a/b;
    }

    if (op == '*' ){
    cout<<"multiply is : "<<a*b;
    }

}