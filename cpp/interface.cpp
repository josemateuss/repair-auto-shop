#include "interface.hpp"


void main_menu(){
	int option;
	do{
		option=show_main_menu();
		cin.ignore();
		system("cls");
		switch(option)
		{
			case 1: register_client();
				break;

			case 2: find_client(ask_string("Name: "));		
				break;
			
			case 0: exit(); 
				break;
			
			default: invalid_option_message(); 			
		}

	}while(option !=0);
}


void register_client(){
	
	string name = ask_string("Name: ");
	string sur_name = ask_string("Surname: ");
	string car = ask_string("Car: ");
	string plate = ask_string("Plate: ");
	string phone = ask_string("Phone - only numbers: ");
	string email = validate_email();	
	string date_in = validate_date_in();
	string date_out = validate_date_out();
	string service = option();
	
	
	string user = name + "#" + sur_name + "#" + car + "#" + plate + "#" + phone + "#" + email + "#" + date_in + "#" + date_out + "#"+ service;
	write(user, "clients.txt");
	
	cout << "Successfully registered!" << endl;	
	
}

string ask_string(string message){
	string user_input;
	cout << message;
	getline(cin,user_input);	
	return user_input;
}

int ask_integer(string message){
	int user_input;
	cout << message;
	cin >> user_input;		
	return user_input;
}

int show_main_menu(){
	int i;
	
	cout << "Welcome! Choose an option:" << endl << endl;
	cout << "1 - Register a new Client" << endl;
	cout << "2 - Find Client" << endl;
	cout << "0 - Exit" << endl;
	
	cin >> i;
	return i;
}
void invalid_option_message(){
	cout << "Sorry! Invalid opition, try again." << endl;
}

void exit(){
	
	cout << "Bye, see you later!" << endl;
}







