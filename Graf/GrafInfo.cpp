#include "GrafInfo.h"

int findx(string s)
{
    int buf1 = std::string::npos;

    if (buf1 == std::string::npos)
        buf1 = s.find("(x");
    if (buf1 == std::string::npos)
        buf1 = s.find("-x");
    if (buf1 == std::string::npos)
        buf1 = s.find("+x");
    if (buf1 == std::string::npos)
        buf1 = s.find("*x");
    if (buf1 == std::string::npos)
        buf1 = s.find("/x");
    if (buf1 == std::string::npos)
        buf1 = s.find("x)");
    if (buf1 == std::string::npos)
        buf1 = s.find("x-");
    if (buf1 == std::string::npos)
        buf1 = s.find("x+");
    if (buf1 == std::string::npos)
        buf1 = s.find("x*");
    if (buf1 == std::string::npos)
        buf1 = s.find("x/");
    if (buf1 == std::string::npos)
        buf1 = s.find("^x");
    if (buf1 == std::string::npos)
        buf1 = s.find("x^");
    if (buf1 == std::string::npos)
        buf1 = s.find(" x");
    if (buf1 == std::string::npos)
        buf1 = s.find("x ");

    return buf1;
}