#include <iostream>
#include <algorithm>
#include <cstring>
#include <iterator>

class CaseInsensitiveAscending
{
	public:
		bool operator()(std::string const &left,
			std::string const &right) const
		{
			return strcmp(left.c_str(),
				right.c_str()) < 0;
		}
};
class CaseInsensitiveDescending
{
	public:
		bool operator()(std::string const &left,
			std::string const &right) const
		{
			return strcmp(left.c_str(),
				right.c_str()) > 0;
		}
};

int main(int argc, char **argv)
{
	std::sort(argv + 1, argv + argc,
		CaseInsensitiveAscending());
	copy(argv + 1, argv + argc,
		std::ostream_iterator<std::string>(
		std::cout, " "));
	std::cout << '\n';

	std::sort(argv + 1, argv + argc,
		CaseInsensitiveDescending());
	copy(argv + 1, argv + argc,
		std::ostream_iterator<std::string>(
		std::cout, " "));
	std::cout << '\n';
}
