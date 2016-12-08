#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Line: public string
{
	public:
		friend istream &operator>>(istream &input,
			Line &line)
		{
			return getline(input, line);
		}
};

int main(int argc, char** argv)
{
	vector<string> lines;
	copy(istream_iterator<Line>(cin),
		istream_iterator<Line>(), back_inserter(lines));
	
	for (auto it = lines.begin(); it != lines.end();
		++it)
		
		cout << *it << '\n';
}
