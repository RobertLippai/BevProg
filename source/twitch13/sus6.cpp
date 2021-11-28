#include <vector>
#include <iostream>
#include <memory>

// g++ sus4.cpp -o "s4" -std=c++14 && ./s4
// on mac os: make_unique --> c++14

std::vector<int> suspicious(){
	std::vector<int> p;

	for (int i; std::cin >> i;)
	{
		//an int is true if it's not 0
		if(i) {
			p.push_back(i);
		} else throw std::exception(); //vector deskruktor hívodik
	}

	return p; //Move

}

int main()
try {
	
	auto p = suspicious();
	
	for (int i = 0; i < p.size(); ++i)
	{
		std::cout << p.at(i) << ' ';
	}

	std::cout << '\n';

	return 0;
} catch (std::exception& e){
	std::cerr << "Error!\n";
	return 1;
}