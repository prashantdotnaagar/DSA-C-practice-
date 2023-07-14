#include <iostream>
using namespace std;

int main(){

    int size;
    cout<<"ENTER SIZE"<<endl;
    cin>>size;

    int arr[size];
    cout<<"ENTER ARRAY"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=1;i<size;i++){

        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}