#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n, int i) {
    if(i == n-1)
    {
        return arr[i];
    }
    
    return max( arr[i], largest(arr, n, i+1));
}

int main()
{
    int a[] = {1, 2, 3, 4, 54 };
    int n = sizeof(a)/sizeof(a[0]);
    int res = largest(a, n, 0);
    cout<<res;
    
    return 0;
}