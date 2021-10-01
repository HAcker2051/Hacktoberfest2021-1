/*
The polar bears are going fishing. They plan to sail from (sx, sy) to (ex, ey). However, the boat can only sail by wind. At each second, the wind blows in one of these directions: east, south, west or north. Assume the boat is currently at (x, y).

If the wind blows to the east, the boat will move to (x + 1, y). If the wind blows to the south, the boat will move to (x, y - 1). If the wind blows to the west, the boat will move to (x - 1, y). If the wind blows to the north, the boat will move to (x, y + 1). Alternatively, they can hold the boat by the anchor. In this case, the boat stays at (x, y). Given the wind direction for t seconds, what is the earliest time they sail to (ex, ey)?

Input Format

The first line contains five integers t, sx, sy, ex, ey. The starting location and the ending location will be different.

The second line contains t characters, the i-th character is the wind blowing direction at the i-th second. It will be one of the four possibilities: "E" (east), "S" (south), "W" (west) and "N" (north).

Constraints

(1 ≤ t ≤ 10^5).
 - 10^9 ≤ sx, sy, ex, ey ≤ 10^9
Output Format

If they can reach (ex, ey) within t seconds, print the earliest time they can achieve it. Otherwise(if they cannot reach the position), print "-1" (without quotes).

Sample Input 0

5 0 0 1 1
SESNW
Sample Output 0

4
Explanation 0

In the first sample, they can stay at seconds 1, 3, and move at seconds 2, 4.

Sample Input 1

10 5 3 3 6
NENSWESNEE
Sample Output 1

-1
Explanation 1

In the second sample, they cannot sail to the destination.
*/
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int t, sx, sy, ex, ey;
const int maxn = 1e5 + 10;
int S, E, W, N, M;
int s, e, w, n;
char a[maxn];
int main()
{
    cin >> t >> sx >> sy >> ex >> ey;
    E = ex - sx;
    W = sx - ex;
    N = ey - sy;
    S = sy - ey;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        if (a[i] == 'E')
        {
            e++;
        }
        if (a[i] == 'W')
        {
            w++;
        }
        if (a[i] == 'N')
        {
            n++;
        }
        if (a[i] == 'S')
        {
            s++;
        }
    }
    if (S > s || W > w || N > n || E > e)
    {
        cout << "-1" << endl;
    }
    else
    {
        int time = 0;
        int t1 = 0, t2 = 0;
        if (E >= W && N >= S)
        {
            for (int i = 0; i < t; i++)
            {
                if (a[i] == 'E')
                {
                    t1++;
                }
                if (a[i] == 'N')
                {
                    t2++;
                }
                time++;
                if (t1 >= E && t2 >= N)
                {
                    break;
                }
            }
        }
        else if (W >= E && N >= S)
        {
            for (int i = 0; i < t; i++)
            {
                if (a[i] == 'W')
                {
                    t1++;
                }
                if (a[i] == 'N')
                {
                    t2++;
                }
                time++;
                if (t1 >= W && t2 >= S)
                {
                    break;
                }
            }
        }
        else if (W >= E && S >= N)
        {
            for (int i = 0; i < t; i++)
            {
                if (a[i] == 'W')
                {
                    t1++;
                }
                if (a[i] == 'S')
                {
                    t2++;
                }
                time++;
                if (t1 >= W && t2 >= S)
                {
                    break;
                }
            }
        }
        else if (E >= W && S >= N)
        {
            for (int i = 0; i < t; i++)
            {
                if (a[i] == 'E')
                {
                    t1++;
                }
                if (a[i] == 'S')
                {
                    t2++;
                }
                time++;
                if (t1 >= E && t2 >= S)
                {
                    break;
                }
            }
        }
        cout<<time<<endl;
    }
    return 0;
}
