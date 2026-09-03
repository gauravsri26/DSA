
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

// Brute Force Approach 

#include<bits/stdc++.h>
using namespace std;
vector<int> ReverseArray(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n);
    for(int i=0; i<=n-1; i++){
        ans[i] = arr[n-i-1];
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> reverArr = ReverseArray(arr);
    for(int i=0; i<n; i++){
        cout << reverArr[i] << " ";
    }
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)

// Better Approach 

#include<bits/stdc++.h>
using namespace std;
vector<int> ReverseArr(vector<int> &arr){
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    return arr;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> reverseArr = ReverseArr(arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(1)

// Optimal Approach with recursion in it

#include<bits/stdc++.h>
using namespace std;
void ReverseArr(vector<int> &arr, int i, int n){
    if(i >= (n/2)){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    ReverseArr(arr, i+1, n);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ReverseArr(arr, 0, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity :- o(n) and Space Complexity :- o(n)