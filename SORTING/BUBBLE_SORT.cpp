#include <iostream>
using namespace std;

int main(){

    int size;
    cout<<"ENTER SIZE"<<endl;
    cin>>size;
    int count =0;

    int arr[100];
    cout<<"ENTER ARRAY"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size-1;i++){

        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}