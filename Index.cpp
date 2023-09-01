#include<iostream>
using namespace std;


int getSum(int *arr,int n){
    int sum= 0;

    for(int i=0;i<=n;i++){
    sum = arr[i]+sum;
    }
    return sum;
}


int main()





{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int *ptr=new int [n];

    for(int i=0;i<n;i++){
        cin>>ptr[i];

    }

    int ans;
    ans=getSum(ptr,n);
    
    cout<<"Answer is "<<ans<<endl;

}