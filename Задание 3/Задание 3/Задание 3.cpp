#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");

	int n = 15;
	int V[15];



	int* A = new int[n];

	//Первый массив

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		A[i] = 10 + rand() % 200;

	}

	for (int i = 0; i < n; i++)
	{

		cout << "[" << i + 1 << "] = " << A[i] << endl;


	}

	cout << endl;
	// Второй массив

	int* B = new int[n];



	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		B[i] = 1 + rand() % 200;

	}

	for (int i = 0; i < n; i++)
	{

		cout << "[" << i + 1 << "] = " << B[i] << endl;


	}
	cout << endl;
	//Третий массив

	int* C = new int[n];



	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		C[i] = 15 + rand() % 200;

	}

	for (int i = 0; i < n; i++)
	{

		cout << "[" << i + 1 << "] = " << C[i] << endl;


	}

	int min = A[0]*B[0]*C[0];

	for (int i = 1; i < n; i++) {
		V[i] = A[i] * B[i] * C[i];
		if (V[i] < min) {
			min = V[i];
		}
	}

	
		
	
	cout << "\n\n" << min;


	return 0;
}