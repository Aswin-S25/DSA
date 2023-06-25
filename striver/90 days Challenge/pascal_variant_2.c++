/*

problem statement

    givent the row number n. Print the nth row of pascal's triangle.
 
//algorithm

    link: https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/

    ans = (row - col) / col 

    first and the last element will be always one

time complexity = O(n), where n is the row


*/


#include<iostream>

void PascalTriangle(int n) {
    long long ans = 1;
    std::cout<<ans<<" ";

    for(int i=1;i<n;i++) {
        ans *= (n-i);
        ans /= i;

        std::cout<<ans<<" ";
    }
}

int main()
{
    int r;
    std::cin>>r;
    PascalTriangle(r);


    return 0;
}