#include<iostream>
using namespace std;


bool linearsearch(int* arr, int size,int key){
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else{
        int ans = linearsearch(arr+1,size-1,key);
        return ans;
    }
}


int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=30;

    int ans = linearsearch(arr,size,key);
    if(ans==true){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
}