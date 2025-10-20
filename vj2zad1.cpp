/*#include <iostream>
using namespace std;

int* fibonacci(int n) {
	int* niz = new int[n];
	niz[0] = niz[1] = 1;
	for (int i = 2; i < n; i++)
		niz[i] = niz[i - 1] + niz[i - 2];
	return niz;
}

int main() {
	int n;
	cout << "Unesi broj elemenata: ";
	cin >> n;

	int* niz = fibonacci(n);

	cout << "Fibonacci niz: ";
	for (int i = 0; i < n; i++)
		cout << niz[i] << " ";
	cout << endl;

	delete[] niz; 
	return 0; 
}*/