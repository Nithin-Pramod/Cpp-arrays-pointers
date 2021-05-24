#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a=5,b=9;
    int *p1;
    int *p2;
    p1=&a;
    p2=&b;
    printf("address of a: %u\n",&a);
    printf("address of b: %u\n",&b);
    
   cout<<"a+b="<<*p1+*p2;
    
    
    
}
