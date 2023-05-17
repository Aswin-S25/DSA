#include<bits/stdc++.h>
using namespace std;


void display(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<"-<";
    }
}
int main()
{
    int arr[] = {1, 4, 2, 5, 3, 2, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    //bubble sort
    for(int i=0;i<n-1;i++) {
        int swapped = 0;
        for(int j=0;j<n-1-i;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0) {
            break;
        }
    }

    display(arr, n);

    return 0;
}