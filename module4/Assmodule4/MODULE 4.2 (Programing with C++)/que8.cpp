//Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of two number using different parameters and Function Overloading
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, res;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    res = num1+num2;
    cout<<endl<<"Addition Result = "<<res<<endl;
    res = num1-num2;
    cout<<endl<<"Subtraction Result = "<<res<<endl;
    res = num1*num2;
    cout<<endl<<"Multiplication Result = "<<res<<endl;
    res = num1/num2;
    cout<<endl<<"Division Result = "<<res<<endl;
    return 0;
}
