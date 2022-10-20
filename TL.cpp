#include <bits./stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, m, a, b, c, d = 0;
    cin >> n >> m;
    int arr[n], brr[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int j = 0; j < m; j++)
    {
        cin >> brr[j];
    }
    sort(brr, brr + m);

    a = arr[0];
    b = arr[n - 1];
    c = brr[0];
    d = max(2 * a, b);

    if (d < c)
    {
        cout << d << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}