#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    bool flag=true;

    
    for(int i=0;i<size;i++){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        i++;
        }
    }
        
    
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}