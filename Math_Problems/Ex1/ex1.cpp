#include <iostream>


int main(){

	unsigned int limit =0 ;
	std::cout<<"Enter The Limit";
	std::cin>>limit;


	unsigned long long sum =0;
	for (unsigned int i = 3; i < limit; ++i)
	{
		if (i % 3 || i % 5)
		{
			sum+=i;

		}
	}
	std::cout<<"Sum"<< sum << std:: endl;

}