
// Input: N = 3
// Output: Ashish Ashish Ashish 
// Explanation: Name is printed 3 times.

#include<bits/stdc++.h>
using namespace std;
void PrintNames(string name, int num, int cnt) {
    if(cnt == num) {
        return;
    }
    cout << name << endl;
    PrintNames(name, num, cnt + 1);
}
int main(){
    int num;
    cin >> num;
    cin.ignore();
    string name;
    getline(cin, name);
    PrintNames(name, num, 0);
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)

