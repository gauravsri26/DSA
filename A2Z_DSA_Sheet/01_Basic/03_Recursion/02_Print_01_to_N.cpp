
// Input: N = 4
// Output: 1, 2, 3, 4
// Explanation: All the numbers from 1 to 4 are printed.

// Forward Recursion

#include<bits/stdc++.h>
using namespace std;
void PrintNum(int num, int i){
    if(i>num){
        return;
    }
    cout << i << endl;
    PrintNum(num, i+1);
}
int main(){
    int num;
    cin >> num;
    PrintNum(num, 1);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)

// Backtracking to print from 1 to N

#include<bits/stdc++.h>
using namespace std;
void PrintNum(int num, int i){
    if(i<1){
        return;
    }
    PrintNum(num, i-1);
    cout << i << " ";
}
int main(){
    int num;
    cin >> num;
    PrintNum(num, num);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)