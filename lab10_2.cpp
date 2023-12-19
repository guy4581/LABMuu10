#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string textline;
	dest << "-------------------- BOOM ---------------------\n";
	for(int i = 0;i < 9 ; i++ ){
		getline(source,textline);
		dest << textline<<endl;
	}
	dest  << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
