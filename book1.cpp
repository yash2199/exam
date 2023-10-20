#include<iostream>
#include "book1.h"
using namespace std;


	book1::book1()
	{
		
		id=10;
		name="yash";
		price =200;
		}	
	book1::book1(int id , string name, double price)
	{
		this->id=id;
		this->name=name;
		this->price=price;
	}
	void book1::accept()
	{
		cout<<"enter name ";
		cin>>name;
		cout<<"id";
		cin>>id;
		cout<<"price";
		cin>>price;
	}
	void book1:: display()
	{
		cout<<name;
		cout<<id;
		cout<<price;
	}

