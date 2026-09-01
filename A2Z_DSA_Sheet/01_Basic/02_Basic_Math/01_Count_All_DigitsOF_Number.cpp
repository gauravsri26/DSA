// Method 01 

#include<bits/stdc++.h>
using namespace std;
int CountDigits(int num){
    if(num == 0){
        return 1;
    }
    int cnt = 0;
    while(num != 0){
        num /= 10;
        cnt++;
    }
    return cnt;
}
int main(){
    int num;
    cin >> num;
    cout << CountDigits(num);
    return 0;
}

// Time complexity :- o(logn) and Space complexity :- o(1)

// Method 02

#include<bits/stdc++.h>
using namespace std;
int CountDigits(long long num){
    long long digit = (int)(log10(abs(num))+1);
    return digit;
}
int main()
{
    long long num;
    cin >> num;
    cout << CountDigits(num);
    return 0;
}

// Time Complexity :- o(1) and Space Complexity :- o(1)
