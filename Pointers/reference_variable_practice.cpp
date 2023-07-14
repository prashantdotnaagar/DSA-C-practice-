#include <bits/stdc++.h>
using namespace std;

void update(int & i){
    i=i+1;
}

int main() {
//   int i=5;
//   int &j=i;
//   cout<<++j;

  
  int n=5;
  cout<<"BEFORE "<<n<<endl;

  update(n);
  cout<<"AFTER "<<n;
  return 0;
}