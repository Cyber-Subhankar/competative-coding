#include <vector>
#include <deque>
#include<bits/stdc++.h>
using namespace std;

vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    deque<int> dq;          // stores indices
    vector<int> result;     // stores answers
for(int i=0; i <=arr.size(); i++){
    if(!dq.empty() && dq.front()<=i-k )
    dq.pop_front();
    while(!dq.empty() && arr[dq.back()]<arr[i])
    dq.pop_back();
    dq.push_back(i);
    if(i<=k-1)
    result.push_back(arr[dq.front()]);}
    return result;}

    int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> ans = maxOfSubarrays(arr, k);

    for (int x : ans)
        cout << x << " ";

    return 0;
}