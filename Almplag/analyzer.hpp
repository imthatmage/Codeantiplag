#ifndef ANALYZER_HPP
#define ANALYZER_HPP

#include <string>
#include <regex>
#include <set>
#include <map>


namespace Analyzer
{
    void delete_unnecessary(std::string& str);
    void distinguish_operators(std::string& str);
    std::pair<std::map<std::string, std::string>::const_iterator, std::map<std::string, std::string>::const_iterator> find_words_id_and_special(const std::string& str);
    const std::map<std::string, std::string>::const_iterator words_id_end();
    const std::map<std::string, std::string>::const_iterator special_end();
    //if belong to set_of_methods_and_fields, set_of_standard_functions, set_of_stlcontainers
    bool belong_to_stl(const std::string& before, const std::string& current);
    void insert_to_words_id(const std::string& m_str, const std::string& str);

    unsigned wagner_fisher(std::string from, std::string to, unsigned deleteCost = 1,
                           unsigned insertCost = 1, unsigned replaceCost = 1);
    void clear();
}
#endif // ANALYZER_HPP
