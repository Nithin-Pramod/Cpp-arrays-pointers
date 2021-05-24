#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a=5;
    int *p;
    p=&a;
    printf("%u\n",p);
    cout<<*p<<endl;
    
    cout<<"size of int : "<<sizeof(int)<<endl;
    p++;
    printf("%u",p); 
}
