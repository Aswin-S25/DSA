#include<iostream>

void sort(int arr[], int n) {
    int temp;
    if(n == 1) return;

    for(int j=0;j<n-1;j++) {
        if(arr[j]>arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

    sort(arr, n-1);
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<"-<";
    }
    
}


int main()
{
    int arr[] = {2, 3, 4, 4, 2, 1, 3, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, n);
    display(arr, n);

    return 0;
}