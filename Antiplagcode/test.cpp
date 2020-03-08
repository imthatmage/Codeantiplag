#include <iostream>
#include <fstream>
#include <string>
#include <regex>
//examples
static std :: string m_str;
void func (   int a    , int b   )
{
    std::cout    <<      "Fafa";
    int mass     [3] = {1, 2, 3};
    std::cout << mass       [   0     ];
    std::string tmp0="331";
    std::string tmp1   ="331";
    int aa = 3;
    int bb=      45;
    int     c  = b *   a +    4;
    c   *= c  = b *   a +    4;
    ++       aa;
    int massd[1][1] = {{2}};
    int g = massd[0]     [0];
}

int main()
{
    func(3, 2);
    std::string tmp = "1^ 2+= 3+ 4- 5&& 6>> 7< 8| 9( 10* 11: 12; 13. 14, 15) 16{ 17[ 18] 19:: 20-> 21> 22! 23-";
    std::regex r("\\-|(?:\\+\\=)|(?:\\-\\>)|(?:\\+)|(?:\\&\\&)|(?:\\>\\>)|(?:\\<)|(?:\\-)|(?:\\|)|(?:\\()|(?:\\*)|(?:\\^)|(?:\\:)|(?:\\;)|(?:\\.)|(?:\\,)|(?:\\[)|(?:\\])|(?:\\{)|(?:\\})|(?:\\()|(?:\\))|\\>|!");
    
    std::cout << std::regex_replace(tmp, r, "[$&]");
}