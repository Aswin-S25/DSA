#include<bits/stdc++.h>
using namespace std;

int Solution(int n, int sum = 0)
{   
    if(n<=0) return sum;

    sum += n;
    return Solution(--n, sum);
}
int main()
{
    int n=10;
    cout<<Solution(n);

    return 0;
}