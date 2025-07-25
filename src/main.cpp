#include "encoder.h"
#include "decoder.h"
#include "test.h"
#include <iostream>
#include <string>


int main()
{
	std::string encode;
	int step ;
	do{
		std::cout<<"Enter a text for encoding and the number of steps"<< std::endl;
		std::cin>>encode>>step;
		std::string first = encoding(encode,step);
		std::string second=decoding(first,step);
		test(encode, second);
	}while (encode!="break");
	return 0;
}	
