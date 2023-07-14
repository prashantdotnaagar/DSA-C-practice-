#include <iostream>
using namespace std;

char odd_even(int number){
  
    if(number%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
        }
    return 0;
    }
    
int main(){
    
    int num=0;
    cin>>num;
    odd_even(num);

}