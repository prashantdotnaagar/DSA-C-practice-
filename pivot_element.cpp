#include <iostream>
#include <vector>
using namespace std;


// int sum( vector<int>arr){
//     int ans=0; 
//     int size = arr.size();
//     for(int i=0;i<size;i++){
//         ans= arr[i]+ans;
        
//     }return ans;

// }

int left_sum(vector<int>arr, int mid){
    int ans=0;
    for(int i=0;i<=mid-1;i++){
        ans=ans+arr[i];
    }return ans;

}

int right_sum(vector<int>arr, int mid){
    int ans=0;
    for(int i=0;i<=mid + 1;i++){
        ans=ans+arr[i];
    }return ans;

}

int pivot(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(left_sum(arr,mid)==right_sum(arr,mid)){
            return mid;
        }
        else if(left_sum(arr,mid)>right_sum(arr,mid)){
            end=mid-1;
        }
        else if (left_sum(arr,mid)<right_sum(arr,mid))
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
}

int main(){

    vector<int>arr={1,7,3,6,5,6};
    int ans=pivot(arr);
    cout<<ans<<endl;

    

}