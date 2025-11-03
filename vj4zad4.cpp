#include <iostream>
#include <string>
using namespace std;

string word_to_pig_latin(const string& w) {
	if (w.empty()) return w;
	string samoglasnici = "aeiouAEIOU";
	if (samoglasnici.find(w[0]) != string::npos)
		return w + "hay";
	else
		return w.substr(1) + w[0] + "ay";
}

int main() {
	cout << word_to_pig_latin("apple") << endl;
	cout << word_to_pig_latin("hello") << endl;
	return 0;
}