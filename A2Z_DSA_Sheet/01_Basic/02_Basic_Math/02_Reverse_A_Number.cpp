
// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

#include<bits/stdc++.h>
using namespace std;
int ReverseNumber(int num){
    int ld;
    int rev = 0;
    while(num != 0){
        ld = num % 10;
        rev = rev * 10 + ld;
        num /= 10;
    }
    return rev;
}
int main(){
    int num;
    cin >> num;
    cout << ReverseNumber(num);
    return 0;
}

// Time Complexity :- o(logn) and Space Complexity :- o(1)

