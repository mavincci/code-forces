#include <iostream>

using ll = long long;

int main() {
	ll prbs{}, cbslvd{};
	
	std::cin >> prbs;
	std::cin.ignore(1);
	
	while(prbs-- != 0) {
		auto num{0}, pll{0};
		for(auto i=0; i<3; ++i) {
			std::cin >> num;
			pll += num;
		}
		if(pll > 1)
			++cbslvd;
	}
	std::cout << cbslvd;	
	return 0;
}
