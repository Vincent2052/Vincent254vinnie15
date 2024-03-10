/*Question 6: Count Vowels
Write a program that counts the number of vowels in a sentence*/
#include<iostream> 
#include<string>
#include <cctype>
using namespace std;
int countvowels (const string sentence)
{
	int vowelcount=0;
	for(char c;sentence)
	{
		char lowerC=tolower(c);
		if (lowerC=='a'||lowerC=='e'||lowerC=='i'||lowerC=='o'||lowerC=='u')
		{
			vowelcount++;
		}
	}
	return vowelcount;
}
int main()
{
	string sentence;
	cout<<"Enter the sentence"<<endl;
	cin>>sentence;
	int num vowels=countvowels(sentence);
	cout<<"The number ot the vowels in the sentence is"<<numvowels<<endl;
	return 0;
}