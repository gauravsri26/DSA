
// Input:N = 153
// Output:True
// Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153

#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int num){
    int temp = num;
    int k = (int)to_string(num).size();
    int sum = 0;
    int ld;
    while(temp != 0){
        ld = temp % 10;
        int power = 1;
        for(int i=0; i<k; i++){
            power *= ld;
        }
        sum += power;
        temp /= 10;
        cout << sum << endl;
    }
    return sum == num;
}
int main(){
    int num;
    cin >> num;
    if(isArmstrong(num)){
        cout << "Given no. is an Armstrong no.";
    }
    else{
        cout << "Given no. is not an Armstrong no.";
    }
    return 0;
}

// Time Complexity :- o(logn) and Space Complexity :- o(1)