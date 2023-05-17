#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 1, 4, 2, 3, 2, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int element;
    int element1;
    for(auto x : mp ) {
        cout<<x.first<<"-"<<x.second<<endl;
        if(max < x.second){
            max = x.second;
            element = x.first;
        }
        if(min > x.second) {
            min = x.second;
            element1 = x.first;
        }
    }
    
    cout<<element<<"=max\n";
    cout<<element1<<"=min\n";
    return 0;
}