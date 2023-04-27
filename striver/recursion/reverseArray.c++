#include<bits/stdc++.h>
using namespace std;

void printAll(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<"->";
    }
    cout<<endl;
}
void Solution(int arr[], int start, int end) {
    if(start<end) {
        swap(arr[start], arr[end]);
        Solution(arr, start+1, end-1);
    }
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    Solution(arr, 0, n-1);
    printAll(arr, n);
    return 0;
}