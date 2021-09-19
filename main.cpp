
#include <iostream>
#include <string>
#include <vector>

// you also can try to use some complex way

int main(){
	std::vector< std::string > msg = {"Hello", " ", "World"};
	for (auto m: msg)
		std::cout << m;
}
