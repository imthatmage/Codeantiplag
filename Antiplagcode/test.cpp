#include <iostream>
#include <fstream>
#include <string>
#include <regex>

static std::string m_str = "";

int main()
{
	std::regex reg("(?://.*?\n)|(?:/\\*(?:.|\n)*?\\*/)");

	std::ifstream in("C:\\Users\\Hindgarden\\source\\repos\\antiplag\\Antiplagcode\\hello.txt");
	std::cout << in.is_open() << "open" << std::endl;
	if (in.is_open())
	{
		std::string tmp;
		while (std::getline(in, tmp))
		{
			m_str += (tmp + '\n');
		}
	}
	std::cout<< std::regex_replace(m_str, reg, "");
}