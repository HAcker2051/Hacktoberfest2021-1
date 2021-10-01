#include <iostream>
using namespace std;

bool check_array(int n, int arr[])
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    bool is_smaller_sorted = check_array(n - 1, arr + 1);
    return is_smaller_sorted;
    // if (is_smaller_sorted)
    // {
    //     return true;
    // }
    // else
    //     false;
}
int main()
{
    int n, arr[10];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << check_array(n, arr);
    return 0;
}
