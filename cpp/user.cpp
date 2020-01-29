#include "user.hpp"

void find_client(string name){
	bool find=false;
	string line;
	vector<string> user;	
	ifstream myfile ("clients.txt");
		if (myfile.is_open())  {
			while ( getline (myfile,line) ){
				vector<string> user = split(line, '#');				
				if(user.at(0) == name){	
					find=true; 					
   					for (int i=0; i<7; i++){
						cout << user.at(i) << endl;
					}	
				}					
							   		
			}
			if(find==false){
					cout << "Client not found!" << endl;
				}
		myfile.close();    	
		}
}
	 

vector<string> split(string str, char delimiter) {
	
	vector<string> control;
	stringstream ss(str); 
	string tok;
  
	while(getline(ss, tok, delimiter)) {
    		control.push_back(tok);
  	}
  
	return control;
}
/*
void delete_client(string name){
	
	string line;
	vector<string> user;	
	ifstream myfile ("clients.txt");
		if (myfile.is_open())  {
			while ( getline (myfile,line) ){
				vector<string> user = split(line, '#');				
				if(user.at(0) == name){					 					
   					for (int i=0; i<8; i++){
						user.erase(user.begin()+0);
					}	
					cout << "Cliente deletado com sucesso!" << endl;
				}					
							   		
			}
			
		myfile.close();    	
		}
}*/




















