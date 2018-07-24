#include <iostream>
#include "utils.h"

using namespace std;
using namespace utils;

void f();

int main() {
	utils::println("main()");
	f();

	utils::println("timestamp: " + utils::currentDateTime());

	utils::println("");
	return 0;
}

void f() {
	utils::println("f()");
}