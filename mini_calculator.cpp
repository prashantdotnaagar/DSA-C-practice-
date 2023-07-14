#include <iostream>
using namespace std;

int main()
{

    int a,b;
    char op;
    int ans=0;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    cout<<"Enter operation (+,-,*,/)"<<endl;
    cin>>op;
    
    switch (op)
    {
    case '+' :ans=a+b;
    cout<<ans;
            break;
    case '*': ans=a*b;
    cout<<ans;
            break;
    case '/': a/b;
    cout<<ans;
            break;
    case '-': a-b;
    cout<<ans;
            break;
    
    default: cout<<"operation does not exist in calculator yet";
        break;
    }
   

    return 0;
}
