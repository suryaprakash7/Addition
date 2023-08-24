#include<iostream>
using namespace std;
int Addition(int a, int b)
{
    int c = a+b;
    return c;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: \n"<<endl;
    cin>>a>>b;
    int result = Addition(a,b);
    cout<<"Addition result is: "<<result<<endl;
}