#include <iostream>
using namespace std;

int main(){
    int n;
    bool flag=1;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==1){
        cout<<"Prime no.";

    }
    else{
        cout<<"Not a prime no.";
    }
}