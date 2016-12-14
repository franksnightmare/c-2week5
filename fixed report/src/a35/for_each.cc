#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void squareTheInts(int &number)
{
	int numSquare = number * number;
	cout << ' ' << numSquare << '\n';
}

int main()
{
	vector<int> intVector;
	intVector.push_back(3);
	intVector.push_back(6);
	intVector.push_back(7);
	intVector.push_back(12);

	cout << "Numbers in vector squared: \n";
	for_each(intVector.begin(), intVector.end(),
		squareTheInts);
}
