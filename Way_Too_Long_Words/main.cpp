#include <iostream>

int main() {
	auto lns{0};
	
	std::cin >> lns;
	std::cin.ignore();
	
	for(auto i=0; i < lns; ++i) {
		std::string line;
		std::getline(std::cin, line);
		
		auto len = line.length();
		if(len <= 10) {
			std::cout << line << '\n';
		} else {
			std::cout << line[0] << len -2 << line[len-1] << '\n';
		}
		line.clear();
	}
	
	return 0;
}
