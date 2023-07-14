#include<iostream>
using namespace std;
int main()

{
    // char a;
    // cin>>a;
    // if(a>=97 && a<=127){
    //     cout<<"a is lowercase"<<endl;
    // }
    // else if (a>=65 && a<=90 )
    // {
    //     cout<<"a is uppercase"<<endl;

    // }
    // else{
    //     cout<<"a is numeric"<<endl;
    // }
    int n;
    int i=1;
    
    cin>>n;
    while(i<=n){
        int j=1;
        int value=i;
        while (j<=i)
        {
            cout<<(value)<<" ";
            j=j+1;
            value=value-1;
        }
        cout<<endl;
    i=i+1;
    
    }
    
    
    

}