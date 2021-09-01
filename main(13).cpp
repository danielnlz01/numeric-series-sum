#include <iostream>

using namespace std;

int a, d, n, res;

int main()
{
	res = 0;
	a = 1;
	d = 3;
	n = 25;
	
	for (int i = a; i < n+1; i++)
	{
		res += a + ((i - 1) * d);
		cout << "Término " << i << ": " << res << endl;
	}
	
  cout << "Valor total de la serie :" << res << endl;
  
	return 0;
}