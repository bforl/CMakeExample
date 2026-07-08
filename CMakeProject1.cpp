#include "CMakeProject1.h"
#include <cstdint>

#include <fmt/core.h>

using namespace std;

int main()
{
	std::vector<int> values = { 1, 2, 3, 4, 5 };

	fmt::print("Hello from vcpkg!\n");
	fmt::print("Vector contains {} elements.\n", values.size());

	cout << "Hello CMake." << endl;
	
	return 0;
}
