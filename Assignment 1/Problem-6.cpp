 #include <iostream>
using namespace std;

int HCF(int c, int d, int e)
{
	if(e == 1)
	{
		return 1; 
	}
	if(c%e == 0 && d%e == 0)
	{
		return e;
	}
	return HCF(c, d, e-1);
}

int main()
{
	int a, b;
	cin >> a >> b;
	
	cout << HCF(a,b,a) << endl;
	
	
	
	return 0;
}