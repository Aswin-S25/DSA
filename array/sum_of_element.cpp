#include<bits/stdc++.h>
using namespace std;

int sum(int a[], int n)
{
    int initial_sum = 0;
    return accumulate(a, a+n, initial_sum);
}

int main()
{
    int a[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int res = sum(a, n);
    cout<<res;
    return 0;
}