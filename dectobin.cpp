#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int bit=0;
    int n=0;
    float answer=0;
    cin>>n;
    int i=0;

    while (n!=0)
    {
        bit = n&1;
        answer=(bit * pow(10,i)) + answer;

        n=n>>1;
        i++;
    }
    
    cout<<answer<<endl;




    return 0;
}