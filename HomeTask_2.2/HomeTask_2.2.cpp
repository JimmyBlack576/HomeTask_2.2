#include <iostream>

using namespace std;

int main()
{
	int a, sum=0;
	for (int i = 1; i <= 1000; i++) {
		sum += i;
	}
	cout << sum/1000;
}

