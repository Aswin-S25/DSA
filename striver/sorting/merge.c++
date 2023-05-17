#include <bits/stdc++.h>
using namespace std;

// merge function to do the sorting

void merge(vector<int> &arr, int low, int mid, int high)
{
    // storing to a temp vector;
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// mergesort function

void mergesort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    // left of the array
    mergesort(arr, low, mid);

    // right of the arry
    mergesort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

// to display the array
void display(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "->";
    }
}

int main()
{
    vector<int> arr = {2, 5, 3, 3, 2, 11, 4, 30, 1};
    int n = arr.size();
    cout << "n = " << n << endl;

    mergesort(arr, 0, n - 1);
    display(arr);
}