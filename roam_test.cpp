#include <bits./stdc++.h>
using namespace std;
int k;
bool islucky(int i)
{
    int count = 0;
    while (i > 0)
    {
        if (i % 10 == 4 || i % 10 == 7)
            count++;
        i /= 10;
        if (count > k)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, ans, count = 0;
    cin >> n >> k;
    while (n-- > 0)
    {
        cin >> ans;
        if (islucky(ans))
            count++;
    }
    cout << ans << endl;

    return 0;
}