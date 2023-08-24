#include<iostream>
using namespace std;

void fun2(int c);

void fun1(int a,int b)
{
    int c = a+b;
    fun2(c);
}
void fun2(int c)
{
    cout<<c<<endl;
}
int main()
{
    int a =10;
    int b =20;
    fun1(a,b);
}