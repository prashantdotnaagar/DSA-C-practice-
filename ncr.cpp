#include <iostream>
using namespace std;

int factorial( int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact= fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int ans=0;
    ans=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"Answer is "<<ans<<endl;

    return ans;
}

int main(){
    int n=0;
    int r=0;
    cin>>n;
    cin>>r;
    nCr(n,r);
    



}