#include <iostream>
using namespace std;

int main(){
    int n=10;
    int a=0,b=1;
    int sum=0;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<n;i++)
    {
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;

    }
}
