#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    int sum=0;
    cout<<"Enter size"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
            sum=arr[i]+sum;
    }
    cout<<"Sum of array is "<<sum<<endl;
}