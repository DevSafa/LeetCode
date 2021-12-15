#include <iostream>

int strStr(std::string haystack, std::string needle)
{
    if(needle == "")
        return 0;
    int i = haystack.find(needle);
    return i;

}
int main()
{
    std::cout << strStr("hello","ll") << "\n";
    std::cout << strStr("hello","llaa") << "\n";
    std::cout << strStr("aaaa","bba") << "\n";
    std::cout << strStr("","") << "\n";
}

/* https://www.cplusplus.com/reference/string/string/find/ */