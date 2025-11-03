#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void input_vector(vector<int>& v) {
	int x;
	while (cin >> x && x != 0)
		v.push_back(x);
}

void print_vector(const vector<int>& v) {
	for (int x : v) cout << x << " ";
	cout << endl;
}

int main() {
	vector<int> v;
	cout << "Unesite brojeve (0 za kraj): ";
	input_vector(v);
	cout << "Originalni vektor: ";
	print_vector(v);

	vector<int> uniq;
	for (int x : v)
		if (find(uniq.begin(), uniq.end(), x) == uniq.end())
			uniq.push_back(x);

	sort(uniq.begin(), uniq.end(), [](int a, int b) {
		return abs(a) < abs(b);
	});

	cout << "Jedinstveni sortirani po apsolutnoj vrijednosti: ";
	print_vector(uniq);
	return 0;
}