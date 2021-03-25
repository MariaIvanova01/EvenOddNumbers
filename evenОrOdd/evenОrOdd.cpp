#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << " a = ";
	cin >> a;

	if (a % 2 == 0)
	{
		cout << " a is even " << endl;

	}
	else if (a % 2 != 0)
	{
		cout << " a is odd " << endl;
	}
	
	
	system("PAUSE");
	return 0;
}
