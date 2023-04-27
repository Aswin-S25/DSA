#include<bits/stdc++.h>
using namespace std;

void Solution(int n, int i) {
    if(i>=n) return;
    cout<<i+1<<", ";
    Solution(n, ++i);
}

int main()
{
    int n = 10, i=0;
    Solution(n, i);
}