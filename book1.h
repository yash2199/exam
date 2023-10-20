#include<iostream>
using namespace std;

class book1{
private:
	int id ;
	string name;
	double price ;
public :
	book1();
	book1(int id , string name, double price );
	
	void accept();
	
	void display();
	

};
