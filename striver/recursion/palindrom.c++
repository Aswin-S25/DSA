#include<bits/stdc++.h>
using namespace std;



bool Solution(int i, string s)
{
    if(i>=s.length()/2) return true;
    if(s[i] != s[s.length()-i-1]) return false;
    return Solution(i+1, s);
}
int main()
{
    string s = "ada";
    if(Solution(0, s)) cout<<"paliendrome";
    else cout<<"not paliendrome";

    return 0;
}