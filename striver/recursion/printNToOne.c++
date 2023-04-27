#include<bits/stdc++.h>
using namespace std;

void Solution(int n) {
    if(n <= 0) return;

    cout<<n<<endl;
    Solution(--n);
}

int main() {

    int n=10;
    Solution(n);
    return 0;
}