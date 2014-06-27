#include<iostream>

using namespace std;

int main()
{
	int sum = 0;
	int contador = 0;
	for(int i=0; i<1000; i++)
	{
		if(contador % 3 == 0 || contador % 5 == 0)
		{
			sum = sum + contador;
			contador++;
		}
		else
			contador++;	
	}
	cout << sum << endl;
}
