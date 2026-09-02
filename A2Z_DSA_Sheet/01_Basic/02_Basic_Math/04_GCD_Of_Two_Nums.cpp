
// Example :
// Input: N1 = 9, N2 = 12

// Output: 3
// Explanation:
// Factors of 9: 1, 3, 9
// Factors of 12: 1, 2, 3, 4, 6, 12
// Common Factors: 1, 3
// Greatest common factor: 3 (GCD)

// Brute Force Approach to find GCD of 2 numbers

// #include<bits/stdc++.h>
// using namespace std;
// int GCD_Of_TwoNum(int n1, int n2){
//     int gcd = 1;
//     for(int i=min(n1, n2); i>0; i--){
//         if((n1 % i == 0) && (n2 % i == 0)){
//             gcd = i;
//             return gcd;
//         }
//     }
// }
// int main(){
//     int n1;
//     cin >> n1;
//     int n2;
//     cin >> n2;
//     cout << GCD_Of_TwoNum(n1, n2);
//     return 0;
// }

// Time Complexity :- o(min(n1, n2)) and Space Complexity :- o(1)

// Optimal Approach to find GCD of two numbers 

#include<bits/stdc++.h>
using namespace std;
int GCD_Of_TwoNum(int num_01, int num_02){
    while(num_01 > 0 && num_02 > 0){
        if(num_01 > num_02){
            num_01 = num_01 % num_02;
        }
        else{
            num_02 = num_02 % num_01;
        }
    }
    if(num_01 == 0){
        return num_02;
    }
    else{
        return num_01;
    }
}
int main(){
    int num_01;
    cin >> num_01;
    int num_02;
    cin >> num_02;
    cout << GCD_Of_TwoNum(num_01, num_02);
    return 0;
}

// Time Complexity :- o(log (min(num_01, num_02))) and space complexity :- o(1)