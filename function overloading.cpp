//function overloading 
#include<iostream>
using namespace std;
class animals{
	public:
		virtual void domestic(){
			cout<<"domestic animals eat grass"<<endl;
		}
};
class cow:public animals{
	public:
		void domestic(){
			cout<<"cow is white"<<endl;
		}
};
int main(){
	cow c;
	c.domestic();
	animals a;
	a.domestic();
}
