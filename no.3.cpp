//Write a program that takes an integer as input and returns true if the input is a power of two.
#include<iostream> 
using namespace std;
	bool PowerOfTwo(int num)
	{
		return(num>0)&&((num & (num - 1))==0);
	}
int main ()
{
	int i;
	std::cout<<"Enter the number"<<endl;
	std::cin>>i;
	if(PowerOfTwo(i))
	{
		std::cout<<"TRUE is a power of two"<<endl;
	}
	else
	{
	std::cout<<"INVALID is not power of two";
	}
	return 0;
}