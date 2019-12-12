#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int input1 = 0, input2 = 0, sum = 0;
	while (cin >> input1 >> input2)
	{
		if (input1 == 0 && input2 == 0)
			break;
		sum = 0;
		for (int i = input1; i <= input2; i++)
		{
			double squareRoot = sqrt((double)i);
			int buffer = squareRoot;
			if (squareRoot == (double)buffer)
				sum++;
		}
		cout << sum << endl;
	}
	return 0;
}