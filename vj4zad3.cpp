#include <iostream>
#include <string>

void fix_spaces(std::string& text) {
	for (size_t i = 0; i + 1 < text.size();) {
		if (text[i] == ' ' && text[i + 1] == ' ')
			text.erase(i, 1);
		else
			++i;
	}
	for (size_t i = 1; i < text.size(); ++i) {
		if ((text[i] == ',' || text[i] == '.') && text[i - 1] == ' ') {
			text.erase(i - 1, 1);
			--i;
		}
	}
	for (size_t i = 0; i + 1 < text.size(); ++i) {
		if (text[i] == ',' && text[i + 1] != ' ')
			text.insert(i + 1, " ");
	}
}

int main() {
	std::string s = "Puno  razmaka ,i tocka .";
	std::cout << "Prije:  \"" << s << "\"\n";
	fix_spaces(s);
	std::cout << "Poslije: \"" << s << "\"\n";
	return 0;
}