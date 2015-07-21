#include <iostream>
#include <cstdlib>
#include <string>
#include<map>
//includes sai :)
#include <algorithm>
using namespace std;
 
int a[100001];
 
int main()
{
	string name;
	int n, i, t;
	long long ans;
	ios::sync_with_stdio(false);
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i=0; i<n; i++) cin >> name >> a[i];
		sort(a, a+n);
		ans = 0;
		for(i=0; i<n; i++) ans += abs(a[i]-(i+1));
		cout << ans << endl;
	}
	return 0;
} 
