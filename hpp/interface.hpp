#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "user.hpp"

void main_menu();
string ask_string(string);
int ask_integer(string);
string option();
string validate_email();
string validate_date_in();
string validate_date_out();
string validate_phone();
void register_client();
void show_string(string);
int show_main_menu();
void find_client(string);
void invalid_option_message();
void exit();
void delete_client(string);

#endif
