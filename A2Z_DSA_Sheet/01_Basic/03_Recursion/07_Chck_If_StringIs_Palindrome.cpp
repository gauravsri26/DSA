
// Input: Str =  “ABCDCBA”
// Output: Palindrome
// Explanation: String when reversed is the same as string.

// Brute Force approach

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s, int l, int r){
    while(l < r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    int r = s.size()-1;
    if(isPalindrome(s, 0, r)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(1)

// Recursive Approach 

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s, int i, int n){
    if(i >= (n/2)){
        return true;
    }
    if(s[i] != s[n-i-1]){
        return false;
    }
    return isPalindrome(s, i+1, n);
}
int main(){
    string s;
    cin >> s;
    int n = s.size();
    if(isPalindrome(s, 0, n)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)