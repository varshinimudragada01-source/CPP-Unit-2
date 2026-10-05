#include<iostream>
using namespace std;
class student{
	public:
		int age;
		student(){
			age=18;
		}
		student(int a){
			age=a;
		}
		void dispaly()
		{
			cout<<"age="<<age<<endl;
		}
};
int main(){
	student s1;
	student s2(20);
	s1.dispaly();
	s2.dispaly();
	return 0;
}
