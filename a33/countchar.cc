#include "vstring.ih"

size_t Vstring::countChar(std::string const &str, CharMap &cmap,
                                    bool (*accept)(char, CharMap &))
{
	size_t ret = 0;
	for_each(str.begin(), str.end(), 
		[&] (char c)
		{
			if (accept(c, cmap))
				++ret;				
		}
	);
	return ret;
}
