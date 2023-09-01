#include<iostream>
using namespace std;

int power(int a, int b){

    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;

        //recursive call
    int ans=power(a,b/2);

    if(b%2==0)
        return ans*ans;

    if(b%2!=0)
        return a*ans*ans;
}

int main()
{
    
    int a,b;
    cout<<"Enter a,b: "<<endl;
    cin>>a;
    cin>>b;

    int ans=power(a,b);

    cout<<"Answer is "<<ans;
}