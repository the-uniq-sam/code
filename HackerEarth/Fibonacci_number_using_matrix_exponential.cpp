#include <bits/stdc++.h>
using namespace std;

void mul(vector<vector<long long int>>&v1, vector<vector<long long int>>v2)
{
	long long int a,b,c,d;
	a = (v1[0][0]*v2[0][0]%1000000007 + v1[0][1]*v2[1][0]%1000000007)%1000000007;
	b = (v1[0][0]*v2[0][1]%1000000007 + v1[0][1]*v2[1][1]%1000000007)%1000000007;
	c = (v1[1][0]*v2[0][0]%1000000007 + v1[1][1]*v2[1][0]%1000000007)%1000000007;
	d = (v1[1][0]*v2[0][1]%1000000007 + v1[1][1]*v2[1][1]%1000000007)%1000000007;
	v1[0][0] = a;
	v1[0][1] = b;
	v1[1][0] = c;
	v1[1][1] = d;	
}

long long int pow(vector<vector<long long int>>v, long long int n)
{
	vector<vector<long long int>> result(2);
	result[0].push_back(1);
	result[0].push_back(0);
	result[1].push_back(0);
	result[1].push_back(1);

	while(n>0)
	{
		if(n%2 == 1)
			mul(result,v);
		mul(v,v);
		n/=2;
	}
	return result[0][0];
}

long long int sol(long long int n)
{
	if(n == 0)
		return 0;
	else if(n==1 || n==2)
		return 1;

	vector<vector<long long int>>v(2);
	v[0].push_back(1);
	v[0].push_back(1);
	v[1].push_back(1);
	v[1].push_back(0);

	long long int temp = pow(v,n-1);
	return temp;

}

int main()
{
	int t;	cin >> t;
	while(t--)
	{
		long long int n;	cin >> n;
		cout << sol(n+2) << endl;

	}

	return 0;
}

// 0 1 1
// 2 3 5 8 13 21 34
