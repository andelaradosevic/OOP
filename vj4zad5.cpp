int main() {
	std::vector<std::string> words = { "hello", "world", "c++" };

	std::cout << "Prije:  ";
	for (const auto& w : words) std::cout << w << " ";
	std::cout << "\n";

	reverse_strings(words);

	std::cout << "Poslije: ";
	for (const auto& w : words) std::cout << w << " ";
	std::cout << "\n";
	return 0;
}