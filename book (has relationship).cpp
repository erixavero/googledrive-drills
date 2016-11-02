#include<iostream>
#include<string>
#include "author.cpp"
using namespace std;

class Book{
	string name;
	Author author;
	double price;
	int qty= 0;
	
public:
	Book(){};
	
	Book(string name, Author author, double price){
		this->name = name;
		this->author = author;
		this->price = price;
	}
	
	Book(string name, Author author, double price, int qty){
		this->name = name;
		this->author = author;
		this->price = price;
		this->qty = qty;
	}
	
	string getName(){
		return name;
	}
	
	Author getAuthor(){
		return author;
	}
	
	double getPrice(){
		return price;
	}
	
	void setPrice(double price){
		this->price = price;
	}
	
	int getQty(){
		return qty;
	}
	
	void setQty(int qty){
		this->qty = qty;
	}
	
	string toString(){
		return name + "\n" + author.toString() + "\n" + to_string(price)+ "\n" + to_string(qty);
	}
};


int main(){
	
	Author guy("John", "john456@themail.com", 'f');
	Book novel("Darkness", guy, 500, 3);
	
	cout<<novel.toString();
	
	return 0;
}

