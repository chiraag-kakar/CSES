#include <bits/stdc++.h>
#include <string.h>
using namespace std;

#define ll long long

#define c1 counter1
#define c2 counter2

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

    string s;
    cin >> s;
    ll c1 = 0, c2 = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i+1] != s[i])
        {
            c1 = max(c1, c2);
            c2 = 0;
        }
        c2++;
    }
    // c1 = max(c1, c2);
    cout << c1;
    return 0;
}
