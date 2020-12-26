//problem link :- https://codeforces.com/contest/1468/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef pair<long long int, long long int> P;


struct Order
{
    bool operator()(P const& a, P const& b) const
    {
        return a.first < b.first || (a.first == b.first && a.second > b.second);
    }
};



void showpq( 
    priority_queue<P, 
                   vector<P>, Order> 
        g) 
{ 
    // Loop to prlong long int the elements 
    // until the priority queue 
    // is not empty 
    while (!g.empty()) { 
        cout << g.top().first 
             << " " << g.top().second 
             << endl; 
        g.pop(); 
    } 
    cout << endl; 
} 

int main()
{
	long long int n,x = 1,y = 1;	cin >> n;
	// priority_queue<pair<long long int,long long int> >pq;
	priority_queue< P, vector<P>, Order > pq;
	vector<long long int>v(n+1,0);
	// vector<long long int>val(n+1,0);
	while(n--)
	{
		long long int a; 	cin >> a;
		if(a == 1)
		{
			long long int b;	cin >> b;
			pq.push(make_pair(b,x));
			// val[x] = b;
			v[x] = 1;
			x++;
		}
		// showpq(pq);
		else if(a == 2)
		{
			// cout << "yes" << endl;
			// y = 0;
			while(v[y]==0)
			{
				y++;
			}
			cout << y << " ";
			v[y] = 0;
			y++;
			

		}
		else
		{
			while(v[pq.top().second] == 0)
			{
				pq.pop();
			}
			// if(v[pq.top().second])
			// {
			cout << pq.top().second << " ";
			v[pq.top().second] = 0;
			pq.pop();
			// }
		}
		// showpq(pq);
	}
	// cout << endl;
	return 0;
}
