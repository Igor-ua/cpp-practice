#include <iostream>
#include <string>
#include <time.h>

using namespace std;

namespace utils {
	void println(string message);
	void print(string message);
	const std::string currentDateTime();
}

void utils::println(string message) {
	cout << message << endl;
}

// Get current date/time, format is YYYY-MM-DD HH:mm:ss
const std::string utils::currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "[%Y:%m:%d %X]", &tstruct);

    return buf;
}