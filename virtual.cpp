#include<iostream>

using namespace std;

class Car{
	
	public:
	
		virtual void Automatic () = 0;
};

class Tata : public Car{
	
	public:
		void Automatic(){
			
			cout<<"My Car is Automatic"<<endl;
		}
};

int main(){
	
	Tata obj;
	obj.Automatic();
		
	return 0;
}
