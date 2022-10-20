#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, m, a[4][5001], b[4], count;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        a[m][b[m]++] = i;
    }
    count = min(b[1], min(b[2], b[3]));
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << a[1][i] << " " << a[2][i] << " " << a[3][i] << endl;
    }

    return 0;
}