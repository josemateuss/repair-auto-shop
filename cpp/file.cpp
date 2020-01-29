#include "file.hpp"

void write(string message, const char* file){
	ofstream myfile;
	myfile.open(file, fstream::app);
	myfile << message << "\n";
	myfile.close();
}
