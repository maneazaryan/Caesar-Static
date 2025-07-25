#include <iostream>
#include "test.h"

void test(const std::string& firstCode, const std::string& secondCode)
{
	if(firstCode==secondCode)std::cout<<"Test passed"<<std::endl;
	else std::cout<<"Test failed"<<std::endl;

}
