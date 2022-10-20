#include <bits./stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n, k, count(0);
    cin >> n >> k;
    string s;

    while (n--)
    {
        int luckey(0);
        cin>>s;

        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                luckey += 1;
            }
        }
        if (luckey <= k)
        {
            count += 1;
        }
    }
    cout << count << endl;

    return 0;
}