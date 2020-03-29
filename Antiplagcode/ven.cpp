#include <iostream>
#include <fstream>
#include <cstddef>
#include <set>
#include "codeanalyzer.hpp"

static std::string m_str = "";

int main()
{
	//C:\\Users\\Hindgarden\\source\\repos\\antiplag\\Antiplagcode\\stringsfortesting.txt
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
	Analyzer::delete_unnecessary(m_str);
	std::cout << "String without comments and #include section:" << std::endl << m_str << std::endl; 
	Analyzer::distinguish_operators(m_str);
	std::cout << "String after correction of humanfactor whitespace:" << std::endl << m_str << std::endl;

	//removing extra brackets
	std::string before = "";
	std::string current;
	size_t index = 0;
	size_t curr_pos = 1;
	std::string new_str = "";
	//replacement of names with standard
	unsigned int id = 0;

	
	while((index = m_str.find(' ', curr_pos)) != std::string::npos)
	{
		current = m_str.substr(curr_pos, index - curr_pos);
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
			else
			{
				std::string tmperid = std::to_string(id++);
				std::string tmper = "";
				for(size_t i = 0; i < (6 - tmperid.length()); ++i)
				{
					tmper += '0';
				}
				tmper = "ID" + tmper + tmperid;
				words_id[before] = tmper;
				new_str += tmper + ' ';
				before = current;
			}
		}
	}
}