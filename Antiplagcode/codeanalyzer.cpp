#include "codeanalyzer.hpp"

namespace Analyzer
{
    namespace
    {
        //to delete comments, static, std::
        const std::regex reg0 = std::regex("(?://.*?\n)|(?:/\\*(?:.|\n)*?\\*/)|(?:#.*)|(?:std.*?\\:\\:)|(?:static)");
        /*
        All the operators that have more than 1 character
        (?:\\>\\>=)|(?:\\<\\<\\=)|(?:\\[\\])|(?:\\:\\:)|(?:\\-\\>)|(?:\\+\\=)|(?:\\-\\=)|(?:\\*\\=)|(?:\\/\\=)|(?:\\<\\<)|
        (?:\\&\\=)|(?:\\|\\=)|(?:\\^\\=)|(?:\\+\\+)|(?:\\-\\-)|(?:\\=\\=)|(?:\\&\\&)|(?:\\|\\|)|(?:\\%\\=)|(?:\\>\\>)|
        */
       //to distinguish almost all operators with space
        const std::regex reg1 = std::regex(
        "\\||!|\\=|\\+|\\-|\\*|\\/|\\%|\\~|\\&|\\>|\\<|\\^|(?:\\.)|"
        "(?:\\,)|(?:\\:)|(?:\\;)|(?:\\[)|(?:\\])|(?:\\{)|(?:\\})|(?:\\()|(?:\\))|(?:\\:)");
        //dict of special symbols and all 'id words' in text'
        std::map<std::string, std::string> special = { { "public", "public" }, { "protected", "protected" }, { "private", "private" }, { "size_t", "size_t" }, { "wcin", "wcin" }, { "cin", "cin" }, { "void", "void" }, { "bool", "bool" }, { "char", "char" }, { "signed", "signed" }, { "unsigned", "unsigned" },
        { "wchar_t", "wchar_t" }, { "char16_t", "char16_t" }, { "char32_t", "char32_t" }, { "short", "short" }, { "const", "const" }, { "int", "int" }, { "long", "long" },
        { "auto", "auto" }, { "string", "string" }, { "delete", "delete" }, { "new", "new" }, { "if", "if" }, { "while", "while" }, { "for", "for" }, { "do", "do" },
        { "using", "using" }, { "namespace", "namespace" }, { "break", "break" }, { "continue", "continue" }, { "return", "return" }, { "true", "true" }, 
        { "false", "false"}, { "class", "class" }, { "struct", "struct" }, { "template", "template" }, { "typename", "typename" }, { "extern", "extern" },
        { "noexcept", "noexcept" } };

        std::map<std::string, std::string> words_id;

        const std::set<std::string> set_of_arrow = { "set", "queue", "deque", "vector", "list", "forward_list", "map", "stack", "array", "multiset", "multimap", 
        "priority_queue", "pair", "tuple", "get", "cout", "cerr", "clog", "wcout", "wcerr" "wclog" };

        //before '()'
        const std::set<std::string> set_of_standard_functions = { "cin", "wcin", "main", "make_pair", "make_tuple", "malloc", "realloc", "printf", "scanf" "calloc", "sizeof", "sort", "reverse", "all_of", "any_of", "none_of",
        "for_each", "for_each_n", "count", "count_if", "mismatch", "equal", "adjacent_find", "find", "find_if", "find_if_not", "find_end", "find_first_of", 
        "search", "search_n", "lexicographical_compare", "lexicographical_compare_three_way", "copy", "copy_if", "copy_n", "copy_backward", "move", 
        "move_backward", "shift_left", "shift_right", "transform", "fill", "fill_n", "generate", "generate_n", "swap", "iter_swap", "swap_ranges", 
        "sample", "remove", "remove_if", "replace", "replace_if", "reverse", "rotate", "unique", "is_sorted", "is_sorted_until", "sort", "stable_sort", 
        "partial_sort", "partial_sort_copy", "nth_element", "max", "merge", "max_element", "min", "min_element", "minmax", "minmax_element", "clamp", 
        "is_permutation", "next_permutation", "prev_permutation", "iota", "inner_product", "adjacent_difference", "accumulate", "reduce", "transform_reduce",
        "partial_sum", "inclusive_scan", "exclusive_scan", "transform_inclusive_scan", "transform_exclusive_scan", "qsort", "bsearch", "random_shuffle",
        "remove_copy", "remove_copy_if", "replace_copy", "replace_copy_if", "reverse_copy", "rotate_copy", "unique_copy", "shuffle" };

