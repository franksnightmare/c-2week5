#include "vstring.ih"

Vstring::Vstring(std::istream &in)
{
	copy(istream_iterator<string>(in), istream_iterator<string>(), 
		back_inserter(*this));
}
