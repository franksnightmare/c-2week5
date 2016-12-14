#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	// Break if there are less than 2 arguments.
	if (argc <= 2)
		return 0;
	
	// Open data file and read into vector data.
	vector<string> data;
	ifstream input(argv[1]);
	copy(istream_iterator<string>(input),
		istream_iterator<string>(),
		back_inserter(data));
	input.close();
	
	// Open extra file and read into vector extra.
	vector<string> extra;
	input.open(argv[2]);
	copy(istream_iterator<string>(input),
		istream_iterator<string>(),
		back_inserter(extra));
	input.close();
	
	// Add extra words if "extra" is found
	if (find(data.begin(), data.end(), "extra")
		!= data.end())
	{
		// Remove all "extra" from data
		data.erase(remove(data.begin(), data.end(),
			"extra"), data.end());
		
		// Copy over the extra entries from
		// the extra vector
		copy(extra.begin(), extra.end(),
			back_inserter(data));
	}
	
	// Remove all copies
	data.erase(unique(data.begin(), data.end()),
		data.end());
	data.shrink_to_fit();
	
	// Output
	copy(data.begin(), data.end(),
		ostream_iterator<string>(cout, "\n"));
	
	// Data size and capacity
	cout << "Data size: " << data.size()
		<< "; Data capacity: "
		<< data.capacity() << '\n';
}
