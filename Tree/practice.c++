#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
}

int search(int inorder[], int start, int end, int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

node* bst(int preorder[], int inorder, int start, int end)
{
    static int indx = 0;
    if(start>end)
     return NULL;
    
}