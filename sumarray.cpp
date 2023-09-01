#include<iostream>
using namespace std;

int sumarr(int *arr, int size){

    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int remainingpart= sumarr(arr+1,size-1);
    return arr[0]+remainingpart;
    

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

    cout<<sumarr(arr,size);
    
}