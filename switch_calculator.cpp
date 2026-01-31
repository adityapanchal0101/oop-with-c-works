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


    switch (op)
    {
    case '+':
        cout<<"sum is: " << a+b;
        break;
    case '-':
        cout<<"difference is: "<<a-b;
        break;
    case '/':
        cout<<"Division is: "<<a/b;
        break;
    case '*':
        cout<<"multiply is: "<<a*b;
        break;
    
    default:
        cout<<"invalid ";
        break;
    }
}