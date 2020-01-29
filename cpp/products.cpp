#include "products.hpp"
string option(){
	
	string user_input = "batata";
	int exitV=580;
	while(exitV!=0){
	int aux = ask_integer("Choose the Service: \n 1 - Trocar o Pneu \n 2 - Alinhamento \n 
		3 - Balanceamento \n 4 - Troca de Velas \n 5 - Troca de Oleo \n 6 - Troca de Escapamento \n 
		7 - Troca de Pastilha de Freio \n 8 - Troca de Disco de Freio \n 9 - Troca de Filtro de Ar \n 
		10 - Troca de Bobina \n 11 - Troca de Lampada dos farois ou Lanternas \n 12 - Regulagem do Freio de Mao \n");
	
		switch(aux){
		
			case 1:
				user_input = "R$ 5,00";
				exitV=0;
				break;
				
			case 2:
				
				user_input = "R$ 30,00";
				exitV=0;
				break;	
				
			case 3:
				user_input = "R$ 20,00";
				exitV=0;
				break;
								
			case 4:
				user_input = "R$ 20,00";
				exitV=0;
				break;

			case 5:
				user_input = "R$ 20,00";
				exitV=0;
				break;
				
			case 6:
				
				user_input = "R$ 40,00";
				exitV=0;
				break;	
				
			case 7:
				user_input = "R$ 35,00";
				exitV=0;
				break;
								
			case 8:
				user_input = "R$ 30,00";
				exitV=0;
				break;

			case 9:
				user_input = "R$ 10,00";
				exitV=0;
				break;
				
			case 10:
				
				user_input = "R$ 25,00";
				exitV=0;
				break;	
				
			case 11:
				user_input = "R$ 10,00";
				exitV=0;
				break;
								
			case 12:
				user_input = "R$ 30,00";
				exitV=0;
				break;
					
				
			default: cout << " Service does not exist. Try again" << endl;
			
			
				
		}
	}
		return user_input;
}


