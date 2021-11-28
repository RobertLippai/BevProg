#include <vector>
#include <iostream>
#include <memory>

std::vector<int>* suspicious(){

	//right side: allocates memory to the vector
	//left side: gives it to the unique pointer

	//ha kivételt dobunk, akkor minden egyes lokális változónak implicit módon 
	//hívódik a memória felszabadítása
	//(hívódik a desctroutol)
	//p unique pointernek is hívódik, 
	//így felszabadítja a jobb oldalon létrehozott memória területet

	// DE erre a memória területre nem hivatkozhat csak ez az egy pointer!!!
	//share pointer prog1

	std::unique_ptr<std::vector<int>> p {new std::vector<int>};

	for (int i; std::cin >> i;)
	{
		//an int is true if it's not 0
		if(i) {
			// -> if we want to call a function throu a pointer we have to use the arrow
			p -> push_back(i);
		} else throw std::exception();
	}

	return p.release();
}

int main()
try {
	
	std::vector<int>* p = suspicious();
	
	for (int i = 0; i < p->size(); ++i)
	{
		std::cout << p->at(i) << ' ';
	}

	std::cout << '\n';

	//can't run if exception is thrown
	delete p;

	return 0;
} catch (std::exception& e){
	std::cerr << "Error!\n";
	return 1;
}