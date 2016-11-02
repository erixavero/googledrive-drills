#include<iostream>
#include<string>

using namespace std;

class Author{
	string name;
	string email;
	char gender;
	
public:
	Author(){}
	Author(string name, string email, char gender){
		this->name = name;
		this->email = email;
		this->gender = gender;
	}
	
	string getName(){
		return name;
	}
	
	string getEmail(){
		return email;
	}
	
	char getGender(){
		return gender;
	}
	
	void setEmail(string email){
		this->email = email;
	}
	
	string toString(){
		return name + "\n" + email + "\n" + gender;
	}
};

/*
int main(){
	
	Author guy("John", "john@themail.com", 'f');
	cout<<guy.toString();
	
	return 0;
}
*/
