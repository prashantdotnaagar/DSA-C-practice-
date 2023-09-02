#include<iostream>
using namespace std;


int partition(int arr[],int s, int e){
    int pivot= arr[s];
    int count = 0;

    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i])
            count++;
    }

    int pivotindex=s+count;
    swap(arr[s],arr[pivotindex]);

    int i=s;
    int j=e ;

    while(i<pivotindex and j>pivotindex){

        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex and j>pivotindex){
            swap(arr[i++],arr[j--]);
        }

    

}
return pivotindex;
}


void quickSort(int arr[], int s, int e){
    
    if(s>=e)
        return ;
    
    int p= partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
    
}

int main()
{
    int arr[5]={2,4,1,6,9};
    int n=5;
    

    quickSort(arr,0,n-1);
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;

    return 0;
    
}