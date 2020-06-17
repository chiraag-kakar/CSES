#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ll n,ele,s=0;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cin>>ele;
		s=s+ele;
	}
	cout<<((n*(n+1))/2)-s;
	return 0;
}
