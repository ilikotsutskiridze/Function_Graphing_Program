#pragma once
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <map>
#include <algorithm>
using std::string;

bool error(std::string s);
bool isSeparator(char s);
int priority(char s);
bool isOperator(char s);
float doIt(char s, float a, float b);
std::string trigonometry(std::string input, int buf);
std::string trigonometryforsqrt(std::string input, int buf);
float counter(std::string input);
