#include <iostream>
#include <algorithm>
using namespace std;

int countDistinct(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            i++;
        }

        res++;
    }

    return res;
}
int main()
{
    int n, count = 0;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << countDistinct(arr, n);
    return 0;
}
