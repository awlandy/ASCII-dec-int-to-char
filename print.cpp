#include "pch.h"
#include <iostream>

//DEC 48-57 0-9
//DEC 65-90 A-Z
//DEC 97-122 a-z

void print(int b, int e){
	for (int x = b; x <= e; ++x) {
	std::cout << (char)x;
	}
	std::cout << "\n";
}


int main(){
	print(48 ,57);
	print(65 ,90);
	print(97 ,122);
	return 0;
}