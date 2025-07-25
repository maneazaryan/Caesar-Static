#include "printer.h"
#include <iostream>

void printer(const std::string& code)
{
	for(int i=0; i<code.size(); i++)
	{
		std::cout<<code[i];
	}
	std::cout<<std::endl;
}
