#include<bits/stdc++.h>
using namespace std;

int MaxProfit(vector<int>& arr, int n) {
    int maxprice = 0;
    int minpro = LONG_MAX;

    for(int i=0;i<n;i++) {
        minpro = min(arr[i], minpro);
        maxprice = max(maxprice,  arr[i]-minpro);

    }
    return maxprice;

}


int main() {
    vector<int> arr = {7,1,5,3,6,4};

    int n = arr.size();
    

    int res = MaxProfit(arr, n);
    cout<<res;
}