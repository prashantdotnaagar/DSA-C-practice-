#include <iostream>
#include <math.h>
using namespace std;

void armstrong(int n)
{
    int x=n,y=n,count=0;
    float sum=0;
    int a;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    while (y!=0)
    {
        a=y%10;
        sum= sum+pow(a,count);
        y=y/10;
    }
    if(sum==n)
    {
        cout<<"Armstrong"<<endl;
    }   
    else
    {
        cout<<"Not armstrong"<<endl;
    }     
}
int main()
{   
    int n;
    cin>>n;
    armstrong(n);
    return 0;
}
