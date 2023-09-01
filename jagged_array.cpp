#include<iostream>
using namespace std;

int main()
{
    int row,n;
    cout<<"enter row";
    cin>>row;

    cout<<"enter n ";
    cin>>n;

    int *col=new int[n];
    // cout<<"enter col";
    // cin>>col;
    // int col[]={3,2,5,1};
    cout<<"Enter no. of col";

    for (int i=0;i<n;i++){
        cin>>col[i];
    }

    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col[i]]; 
    }
    cout<<"enter elements of array now"<<endl;
    for (int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }

    for (int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    

    // releasing memory



    for (int i =0;i<row;i++){
        delete [] arr[i]; 

    }


    delete [] arr;
}