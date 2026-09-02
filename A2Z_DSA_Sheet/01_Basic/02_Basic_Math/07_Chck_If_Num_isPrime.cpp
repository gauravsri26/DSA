
// Input:N = 2   
// Output:True  
// Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

// Brute Force Approach

#include<bits/stdc++.h>
using namespace std;
bool isNumPrime(int num){
    if(num <= 1){
        return false;
    }
    int cnt = 0;
    for(int i=1; i<=num; i++){
        if(num % i == 0){
            cnt++;
        }
    }
    return cnt == 2;
}
int main(){
    int num;
    cin >> num;
    if(isNumPrime(num)){
        cout << "The Number is Prime";
    }
    else{
        cout << "The number is not Prime";
    }
    return 0;
}

// Time complexity :- o(n) and Space Complexity :- o(1)

// Optimal Approach to solve this problem 

#include<bits/stdc++.h>
using namespace std;
bool ChckPrime(int num){
    if(num <= 1){
        return false;
    }
    int cnt = 0;
    for(int i = 1; i*i<=num; i++){
        if(num % i == 0){
            cnt++;
            if((num/i)!=i){
                cnt++;
            }
        }
    }
    return cnt == 2;
}
int main(){
    int num;
    cin >> num;
    if(ChckPrime(num)){
        cout << "The Number is Prime";
    }
    else{
        cout << "The number is not Prime";
    }
    return 0;
}

// Time Complexit :- o(✓n) and Space Complexity :- o(1)