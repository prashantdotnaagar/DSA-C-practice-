#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void inputarray(int arr[],int size){
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    
    int visited[n];
    for(int i=0;i<n;i++){
        int count=1;

        if(visited[i]!=1){

            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
        // cout<<arr[i]<<" occurs "<<count<<" times"<<endl;
        }
    }
    
}
