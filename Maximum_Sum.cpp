#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxSum(int n, int arr[])
{
    int sum = 0;
    int s0 = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        s0 += arr[i] * i;
    }
    int max = s0;
    int si = s0;
    for (int i = 0; i < n - 1; i++)
    {
        int Sip1 = si + sum - n * arr[n - i - 1];
        if (Sip1 > max)
        {
            max = Sip1;
        }
        si = Sip1;
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxSum(n, arr);
    return 0;
}
