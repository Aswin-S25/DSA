#include<bits/stdc++.h>
using namespace std;

void DutchNationalFlag(vector<int>& arr, int n) {
    int low = 0, mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
    
int main() {
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    int n = arr.size();
    DutchNationalFlag(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
