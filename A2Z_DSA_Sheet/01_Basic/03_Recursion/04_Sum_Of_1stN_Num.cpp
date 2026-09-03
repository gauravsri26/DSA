
// Input: N=5
// Output: 15
// Explanation: 1+2+3+4+5=15

// Brute Force Approach 

// #include<bits/stdc++.h>
// using namespace std;
// void SumOfNnum(int num){
//     if(num == 0){
//         cout << num;
//     }
//     int sum = 0;
//     for(int i = 1; i <= num; i++){
//         sum = sum + i;
//     }
//     cout << sum;
// }
// int main(){
//     int num;
//     cin >> num;
//     SumOfNnum(num);
//     return 0;
// }

// Time Complexity :- o(n) and Space Complexity :- o(1)

// Solving it by using Mathematical Formula 

// #include<bits/stdc++.h>
// using namespace std;
// int SumOfNnum(int num){
//     return ((num*(num+1)/2));
// }
// int main(){
//     int num;
//     cin >> num;
//     cout << SumOfNnum(num);
//     return 0;
// }

// Time Complexity :- o(1) and Space Complexity :- o(1)

// Now Solving it with recursive approach

#include<bits/stdc++.h>
using namespace std;
int SumOfNnum(int num, int sum, int i){
    if(i > num){
        return sum;
    }
    return SumOfNnum(num, sum + i, i + 1);
}
int main(){
    int num;
    cin >> num;
    cout << SumOfNnum(num, 0, 1);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)