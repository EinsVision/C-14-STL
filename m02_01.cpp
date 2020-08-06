#include "cpp14stl.h"

void Projects_02::m02_01()
{
	std::array<double, 100> my_arr_data{};
	std::cout << "array made by array<double, 100>" << std::endl;
	std::cout << my_arr_data[0] << std::endl;
	my_arr_data.fill(3.14);
	std::cout << my_arr_data[0] << std::endl;
}