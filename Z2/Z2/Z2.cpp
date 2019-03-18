#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

char matrixCh[4][4] = {};
int matrix[4][4] = {};
ifstream in("input.txt");

int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			in >> matrixCh[i][j];
			//cout << matrixCh[i][j];
		}
		//cout << endl;
	}

	int i = 0, j = 0, k = 1;
	matrix[i][j] = 1;
	while (k != 16)
	{
		//cout << matrixCh[i][j] << endl;
		switch (matrixCh[i][j])
		{
		case 'r':
			j < 3 ? j++ : j = 0;
			break;
		case 'l':
			j > 0 ? j-- : j = 3;
			break;
		case 'u':
			i > 0 ? i-- : i = 3;
			break;
		case 'd':
			i < 3 ? i++ : i = 0;
		}
		matrix[i][j]++;
		/*for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}*/
		if (matrix[i][j] == 2)
		{
			cout << "Cycle in point (" << j << ", " << i << ")";
			return 0;
		}
		k++;
	}
	cout << "There is no cycle!";
}
