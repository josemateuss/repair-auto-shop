#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "file.hpp"
#include "interface.hpp"

void create_user(string, string, string, string, string);
bool login(string, string);
vector<string> split(string str, char delimiter);

#endif
