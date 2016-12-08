#include <map>
#include <cstring>
#include <vector>

class Vstring: public std::vector<std::string>
{
	public:
		typedef std::map<char, size_t> CharMap;

		Vstring(std::istream &in);
		
		size_t count(CharMap &cmap, bool (*accept)(char, CharMap &));

	private:
		static size_t countChar(std::string const &str, CharMap &cmap,
								bool (*accept)(char, CharMap &));
};
 
bool vowels(char c, Vstring::CharMap &cmap);   
