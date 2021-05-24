#include <iostream>
#include<cstdio>

using namespace std;
void function(int *ptr1, int *ptr2)
{
    cout<<"a+b="<<*ptr1+*ptr2;
}
int main()
{
    int a=5,b=9;
    function(&a,&b);
}
