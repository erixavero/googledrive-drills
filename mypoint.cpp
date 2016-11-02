#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

class MyPoint{
	int x;
	int y;
	
public:
	
	MyPoint(){};
	
	MyPoint(int x, int y){
		this->x = x;
		this->y = y;
	}
	
	int getX(){
		return x;
	}
	
	void setX(int x){
		this->x = x;
	}
	
	int getY(){
		return y;
	}
	
	void setY(int y){
		this->y = y;
	}
	
	int getXY(){
		int xy[]= {x,y};
		return *xy;
	}
	
	void setXY(int x, int y){
		int xy[] = {x,y};
	}
	
	string toString(){
		return "(" + to_string(x) + ", " + to_string(y)+ ")";
	}
	
	double distance(MyPoint another){
		return sqrt(pow(this->x - another.getX(), 2) + pow(this->y - another.getY(), 2));
	}
	
	double distance(int x, int y){
		return sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
	}
	
	double distance(){
		return sqrt(x*x + y*y);
	}
};

/*
int main(){
	
	MyPoint dot(4,5);
	cout<<"x = "<<dot.getX() <<endl
		<<"y = " <<dot.getY() <<endl;
	
	cout<<"distance from O point = "<<dot.distance() <<endl;
	cout<<"distance from other point = " <<dot.distance(1,3);
	
	return 0;
}
*/

