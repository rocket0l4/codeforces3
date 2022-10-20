#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, x[1000], y[1000], count = 0;
    bool right[200], left[200], up[200], down[200];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (x[i] > x[j] && y[i] == y[j])
                right[i] = true;
            else if (x[i] < x[j] && y[i] == y[j])
                left[i] = true;
            else if (x[i] == x[j] && y[i] > y[j])
                up[i] = true;
            else if (x[i] == x[j] && y[i] < y[j])
                down[i] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (right[i] == true && left[i] == true && up[i] == true && down[i] == true)
            count++;
    }
    cout << count << endl;

    return 0;
}