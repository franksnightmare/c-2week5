#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

int main(int argc, char **argv)
{
    std::sort(argv + 1, argv + argc,
        std::less<std::string>());
    copy(argv + 1, argv + argc,
        std::ostream_iterator<std::string>(std::cout,
        " "));
    std::cout << '\n';

    std::sort(argv + 1, argv + argc,
        std::greater<std::string>());
    copy(argv + 1, argv + argc,
        std::ostream_iterator<std::string>(std::cout,
        " "));
    std::cout << '\n';
}
