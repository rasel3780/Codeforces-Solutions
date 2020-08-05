#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, z, i, n;
	int sumX = 0, sumY=0, sumZ=0;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>x>>y>>z;
		sumX = sumX+x;
		sumY = sumY+y;
		sumZ = sumZ+z;
	}
	if (sumX==0 && sumY==0 && sumZ==0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}