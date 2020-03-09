#include <iostream>
#include <fstream>
#include <string>
#include <regex>

static std::string m_str = "";

int main()
{
	//C:\\Users\\Hindgarden\\source\\repos\\antiplag\\Antiplagcode\\stringsfortesting.txt
	std::cout << "Give exact path to file to check";
	std::string tmp;
	std::cin >> tmp;
	std::regex reg("(?://.*?\n)|(?:/\\*(?:.|\n)*?\\*/)|(?:#.*)|(?:std.*?\\:\\:)|(?:static)");

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
	m_str = std::regex_replace(m_str, reg, " ");
	std::cout << "String without comments and #include section:" << std::endl << m_str << std::endl; //(?:\\<\\<)|(?:\\>\\>)| - removed cos of vector<int> and int b = 3>>2
	reg = "(?:\\>\\>=)|(?:\\<\\<\\=)|(?:\\[\\])|(?:\\:\\:)|(?:\\-\\>)|(?:\\+\\=)|(?:\\-\\=)|(?:\\*\\=)|(?:\\/\\=)|(?:\\%\\=)|(?:\\&\\=)"
	      "|(?:\\|\\=)|(?:\\^\\=)|(?:\\+\\+)|(?:\\-\\-)|(?:\\=\\=)|(?:\\!\\=)|(?:\\>\\=)|(?:\\<\\=)|!|(?:\\&\\&)"
		  "|(?:\\|\\|)|\\=|\\+|\\-|\\*|\\/|\\%|\\~|\\&|\\>|\\<|\\^|(?:\\.)|(?:\\,)|(?:\\:)|(?:\\;)|(?:\\[)|(?:\\])|(?:\\{)|(?:\\})|(?:\\()|(?:\\))|(?:\\:)";
	m_str = std::regex_replace(m_str, reg, " $& ");
	reg = "(\\s)+";
	m_str = std::regex_replace(m_str, reg, " ");
	std::cout << "String after correction of humanfactor whitespace:" << std::endl << m_str << std::endl;


}