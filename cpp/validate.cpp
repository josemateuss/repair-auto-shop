#include "validate.hpp"

string validate_email(){
	string email;
	int aux = -1;
	while(aux!=0){
		email = ask_string("E-mail: ");
		int at_pos = email.find('@');
		int n = email.size();
		
		if(at_pos == -1){
			cout << "Invalid e-mail! @ " << endl;								
		} 
		
		else{
			int point_pos = email.find('.', at_pos);
			if(point_pos == -1){ 
			    cout << "Invalid e-mail! . " << endl;								    
			}
			
			else if(at_pos == 0 || point_pos - at_pos == 1 || point_pos == n-1){
	            cout << "Invalid e-mail!" << endl;
					            
	        }
			else aux=0;	
		}
	
	}
	
	return email;

}

string validate_date_in(){
	int  dd, mm, yy, aux; 
	string date;
while(aux!=580){
	date=ask_string("Date in - Just numbers and / (DD/MM/YYYY):") ;		

	vector<string> sp = split(date,'/');	
	
		stringstream day(sp.at(0));
			if (!(day >> dd))
				dd = 0;
		
		stringstream month(sp.at(1));
		if (!(month >> mm))
			mm = 0;
		
		stringstream year(sp.at(2));
			if (!(year >> yy))
				yy = 0;	
	
						
			if((dd >= 29) && (mm = 2)){ // fevereiro
				cout << "Invalid day!" << endl;
				aux=1;
			}
			else if((dd = 1 && dd >= 31) && (mm = 1 && mm >= 12) && (yy = 1900 && yy >=2100)){
				cout << "Invalid date!"<< endl;				
				}			
				
			else{
				aux=580;
			}
		}
	return date;			
}

string validate_date_out(){
	int  dd, mm, yy, aux; 
	string date;
while(aux!=580){
	date=ask_string("Date in - Just numbers and / (DD/MM/YYYY):") ;		

	vector<string> sp = split(date,'/');	
	
		stringstream day(sp.at(0));
			if (!(day >> dd))
				dd = 0;
		
		stringstream month(sp.at(1));
		if (!(month >> mm))
			mm = 0;
		
		stringstream year(sp.at(2));
			if (!(year >> yy))
				yy = 0;	
	
						
			if((dd >= 29) && (mm = 2)){ // fevereiro
				cout << "Invalid day!" << endl;
				aux=1;
			}
			else if((dd = 1 && dd >= 31) && (mm = 1 && mm >= 12) && (yy = 1900 && yy >=2100)){
				cout << "Invalid date!"<< endl;				
				}			
				
			else{
				aux=580;
			}
		}
	return date;			
}

/*string validate_phone(){
	int aux;
	string number;
	
	while(aux=!580){
	number = ask_string("Phone: ");
		if(number.size() >8 ){
				cout << "Invalid Number!" << endl;
				aux=1;
		}
		
		else{
			aux=580;
		}
	}
	
return number;
	
}*/
