#include "codeanalyzer.hpp"

namespace Analyzer
{
    namespace
    {
        //to delete comments, static, std::
        const std::regex reg0 = std::regex("(?://.*?\n)|(?:/\\*(?:.|\n)*?\\*/)|(?:#.*)|(?:std.*?\\:\\:)|(?:static)");
        //to distinguish all operators with space
        /*
        All the operators that have more than 1 character
        (?:\\>\\>=)|(?:\\<\\<\\=)|(?:\\[\\])|(?:\\:\\:)|(?:\\-\\>)|(?:\\+\\=)|(?:\\-\\=)|(?:\\*\\=)|(?:\\/\\=)|(?:\\<\\<)|
        (?:\\&\\=)|(?:\\|\\=)|(?:\\^\\=)|(?:\\+\\+)|(?:\\-\\-)|(?:\\=\\=)|(?:\\&\\&)|(?:\\|\\|)|(?:\\%\\=)|(?:\\>\\>)|
        */
        const std::regex reg1 = std::regex(""
        ""
        "!|\\=|\\+|\\-|\\*|\\/|\\%|\\~|\\&|\\>|\\<|\\^|(?:\\.)|"
        "(?:\\,)|(?:\\:)|(?:\\;)|(?:\\[)|(?:\\])|(?:\\{)|(?:\\})|(?:\\()|(?:\\))|(?:\\:)");
        //dict of special symbols and all 'id words' in text'
        std::map<std::string, std::string> words_id = { { "void", "void" }, { "bool", "bool" }, { "char", "char" }, { "signed", "signed" }, { "unsigned", "unsigned" },
        { "wchar_t", "wchar_t" }, { "char16_t", "char16_t" }, { "char32_t", "char32_t" }, { "short", "short" }, { "const", "const" }, { "int", "int" }, { "long", "long" },
        { "auto", "auto" }, { "string", "string" }, { "delete", "delete" }, { "new", "new" }, { "if", "if" }, { "while", "while" }, { "for", "for" }, { "do", "do" },
        { "using", "using" }, { "namespace", "namespace" }, { "break", "break" }, { "continue", "continue" }, { "return", "return" }, { "true", "true" }, 
        { "false", "false"}, { "class", "class" }, { "struct", "struct" }, { "template", "template" }, { "typename", "typename" }, { "extern", "extern" },
        { "noexcept", "noexcept" } };

        const std::set<std::string> set_of_stlcontainers = { "set", "queue", "deque", "vector", "list", "forward_list", "map", "stack", "array", "multiset", "multimap", 
        "priority_queue", "cout", "cin", "cerr", "clog", "wcout", "wcin", "wcerr", "wclog", "pair", "tuple" };

        //before ()
        const std::set<std::string> set_of_standard_functions = { "main", "make_pair", "make_tuple", "malloc", "realloc", "printf", "scanf" "calloc", "sizeof", "sort", "reverse", "all_of", "any_of", "none_of",
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

    const std::map<std::string, std::string>::const_iterator words_id_find(const std::string& str)
    {
        return words_id.find(str);
    }

    const std::map<std::string, std::string>::const_iterator words_id_end()
    {
        return words_id.end();
    }

    bool belong_to_stl(const std::string& before, const std::string& current)
    {
        return (((before == "." || before == ">") && set_of_methods_and_fields.find(current) != set_of_methods_and_fields.end())
		||(current == "(" && set_of_standard_functions.find(before) != set_of_standard_functions.end())
		|| (current == "<" && set_of_stlcontainers.find(before) != set_of_stlcontainers.end()));
    }
    void insert_to_words_id(const std::string& m_str, const std::string& str)
    {
        words_id[str] = m_str;
    }
}