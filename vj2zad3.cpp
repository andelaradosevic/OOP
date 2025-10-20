/*#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

double** napraviMatricu(int red, int stup) {
	double** mat = new double*[red];
	for (int i = 0; i < red; i++)
		mat[i] = new double[stup];
	return mat;
}

void unistiMatricu(double** mat, int red) {
	for (int i = 0; i < red; i++)
		delete[] mat[i];
	delete[] mat;
}

void unesiMatricu(double** mat, int red, int stup) {
	for (int i = 0; i < red; i++)
		for (int j = 0; j < stup; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> mat[i][j];
		}
}

void ispisiMatricu(double** mat, int red, int stup) {
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stup; j++)
			cout << setw(10) << fixed << setprecision(2) << mat[i][j];
		cout << endl;
	}
}

double** zbroji(double** A, double** B, int red, int stup) {
	double** C = napraviMatricu(red, stup);
	for (int i = 0; i < red; i++)
		for (int j = 0; j < stup; j++)
			C[i][j] = A[i][j] + B[i][j];
	return C;
}

double** transponiraj(double** A, int red, int stup) {
	double** T = napraviMatricu(stup, red);
	for (int i = 0; i < red; i++)
		for (int j = 0; j < stup; j++)
			T[j][i] = A[i][j];
	return T;
}

int main() {
	srand(time(nullptr));
	int m = 2, n = 3;

	double** A = napraviMatricu(m, n);
	double** B = napraviMatricu(m, n);

	cout << "Unos matrice A:\n";
	unesiMatricu(A, m, n);
	cout << "Unos matrice B:\n";
	unesiMatricu(B, m, n);

	cout << "\nMatrica A:\n"; ispisiMatricu(A, m, n);
	cout << "\nMatrica B:\n"; ispisiMatricu(B, m, n);

	double** C = zbroji(A, B, m, n);
	cout << "\nZbroj A + B:\n"; ispisiMatricu(C, m, n);

	double** T = transponiraj(A, m, n);
	cout << "\nTransponirana A:\n"; ispisiMatricu(T, n, m);

	unistiMatricu(A, m);
	unistiMatricu(B, m);
	unistiMatricu(C, m);
	unistiMatricu(T, n);

	return 0;
}*/