#include<bits/stdc++.h>
using namespace std;

//display the array

void display(int arr[], int n) {
    for(int i=0;i<12;i++) {
        cout<<arr[i]<<"-<";
    }
}

int main()
{
    int arr[] = {3, 2, 5, 3, 1, 4, 2, 1, 34, 2, 4, 2};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++) {
        int j=i;
        while (j>0 && arr[j] < arr[j-1])
        {
            /* code */
            swap(arr[j], arr[j-1]);
            j--;
        }
        
    }

    display(arr, n);


    return 0;
}