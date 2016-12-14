#include "vstring.ih"

int main()
	{
		Vstring vstring(cin);
		Vstring::CharMap vmap;
	
		cout << "Vowels: " << vstring.count(vmap, vowels)
			<< '\n';
	
		for_each(vmap.begin(), vmap.end(), 
			[] (decltype(*vmap.begin()) &value)
			{
				cout << value.first << ": " << value.second
					<< '\n';
			}
		);
	}

