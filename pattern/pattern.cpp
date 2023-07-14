#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    
    while(i<=n){
        int j=1;
        char value='D'-i+j;
        while (j<=i)
        {
            cout<<value<<" ";
            j=j+1;
            value+=1;
           
            
        }
        cout<<endl;
        i=i+1;
        
    }
}