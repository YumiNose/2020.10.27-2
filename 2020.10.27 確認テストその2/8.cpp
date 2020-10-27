
#include <iostream>
using namespace std;

int sumEx(int a, int b, int& c)
{
	c = a + b;
	return a + b;
}


int main()
{
	cout << sumEx(1, 2, 0) << endl;
}