#include <iostream>
using namespace std;

int main()
{
 //    #ifndef ONLINE_JUDGE
 //    freopen("input.txt","r",stdin);
 //    freopen("output.txt","w",stdout);
 //    #endif
    
	long long int num;
	cin >> num;
	cout << num << " ";
	while (num > 1)
	{
		if (num & 1)
			n = (3 * num) + 1;
		else
			num >>= 1;
		cout << num << " ";
	}
	return 0;
}
