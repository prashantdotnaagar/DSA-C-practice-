#include <bits/stdc++.h>
using namespace std;

bool recursive(string& n, int i, int j) {
    if (i >= j)
        return true;
    if (n[i] != n[j])
        return false;
    else {
        i++;
        j--;
        return recursive(n, i, j);
    }
}

bool checkPalindrome(long long N) {
    string binaryStr = bitset<4>(N).to_string();  // Convert long long to binary string
    
    int j = binaryStr.length() - 1;
    cout<<binaryStr<<endl;
    return recursive(binaryStr, 0, j);
}

int main() {
    long long num = 9;  // Replace with the number you want to check
    
    if (checkPalindrome(num)) {
        cout << num << " in binary is a palindrome." << endl;
    } else {
        cout << num << " in binary is not a palindrome." << endl;
    }

    return 0;
}
