#include <iostream>
#include <cmath>
using namespace std; 
int main() {
	double N, S, P, k;
	int n, i ;
	N = 0;
	n = 1;
	k = 1;
	while (n <= 10)
	{
		P = 1;
		S = 0;
		i = 1;
		while (i <= n)
		{
			P *= sin(k + n);
			i++;
		}
		N += sqrt(1 + (cos(n)* cos(n)) + abs(S));
		n++;
	}
	cout << N << endl;
	N = 0;
	n = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			P *= sin(k + n);
			i++;
		} while (i <= n);
		N += sqrt(1 + (cos(n) * cos(n)) + abs(P));
		n++;
	} while (n <= 10);
	cout << N << endl;
	N = 0;
	for (n = 1; n <= 10; n++)
	{
		S = 0;
		for (i = 1; i <= n; i++)
		{
			P *= sin(k + n);
		}
		N += sqrt(1 + (cos(n) * cos(n)) + abs(P));
	}
	cout << N << endl;
	N = 0;
	for (n = 10; n >= 1; n--)
	{
		S = 0;
		for (i = n; i >= 1; i--)
		{
			P *= sin(k + n);
		}
		N += sqrt(1 + (cos(n) * cos(n)) + abs(P));
	}
	cout << N << endl;
	return 0;
}