        //after dot(.)
        const std::set<std::string> set_of_methods_and_fields = { "assign", "at", "front", "back", "data", "c_str", "begin", "end", "empty", "size", "length",
        "max_size", "reserve", "capacity", "shrink_to_fit", "clear", "insert", "erase", "push_back", "pop_back", "append", "compare", "replace", "substr",
        "copy", "resize", "swap", "find", "rfind", "find_first_of", "find_first_not_of", "find_last_of", "find_last_not_of", "getline", "get", "fill", "emplace",
        "emplace_back", "insert_after", "emplace_after", "erase_after", "push_front", "emplace_front", "pop_front", "resize", "merge", "splice_after", "remove", 
        "remove_if", "reverse", "unique", "sort", "splice", "emplace_hint", "extract", "count", "contains", "equal_range", "lower_bound", "upper_bound", "top"
        "push", "pop", "front", "back", "begin", "end", "first", "second" };
    }

    void delete_unnecessary(std::string& str)
    {
        str = std::regex_replace(str, reg0, " ");
    }

    void distinguish_operators(std::string& str)
    {
        str = std::regex_replace(str, reg1, " $& ");
	    std::regex reg("(\\s)+");
	    str = std::regex_replace(str, reg, " ");
    }

    std::pair<std::map<std::string, std::string>::const_iterator, std::map<std::string, std::string>::const_iterator> find_words_id_and_special(const std::string& str)
    {
        return { words_id.find(str), special.find(str) };
    }

    const std::map<std::string, std::string>::const_iterator words_id_end()
    {
        return words_id.end();
    }
    const std::map<std::string, std::string>::const_iterator special_end()
    {
        return special.end();
    }

    bool belong_to_stl(const std::string& before, const std::string& current)
    {
        return (((before == "." || before == ">") && set_of_methods_and_fields.find(current) != set_of_methods_and_fields.end())
		||(current == "(" && set_of_standard_functions.find(before) != set_of_standard_functions.end())
		||(current == "<" && set_of_arrow.find(before) != set_of_arrow.end()));
    }

    void insert_to_words_id(const std::string& m_str, const std::string& str)
    {
        words_id[str] = m_str;
    }

    unsigned wagner_fisher(std::string from, std::string to, unsigned deleteCost = 1, unsigned insertCost = 1, unsigned replaceCost = 1)
    {
        std::vector<std::vector<unsigned>> vec(from.length() + 1);
        for(size_t i = 0; i < from.length() + 1; ++i)
            vec[i].assign(to.length() + 1, 0);
        vec[0][0] = 0;
        for(size_t i = 1; i < to.length() + 1; ++i)
            vec[0][i] = vec[0][i - 1] + insertCost;
        for(size_t i = 1; i < from.length() + 1; ++i)
        {
            vec[i][0] = vec[i - 1][0] + deleteCost;
            for(size_t j = 1; j < to.length() + 1; ++j)
            {
                if(from[i - 1] != to[j - 1])
                    vec[i][j] = std::min({vec[i][j - 1] + insertCost, vec[i - 1][j] + deleteCost, vec[i - 1][j - 1] + replaceCost });
                else
                    vec[i][j] = vec[i - 1][j - 1];
            }
        }
        return vec[from.length()][to.length()];
    }

    void clear()
    {
        words_id.clear();
    }
}