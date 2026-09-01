
// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int num){
    if(num == 0){
        return true;
    }
    int temp = num;
    int ld;
    int rev = 0;
    while(temp != 0){
        ld = temp % 10;
        rev = rev * 10 + ld;
        temp /= 10;
    }
    return rev == num;
}
int main(){
    int num;
    cin >> num;
    if(isPalindrome(num)){
        cout << "Given no. is Palindrome";
    }
    else{
        cout << "Given no. is not Palindrome";
    }
    return 0;
}

