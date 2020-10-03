#include <iostream>

using namespace std;

long long int fact(long long int n){

	long long int b = n;
	
	if(b>1){
		return b*fact(b-1);
	}
	
	else
	{
		return 1;
	}

}


int main()
{
	
		long long int a;
		cin >> a;

		cout <<	fact(a) << endl;

	
	return 0;
}


