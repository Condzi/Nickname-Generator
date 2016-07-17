/*
	Copyright Condzi 2016
	Do whatever you want
*/
#include <random>
#include <ctime>
#include "Functions.h"

int main()
{
	srand(time(NULL));

	std::string tempString;
	std::vector<std::string> samples;
	short syllables;
	bool spacebar = false;
	bool end = false;
	
	std::cout << "Please, write path to file with samples: \n";
	std::getline(std::cin, tempString);

	if(!LoadFromFileTo(tempString, samples))
	{
		exit(1);
	}


	while (!end)
	{
		std::cout << "How many syllables nick will contains: \n";
		std::cin >> syllables;
	
		std::cout << "Do you want to do spacebars: (Y/N)\n";
		std::cin >> tempString;
		if (tempString == "y" || tempString == "Y")
		{
			spacebar = true;
		}

		std::cout<<"Your nickame is: \"" << MakeNickname(samples, syllables, spacebar) <<"\"!\n";
		
		std::cout << "Do you want to end: (Y/N)\n";
		std::cin >> tempString;
		if (tempString == "y" || tempString == "Y")
		{
			end = true;
		}
		else
		{
			std::cout << "\n\t+x+x+x+x+x+x+x+x+x+x\n\n";
		}
	}

	return 0;
}
