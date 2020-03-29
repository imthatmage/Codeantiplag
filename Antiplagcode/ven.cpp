#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <cstddef>
#include <set>

static std::string m_str = "";

int main()
{
	//dict of special symbols and all 'id words' in text'
	std::map<std::string, std::string> words_id = { { "void", "void" }, { "bool", "bool" }, { "char", "char" }, { "signed", "signed" }, { "unsigned", "unsigned" },
	{ "wchar_t", "wchar_t" }, { "char16_t", "char16_t" }, { "char32_t", "char32_t" }, { "short", "short" }, { "const", "const" }, { "int", "int" }, { "long", "long" },
	{ "auto", "auto" }, { "string", "string" }, { "delete", "delete" }, { "new", "new" }, { "if", "if" }, { "while", "while" }, { "for", "for" }, { "do", "do" },
	{ "using", "using" }, { "namespace", "namespace" }, { "break", "break" }, { "continue", "continue" }, { "return", "return" }, { "true", "true" }, 
	{ "false", "false"}, { "class", "class" }, { "struct", "struct" }, { "template", "template" } };

	std::set<std::string> set_of_stlcontainers = { "set", "queue", "deque", "vector", "list", "forward_list", "map", "stack", "array", "multiset", "multimap", 
	"priority_queue" };

	//before ()
	std::set<std::string> set_of_standard_functions = { "malloc", "realloc", "printf", "scanf" "calloc", "sizeof", "sort", "reverse", "all_of", "any_of", "none_of",
	"for_each", "for_each_n", "count", "count_if", "mismatch", "equal", "adjacent_find", "find", "find_if", "find_if_not", "find_end", "find_first_of", 
	"search", "search_n", "lexicographical_compare", "lexicographical_compare_three_way", "copy", "copy_if", "copy_n", "copy_backward", "move", 
	"move_backward", "shift_left", "shift_right", "transform", "fill", "fill_n", "generate", "generate_n", "swap", "iter_swap", "swap_ranges", 
	"sample", "remove", "remove_if", "replace", "replace_if", "reverse", "rotate", "unique", "is_sorted", "is_sorted_until", "sort", "stable_sort", 
	"partial_sort", "partial_sort_copy", "nth_element", "max", "merge", "max_element", "min", "min_element", "minmax", "minmax_element", "clamp", 
	"is_permutation", "next_permutation", "prev_permutation", "iota", "inner_product", "adjacent_difference", "accumulate", "reduce", "transform_reduce",
	"partial_sum", "inclusive_scan", "exclusive_scan", "transform_inclusive_scan", "transform_exclusive_scan", "qsort", "bsearch", "random_shuffle",
	"remove_copy", "remove_copy_if", "replace_copy", "replace_copy_if", "reverse_copy", "rotate_copy", "unique_copy", "shuffle" };
	

	//after dot(.)
	std::set<std::string> set_of_methods_and_fields = { "assign", "at", "front", "back", "data", "c_str", "begin", "end", "empty", "size", "length",
	"max_size", "reserve", "capacity", "shrink_to_fit", "clear", "insert", "erase", "push_back", "pop_back", "append", "compare", "replace", "substr",
	"copy", "resize", "swap", "find", "rfind", "find_first_of", "find_first_not_of", "find_last_of", "find_last_not_of", "getline", "get", "fill", "emplace",
	"emplace_back", "insert_after", "emplace_after", "erase_after", "push_front", "emplace_front", "pop_front", "resize", "merge", "splice_after", "remove", 
	"remove_if", "reverse", "unique", "sort", "splice", "emplace_hint", "extract", "count", "contains", "equal_range", "lower_bound", "upper_bound", "top"
	"push", "pop", "front", "back", "begin", "end" };
	
	//C:\\Users\\Hindgarden\\source\\repos\\antiplag\\Antiplagcode\\stringsfortesting.txt
	std::cout << "Give exact path to file to check";
	std::string tmp;
	std::cin >> tmp;
	std::regex reg("(?://.*?\n)|(?:/\\*(?:.|\n)*?\\*/)|(?:#.*)|(?:std.*?\\:\\:)|(?:static)");
	int calloc = 4;
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
	std::cout << "String without comments and #include section:" << std::endl << m_str << std::endl; 
	//(?:\\<\\<)|(?:\\>\\>)| - removed cos of vector<int> and int b = 3>>2
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
	unsigned int id = 0;

	
	while((index = m_str.find(' ', curr_pos)) != std::string::npos)
	{
		current = m_str.substr(curr_pos, index - curr_pos);
		curr_pos = index + 1;
		if(before == "") before = current;
		else
		{
			auto iterator = words_id.find(before);
			if(iterator != words_id.end())
			{
				new_str += iterator->second + ' ';
				before = current;
			}
			else if((before == "." && set_of_methods_and_fields.find(current) != set_of_methods_and_fields.end())
				||(current == "(" && set_of_standard_functions.find(before) != set_of_methods_and_fields.end()))
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