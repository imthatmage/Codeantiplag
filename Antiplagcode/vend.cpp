#include "codeanalyzer.hpp"
#include <iostream>
#include <fstream>
#include <cstddef>
#include <set>
#include <cctype>
#include <algorithm>

void bring_to_standard_view(std::string& str)
{
	Analyzer::delete_unnecessary(str);

	Analyzer::distinguish_operators(str);

	std::string before = "";
	std::string current;
	size_t index = 0;
	size_t curr_pos = 1;
	std::string new_str = "";
	//replacement of names with standard
	unsigned int id = 0;

	str += ' ';
	while((index = str.find(' ', curr_pos)) != std::string::npos)
	{
		current = str.substr(curr_pos, index - curr_pos);
		curr_pos = index + 1;
		if(before == "") before = current;
		else
		{
			auto double_iterator = Analyzer::find_words_id_and_special(before);
			if(double_iterator.first != Analyzer::words_id_end())
			{
				new_str += (double_iterator.first)->second + ' ';
				before = current;
			}
			else if(double_iterator.second != Analyzer::special_end())
			{
				new_str += (double_iterator.second)->second + ' ';
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
				for    (size_t i = 0; i < (6 - tmperid.length()); ++i)
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
	str = new_str;
	Analyzer::clear();
}

void read(std::string& str, const std::string& path)
{
	std::ifstream in(path);
	if (in.is_open())
	{
		std::string tmp;
		while (std::getline(in, tmp))
		{
			str += (tmp + '\n');
		}
	}	
}

int main()
{
	std::string fstr = "", sstr = "";
	read(fstr, "/home/almir/source/reposQt/Codeantiplag/Antiplagcode/tests/02.cpp");
	read(sstr, "/home/almir/source/reposQt/Codeantiplag/Antiplagcode/vend.cpp)");
	bring_to_standard_view(sstr);
	bring_to_standard_view(fstr);
	std::cout << fstr << std::endl;
	std::cout << sstr << std::endl;
	std::cout << Analyzer::wagner_fisher(fstr, sstr, 1, 1, 1) << std::endl;
	std::cout << fstr.length() << ' ' << sstr.length() << std::endl;
}