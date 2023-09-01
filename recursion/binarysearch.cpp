#include<iostream>
using namespace std;

bool binarySearch( int* arr,int s, int e, int key){
    int mid = s+ (e-s)/2;
    if (s>e)
        return false;
    if(arr[mid]==key)
        return true;
    if(arr[mid]>key)
        return binarySearch(arr,s,mid-1,key);
    else{
       return binarySearch(arr,mid+1,e,key);
    }
    
}


int main()
{
    
    int arr[6]={2,4,6,10,14,18};
    int key ;
    cout<<"Eneter element to be found: "<<endl;
    cin>>key;
    int size= 6;
    int ans = binarySearch(arr,0,6,key);
    

    if(ans==1)
        cout<<"Elemenet is present";
    else{
        cout<<"Element is not present";
    }
}