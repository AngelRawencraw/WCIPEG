#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for(int i=1; i<=n; i++) {
		cout << n << " X " << i << " = " << i*n << endl;
	}

	return 0;
}