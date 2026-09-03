
// Input: N = 5
// Output: 0 1 1 2 3 5
// Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

// Brute Force Approach

#include<bits/stdc++.h>
using namespace std;
void FibonacciNum(int num){
    if(num == 0){
        cout << "0";
    }
    else if(num == 1){
        cout << "1";
    }
    else{
        int fib[num+1];
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2; i<=num; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        
        for(int i=0; i<=num; i++){
            cout << fib[i] << " ";
        }
    }
}
int main(){
    int num;
    cin >> num;
    FibonacciNum(num);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)

// Better Approach

#include<bits/stdc++.h>
using namespace std;
void FibonacciNum(int num){
    if(num == 0){
        cout << "0";
    }
    else if(num == 1){
        cout << "1";
    }
    else{
        int secondLast = 0;
        int last = 1;
        cout << secondLast << " " << last << " ";
        for(int i=2; i<=num; i++){
            int curr = secondLast + last;
            secondLast = last;
            last = curr;
            cout << curr << " ";
        }
    }
}
int main(){
    int num;
    cin >> num;
    FibonacciNum(num);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(1)

// Optimal Approach 

#include<bits/stdc++.h>
using namespace std;
int FibonacciNum01(int num){
    if(num <= 1){
        return num;
    }
    return FibonacciNum01(num-1) + FibonacciNum01(num-2);
}
int main(){
    int num;
    cin >> num;
    cout << FibonacciNum01(num);
    return 0;
}

// Time Complexity :- o(2^n) and Space Complexity :- o(n)