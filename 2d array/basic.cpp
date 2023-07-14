#include <iostream>
using namespace std;


bool ispresent(int arr[][10],int r, int c, int target){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if (arr[i][j]==target)
            return 1;

        }
        
}
    return 0;
}

//row wise sum
void printsum(int arr[][10],int r, int c){
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){

    int arr[10][10];
    int r, c,target;
    cout<<"Enter no. of rows"<<endl;
    cin>>r;
    cout<<"Enter no. of coloumns"<<endl;
    cin>>c;
    cout<<"Enter matrix elemets"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"MATRIX IS: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Enter element to be searched"<<endl;
    cin>>target;

    if (ispresent(arr,r,c,target)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }

    printsum(arr,r,c);
    
}