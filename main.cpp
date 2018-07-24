#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;
using namespace utils;

// default function parameter
void f(int num = 10);

void dinamycArray();

int main() {
	utils::println("main()");
	f();
	utils::println("timestamp: " + utils::currentDateTime());
	dinamycArray();



	utils::println("");
	return 0;
}

// inline - insert the body of the function into the code
inline void f(int num) {
	if (3 > 2) {
		utils::println("f() num: " + std::to_string(num));
	}
}

void dinamycArray() {
	std::vector<int> dynArray (0);
	dynArray.push_back(1);
	dynArray.push_back(10);
	utils::println("dynArray.size(): " + std::to_string(dynArray.size()));
}