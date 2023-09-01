#include<iostream>
using namespace std;

int factorial(int n){
    //base condition
    if(n==0)
        return 1;
        
    int small=factorial(n-1);
    int big=n*small;

    return big;
}


int main()
{
    int n;
    cout<<"enter no."<<endl;
    cin>>n;

    int  ans=factorial(n);
    cout<<ans;
}