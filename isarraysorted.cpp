#include<iostream>
using namespace std;

bool issorted(int arr[] , int size){
    if(size==0 || size==1)
        return true;
    
    if(arr[0] > arr[1])
        return false;

    else{
        int ans= issorted(arr+1,size - 1);
        return ans;

    }
    

}


int main()
{

    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int *arr= new int[size];

    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    
    cout<<issorted(arr,size);

    delete []arr;
}