#include <iostream>
#include <cstdlib>
#include "my_add.hpp"
int main(int argc, char* argv[]){
	if (argc != 3){
		std::cout<<"erroe";
		return 1;
	}
	int a= std::atoi(argv[1]);
	int b= std::atoi(argv[2]);
	std :: cout<<my_add(a,b)<<"\n";
	return 0;
}
