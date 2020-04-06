#include "codeanalyzer.hpp"
#include <iostream>
#include <fstream>
#include <cstddef>
#include <set>
#include <cctype>
#include <algorithm>

static std::string m_str = "";

void bring_to_standard_view(std::string& str)
{
	Analyzer::delete_unnecessary(str);
	std::cout << "String without comments and #include section:" << std::endl << str << std::endl; 
	Analyzer::distinguish_operators(str);
	std::cout << "String after correction of humanfactor whitespace:" << std::endl << str << "\n\n\n\n";

	//removing extra brackets
	std::string before = "";
	std::string current;
	size_t index = 0;
	size_t curr_pos = 1;
	std::string new_str = "";
	//replacement of names with standard
	unsigned int id = 0;
	//test
	int helptmper = std::count_if(str.begin(), str.end(), [](auto& elem) { return elem == ' '; } );
	bool btmper = str[0] == ' ';
	bool ctmper = str[str.length() - 1] == ' ';
	//test
	str += ' ';
	while((index = str.find(' ', curr_pos)) != std::string::npos)
	{
		current = str.substr(curr_pos, index - curr_pos);
		curr_pos = index + 1;
		if(before == "") before = current;
		else
		{
			auto iterator = Analyzer::words_id_find(before);
			if(iterator != Analyzer::words_id_end())
			{
				new_str += iterator->second + ' ';
				before = current;
			}
			else if(Analyzer::belong_to_stl(before, current))
			{
				new_str += before + ' ' + current + ' ';
				before = "";
			}
			else if(before.length() == 1 && (!std::isalpha(before[0]) || before[0] == '_') || std::all_of(before.begin(), before.end(), ::isdigit))
			{
				new_str += before + ' ';
				before = current;
			}
			else if((before[0] == '"' && before[before.length() - 1] == '"')
				 || (before[0] == '\'' && before[before.length() - 1] == '\''))
			{
				new_str += before + ' ';
				before = current;
			}
			else
			{
				std::string tmperid = std::to_string(id++);
				std::string tmper = "";
				for(size_t i = 0; i < (6 - tmperid.length()); ++i)
				{
					tmper += '0';
				}
				tmper = "ID" + tmper + tmperid;
				Analyzer::insert_to_words_id(tmper, before);
				new_str += tmper + ' ';
				before = current;
			}
		}
	}
	std::cout << "String after all forces:" << std::endl << new_str << std::endl;
	//test
	std::cout <<  helptmper << std::endl;
	std::cout << std::count_if(new_str.begin(), new_str.end(), [](auto elem) { return elem == ' '; } ) << std::endl;
	std::cout << (new_str[new_str.length() - 1] == ' ') << std::endl;
	std::cout << (new_str[0] == ' ');
	std::cout << btmper << std::endl;
	std::cout << ctmper << std::endl;
	//test
}

int main()
{
	///home/almir/source/reposQt/Codeantiplag/Antiplagcode/stringsfortesting.txt
	std::cout << "Give exact path to file to check";
	std::string tmp;
	std::cin >> tmp;
	std::ifstream in(tmp);
	std::cout << in.is_open() << "open" << std::endl;
	if (in.is_open())
	{
		std::string tmp;
		while (std::getline(in, tmp))
		{
			m_str += (tmp + '\n');
		}
	}
	bring_to_standard_view(m_str);
}