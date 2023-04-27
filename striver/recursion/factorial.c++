#include<bits/stdc++.h>
using namespace std;

int Solution(int n) {
    if(n==1) return 1;
    return n * Solution(n-1);
}

int main()
{
    int n=5;
    cout<<Solution(n);

    return 0;
}