#include<iostream>
#include<cmath>
#include "mypoint.cpp"

using namespace std;

class MyTriangle{
	MyPoint v1;
	MyPoint v2;
	MyPoint v3;
	
public:
	
	MyTriangle(){};
	
	MyTriangle(int x1, int y1, int x2, int y2, int x3, int y3){
		v1.setX(x1); v1.setY(y1);
		v2.setX(x2); v2.setY(y2);
		v3.setX(x3); v3.setY(y3);
	}
	
	MyTriangle(MyPoint v1, MyPoint v2, MyPoint v3){
		this->v1 = v1;
		this->v2 = v2;
		this->v3 = v3;
	}
	
	string toString(){
		return "v1= (" + to_string(v1.getX()) + ", " + to_string(v1.getY()) + ")" + "\n"+
			"v2= (" + to_string(v2.getX()) + ", " + to_string(v2.getY()) + ")" + "\n"+
			"v3= (" + to_string(v3.getX()) + ", " + to_string(v3.getY()) + ")" ;
	}
	
	double getPerimeter(){
		return v1.distance(v2) + v2.distance(v3) + v3.distance(v1);
	}
	
	string getType(){
		if(v1.distance(v2) + v2.distance(v3) + v3.distance(v1) == 3*v1.distance(v2)){
			return "Equiliteral";
		}
		else if(v1.distance(v2) + v2.distance(v3) == 2*v1.distance(v2)|| v1.distance(v2) + v3.distance(v1) == 2*v3.distance(v1)|| v2.distance(v3) + v3.distance(v1) == 2*v2.distance(v3)){
			return "Isoceles";
		}
		else{
			return "Scalene";
		}
	}
};

int main(){
	MyPoint v1(4,5);
	MyPoint v2(1,3);
	MyPoint v3(6,8);
	
	MyTriangle triangle(v1,v2,v3);
	cout<<triangle.toString()<<endl
		<<"perimeter= " <<triangle.getPerimeter()<<endl
		<<"type= " <<triangle.getType();
	
	return 0;
}
