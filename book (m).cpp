#include<iostream>
#include<string>
#include "author.cpp"
using namespace std;

class Book{
	string name;
	Author authors[];
	double price;
	int qty= 0;
	
public:
	Book(string name, string auths[], int arrSize, double price){
		this->name = name;
		for(int i=0; i<size;i++){
			authors[i] = auth[i];
		}
		this->price = price;
	}
	
	Book(string name, Author authors[], double price, int qty){
		this->name = name;
		this->authors = authors;
		this->price = price;
		this->qty = qty;
	}
	
	string getName(){
		return name;
	}
	
	Author getAuthors(){
		return author[];
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
		string book= name + "\n" + authors[].toString() + "\n" + price + "\n" + qty;
		return book;
	}
	
	string getAuthorNames(){
		return author[];
	}
};

int main(){
	
	
	
	return 0;
}
