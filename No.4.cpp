/*Question 4: Capitalize Words
Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.*/
#include<iostream> 
#include<sstream>
using namespace std;
std::string capitalizeFirstLetter(const std::string & input)
{
std::stringstream stream(input);
std::string word, result;

while(stream >> word)
{
	if(!result.empty())
	{
		result += " ";
	}
	word[0] = std::toupper(word[0]);
	result +=word;
}	
return result;
}
int main()
{
	std::string input;
	std::cout<<"Enter a string"<<endl;
	std::getline(std::cin, input);
	
	std::string result=capitalizeFirstLetter(input);
	std::cout<<"capitalized string: "<< result<<std::endl;
	return 0;
}