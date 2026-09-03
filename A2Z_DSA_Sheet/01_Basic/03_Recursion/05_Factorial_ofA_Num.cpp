
// Input: X = 5
// Output: 120
// Explanation: 5! = 5*4*3*2*1 = 120 

// Brute Force Approach and Iterative approach

#include<bits/stdc++.h>
using namespace std;
int Fact(int num){
    if(num == 1){
        return 1;
    }
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = i * fact;
    }
    return fact;
}
int main(){
    int num;
    cin >> num;
    cout << Fact(num);
    return 0;
}

// Time Complexity :- o(n) and o(1)

//  Recursive Approach 

#include<bits/stdc++.h>
using namespace std;
int Fact(int num){
    if(num <= 1){
        return 1;
    }
    return num * Fact(num - 1);
}
int main(){
    int num;
    cin >> num;
    cout << Fact(num);

    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)