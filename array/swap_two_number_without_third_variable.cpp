#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    b = a + b;
    a = b - a;
    b = b - a;
}

int main()
{
    int a = 10, b = 20;
    
    swap(a, b);
    cout<<a<<b;
    
    return 0;
}