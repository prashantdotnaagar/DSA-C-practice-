#include <bits/stdc++.h>
using namespace std;

int main() {
  int var=5;
  int *ptr1=&var;
  int  **ptr2=&ptr1;

  cout<<"1st: "<<**ptr2<<endl;
  cout<<"2nd: "<<ptr2<<endl;
  cout<<"3rd: "<<&var<<endl;
  cout<<"4th: "<<&ptr1;

  return 0;
}