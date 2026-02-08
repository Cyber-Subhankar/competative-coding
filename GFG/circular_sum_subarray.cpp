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
    int maxSofar = arr[0];
    int maxEnding = arr[0];
    int minSofar = arr[0];
    int minEnding = arr[0];
    int i;
    int sum =0;
    int result =0;

    for (int i =1; i<n; i++){
        if(i>0){
        sum += arr[i];
        maxEnding = max(arr[i],maxEnding + arr[i]);
        maxSofar = max(maxSofar,maxEnding);

        minEnding = min(arr[i],minEnding + arr[i]);
        minSofar = min(minSofar,minEnding);

        }
    }
    if(maxSofar<0){
        result = maxSofar;
    }
    else {
    result = max(maxSofar, sum - minSofar);
    }

    cout << "Sum of Circular max subarray :" << maxSofar << endl;
return 0;
}