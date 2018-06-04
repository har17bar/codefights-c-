#include <iostream>
int centuryFromYear(int year)
{
    return (year + 99) / 100;
}
int main(){
	std::cout<<centuryFromYear(1905)<<std::endl;
}
