#include "vstring.ih"

size_t Vstring::count(CharMap &cmap,
	bool (*accept)(char, CharMap &))
{
	size_t ret = 0;
	for_each(begin(), end(), 
		[&] (string &str)
		{			
			ret += countChar(str, cmap, accept);				
		}
	);
	return ret;
}
