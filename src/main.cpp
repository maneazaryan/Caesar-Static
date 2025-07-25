#include "encoder.h"
#include "decoder.h"
#include "test.h"
#include <iostream>
#include <string>


int main()
{	
	std::cout<<"Enter a text for encoding and the number of steps"<< std::endl;
	std::string encode;
	int step ;
	std::cin>>encode>>step;
	std::string first = encoding(encode,step);
	std::string second=decoding(first,step);
	test(encode, second);
	return 0;
}	
