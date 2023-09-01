#include<iostream>
using namespace std;


void mergearray(int* arr, int s, int e){
    int m=(s+e)/2;
    int len1=m-s+1;
    int len2=e-m;

    int *arr1=new int [len1];
    int *arr2=new int [len2];

    int mainarrayindex=s;
    for (int i=0;i<len1;i++){
        arr1[i]=arr[mainarrayindex++];
    }

    mainarrayindex=m+1;
    for (int i=0;i<len2;i++){
        arr2[i]=arr[mainarrayindex++];
    }
    int index1=0;
    int index2=0;
    mainarrayindex=s;

    while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2])
            arr[mainarrayindex++]=arr1[index1++];
        if(arr1[index1]>arr2[index2])
            arr[mainarrayindex++]=arr2[index2++];
        
    }

    while(index1<len1){

        arr[mainarrayindex++]=arr1[index1++];

    }

    while(index2<len2){
        arr[mainarrayindex++]=arr2[index2++];

    }



}

void mergeSort(int* arr, int s , int e){
    int mid=(s+e)/2;
    if(s>=e)
        return;
    //left part 

    mergeSort(arr,s,mid);

    //right part mein entry
    mergeSort(arr,mid+1,e);

    mergearray(arr,s,e);

}



int main()
{
    int arr[5]={2,10,87,12,4};
    int size=5;

    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}