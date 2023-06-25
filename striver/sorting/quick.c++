#include <iostream>
#include <algorithm>
#include <vector>

int partition(std::vector<int> &arr, int low, int high)
{

    // assume pivot as the last element
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
        {
            i++;
        }
        while (arr[j] > pivot && j > low)
        {
            j--;
        }

        if (i < j)
            std::swap(arr[i], arr[j]);
    }

    std::swap(arr[j], arr[low]);

    return j;
}

void quickSort(std::vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
std::vector<int> qs(std::vector<int> arr) {
    quickSort(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    std::vector<int> arr = {2, 3, 4, 1, 2, 3, 4, 32, 3, 2, 3, 10};
    int n = arr.size();

    arr = qs(arr);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "<-";
    }

    return 0;
}