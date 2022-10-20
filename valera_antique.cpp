#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, v, k, s, arr[51], m = 0, l = 0;

    cin >> n >> v;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        l =0;
        for (int j = 0; j < k; j++)
        {
            cin >> s;
            if (s < v && l == 0)
            {
                arr[m] = i;
                m++;
                l = 1;
            }
        }
    }
    cout << m << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}