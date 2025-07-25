#include "decoder.h"
#include "printer.h"
std::string decoding(const std::string& code, int step)
{
	std::string newcode ="";
	char c;
	for(int i=0; i<code.size(); i++)
	{
		c=code[i];
		if(c>='a' && c<='z')
		{
			c='a'+(c-'a'-step +26)%26;
		}
		else if(c>='A' && c<='Z')
		{
			c='A'+(c-'A'-step+26)%26;
		}
		newcode.push_back(c);
	}
	printer(newcode);
	return newcode;
}

