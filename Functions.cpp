#include "Functions.h"

bool LoadFromFileTo(std::string & path, std::vector<std::string> & vector)
{
	std::string tempString;
	std::fstream file;

	file.open(path, std::ios::in);

	if (!file.good())
	{
		std::cout << "File doesn't exist!\n";
		file.close();
		return false;
	}

	while (!file.eof())
	{
		std::getline(file, tempString);
		vector.push_back(tempString);
	}

	file.close();

	return true;
}

std::string MakeNickname(const std::vector<std::string> & samples, short & syllables, bool & spacebar)
{
	std::string nick;
	unsigned syllabe;

	for (short i = 1; i < syllables; i++)
	{
		syllabe = rand() % samples.size();
		
		nick += samples[syllabe];

		if (spacebar /*&& i != syllables*/) // i!= ... - we don't wanna add spacebar at end of the nick, right?
		{
			nick += " ";
		}
	}

	return nick;
}
