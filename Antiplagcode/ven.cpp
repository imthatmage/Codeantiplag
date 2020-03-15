#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <cstddef>
#include <set>

static std::string m_str = "";

int main()
{
	std::set<std::string> set_of_spec_words = { "void", "bool", "char", "signed", "unsigned", "wchar_t", "char16_t", "char32_t", "short", "const",
	"int", "long", "unsigned", "auto", "sizeof", "string", "set", "queue", "deque", "vector", "list", "forward_list", "delete", "new", "print", "begin", "end", "malloc", 
	"calloc", "realloc", "if", "while", "for", "do", "using", "namespace", "break", "continue", "return", "true", "false", "class", "struct", "template"

	};
	std::set<std::string> set_of_methods_and_fields = { "assign", "at", "front", "back", "data", "c_str", "begin", "end", "empty", "size", "length",
	"max_size", "reserve", "capacity", "shrink_to_fit", "clear", "insert", "erase", "push_back", "pop_back", "append", "compare", "replace", "substr",
	"copy", "resize", "swap", "find", "rfind", "find_first_of", "find_first_not_of", "find_last_of", "find_last_not_of", "getline", "get", "fill", "emplace",
	"emplace_back", "insert_after", "emplace_after", "erase_after", "push_front", "emplace_front", "pop_front", "resize", "merge", "splice_after", "remove", 
	"remove_if", "reverse", "unique", "sort", "splice", "emplace_hint", "extract", "count", "contains", "equal_range", "lower_bound", "upper_bound", "top"
	"push", "pop", "front", "back"};
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

	//removing extra brackets
	std::string before = "";
	std::string current;
	size_t index = 0;
	size_t curr_pos = 1;
	std::string new_str = "";
	//replacement of names with standard
	while((index = m_str.find(' ', curr_pos)) != std::string::npos)
	{
		current = m_str.substr(curr_pos, index - curr_pos);
		curr_pos = index + 1;
		before = current;
		
	}
}