#include <iostream>
#include <climits>
using namespace std;


int arr_max(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    return max;
}

int arr_min(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    
    }
    cout<<"Max value is "<<arr_max(arr,size)<<endl;
    cout<<"Min value is "<<arr_min(arr,size)<<endl;

}