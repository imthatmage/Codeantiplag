#include <string>
#include <regex>
#include <set>
#include <map>

namespace Analyzer
{
    void delete_unnecessary(std::string& str);
    void distinguish_operators(std::string& str);
    const std::map<std::string, std::string>::const_iterator words_id_find(const std::string& str);
    const std::map<std::string, std::string>::const_iterator words_id_end();
    //belong to set_of_methods_and_fields, set_of_standard_functions, set_of_stlcontainers
    bool belong_to_stl(const std::string& before, const std::string& current);
}