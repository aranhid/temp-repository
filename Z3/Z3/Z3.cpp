#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int temp;
	long long answer = 0;
	long long j = 0;
	while (n > 0)
	{
		temp = (n % 3);
		answer += pow(3, j)*temp + pow(3, j + 1)*temp;
		n /= 3;
		j += 2;
	}
	cout << answer;
}
