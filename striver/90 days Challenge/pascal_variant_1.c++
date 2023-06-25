/*
problem statement
    given row number r and column number c. Prin the elment at pisition (r, c) in the pascal triangle

algorithm

So, nCr = (n*(n-1)*(n-2)*.....*(n-r+1)) / (r*(r-1)*(r-2)*....1)


complexity

O(c), where c is the no of column
*/




#include<iostream>
#include<vector>

// to calculate nCr
int nCr(int n, int r) {
    long long res = 1;

    for(int i=0;i<r;i++) {
        res *= (n-i);
        res /= i+1;
    }

    return res;
}

int element(int r, int c) {
    int sol = nCr(r-1, c-1);
    return sol;
}

int main()
{
    int r, c;
    std::cin>>r>>c;

    int res = element(r, c);
    std::cout<<res;


    return 0;
}