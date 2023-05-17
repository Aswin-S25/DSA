#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<"->";
    }
}

int main()
{
    int arr[] = {2, 4, 3, 1, 2, 3, 1, 3, 2};

    int n = sizeof(arr)/sizeof(arr[0]);
    int min;
    for(int i=0;i<n;i++) {
        min = i;
        for(int j=i+1;j<n;j++) {
            if(arr[min] > arr[j]) {
                min = j;

            }
        }
        swap(arr[i], arr[min]);
    }

    display(arr, n);

    return 0;
}