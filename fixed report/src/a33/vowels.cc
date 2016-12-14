#include "vstring.ih"

bool vowels(char c, Vstring::CharMap &cmap)
{
	if (string("aeiuoAEIOU").find(c)
		!= string::npos)
	{
		++cmap[c];
		return true;
	}
	return false;
}
