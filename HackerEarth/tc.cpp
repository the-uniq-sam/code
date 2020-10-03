#include <iostream>

using namespace std;

int main()
{

	int result = 0;
	int p,s,t,h,x;

	cin >> p >> s >> t >> h >> x;

	
	for(int i = 0; i<x; i++) {

		if(s>0 && x>0 ) {

		
			if(t>=s) {

				result = result + h;

				s--;

			}

                        if(s>t) {

                                result = result + p;

                                s--;
                        }



		}

		
	}


	cout << result << endl;


	return 0;

}


		





