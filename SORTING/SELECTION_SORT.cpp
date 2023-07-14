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

    for(int i=0;i<size;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex])
                minindex=j;
        }
        swap(arr[minindex],arr[i]);
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}