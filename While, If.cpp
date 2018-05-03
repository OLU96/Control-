#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int num;
	int loopcount=0;

	num = 0;


	while (loopcount <= 25)
	{
		num++;
		if (num % 2 == 1)
		{
			loopcount++;
			cout << "square root of number is " <<  pow(num, 0.5)  << endl;
		}
		
	}


	return 0;
}
