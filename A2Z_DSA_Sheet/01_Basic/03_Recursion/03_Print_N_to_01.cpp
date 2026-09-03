
// Input: N = 4
// Output: 4, 3, 2, 1
// Explanation: All the numbers from 4 to 1 are printed.

// Forward Recursion

#include<bits/stdc++.h>
using namespace std;
void PrintNum(int num, int i){
    if(i < 1){
        return;
    }
    cout << i << " ";
    PrintNum(num, i-1);
}
int main(){
    int num;
    cin >> num;
    PrintNum(num, num);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)

// Backtracking Code 

#include<bits/stdc++.h>
using namespace std;
void PrintNum(int num, int i){
    if(i > num){
        return;
    }
    PrintNum(num, i+1);
    cout << i << " ";
}
int main(){
    int num;
    cin >> num;
    PrintNum(num, 1);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)