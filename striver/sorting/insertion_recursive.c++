#include<iostream>


void insertion(int arr[], int n, int i=0) {
    int temp;
    if(n == 1) return;
    int j=i;
    while (j>0 && arr[j-1] > arr[j])
    {
        /* code */
        temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;

    }

    insertion(arr, n-1, i+1);   

    
    
}

int main()
{
    int arr[] = {3, 2, 1, 4, 2, 2, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion(arr, n);

    for(int i=0;i<n;i++) {
        std::cout<<arr[i]<<"<-";
    }

    return 0;
}