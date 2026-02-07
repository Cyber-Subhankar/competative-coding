#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout << "Enter number of elements :";
    cin >> n;

    vector<int>arr(n);
    cout << "Enter elements :";
    for (int i =0 ; i< n ; i++){
        cin >> arr[i];
    } 

    // Kadane's algorithm 
    int maxSofar = arr [0];
    int maxEnding = arr [0];

    for (int i = 1; i < n ; i++){
        maxEnding = max (arr [i], maxEnding + arr [i]);
        maxSofar = max (maxEnding , maxSofar);
    }
    cout << "Maximum Subarrray Sum :" << maxSofar << endl;
    return 0;
}