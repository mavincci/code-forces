#include <iostream>
#include <cstdint>
#include <map>

using ll = long long;

int main() {
	std::uint16_t sts{};
	std::cin >> sts;
	
	std::cin.ignore(1);

	ll stat{};

	std::map<char, int8_t> nmp = {
		{'+', 1},
		{'-', -1}
	};
	
	while(sts-- != 0) {
		std::string temp;
		std::getline(std::cin, temp);
		stat += nmp[temp[1]];
	}
	
	std::cout << stat;
	
	return 0;
}
