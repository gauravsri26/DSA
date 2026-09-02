
// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.

// Brute Froce Approach to find all divisors of a number

#include<bits/stdc++.h>
using namespace std;
void PrintAllDivisors01(int num){
    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
}
int main(){
    int num;
    cin >> num;
    PrintAllDivisors01(num);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(1)

// Optimal Approach 

#include<bits/stdc++.h>
using namespace std;
vector<int> PrintAllDivisors(int num){
    vector<int> result;
    for(int i=1; i*i<=num; i++){
        if(num % i == 0){
            result.push_back(i);
            if((num/i)!=i){
                result.push_back(num/i);
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}
int main(){
    int num;
    cin >> num;
    vector<int> sol = PrintAllDivisors(num);
    for(int i=0; i < sol.size(); i++){
        cout << sol[i] << " ";
    }
    return 0;
}

// Time Complexity :- o(✓n + k log k) and Space Complexity :- o(k)