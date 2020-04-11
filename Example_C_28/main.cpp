#include <iostream>

using namespace std;

int counter(int);
// counter - a recursive function that counts up/down
// @param int - number to increment/decriment

int main()
{

	int num;
	cout << "Type in an integer: ";
	cin >> num;

	cout << counter(num) << endl;

	return 0;
}

int counter(int count)
{
	if (count <= 1)
	{
		return 1;
	}
	else
	{
		// k(k-1)(k-2) ... 3 x 2 x 1
		return (count * counter(count - 1));
	}
}