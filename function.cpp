#include<iostream>
using namespace std;

int sum(int, int);

int main()
{
    int num1, num2;
    cout<<"enter first and second no: "<<endl;
    cin>>num1>>num2;

    cout<<"Sum = "<<sum(num1, num2);
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}