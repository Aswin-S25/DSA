/*

problem statement
    given an array arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.



*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};
    next_permutation(arr, arr+3);

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}