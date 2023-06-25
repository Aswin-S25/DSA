//find the maximum subarray sum


//time complexity = O(n)
#include<bits/stdc++.h>
using namespace std;

long long maxSubArray(int arr[], int n) {
    long long max = LONG_MIN;
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];

        if(sum > max) max = sum;

        if(sum < 0) sum = 0;
    }

    return max;

}
int main()
{
    int arr[] = {-8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10};

    int n = sizeof(arr)/sizeof(arr[0]);

    long long res = maxSubArray(arr, n);

    cout<<res;


    return 0;
}