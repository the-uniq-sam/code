#include <bits/stdc++.h>
using namespace std;
int main() 
{
	vector<int>x(4,0),y(4,0);
	cout << "Enter 4 coordinate as Xi and Yi" << endl;
	for(int i = 0; i<4; i++)
		cin >> x[i] >> y[i];
	double xu = 0.0 , yu = 0.0 , u = 0.0 ;  
	for(u = 0.0 ; u <= 1.0 ; u += 0.0001) 
	{ 
		xu = pow(1-u,3)*x[0]+3*u*pow(1-u,2)*x[1]+3*pow(u,2)*(1-u)*x[2]+pow(u,3)*x[3]; 
		yu = pow(1-u,3)*y[0]+3*u*pow(1-u,2)*y[1]+3*pow(u,2)*(1-u)*y[2]+pow(u,3)*y[3]; 
		cout << (int)xu << " " <<  (int)yu << endl; 
	} 
 
	return 0; 
} 
