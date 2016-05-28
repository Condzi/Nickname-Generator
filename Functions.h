#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>


bool LoadFromFileTo(std::string & path, std::vector<std::string> & vector);
std::string MakeNickname(const std::vector<std::string> & samples, short & syllables, bool & spacebar);
