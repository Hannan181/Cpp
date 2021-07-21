#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2]; //temporary array
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[i+l];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void mergeDiv(int arr[], int l, int r)
{
    if (l<r)
    {
        int mid = (l + r) / 2;
        mergeDiv(arr, l, mid);
        mergeDiv(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[6] = {1,2,5,2,6,8};
    mergeDiv(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}