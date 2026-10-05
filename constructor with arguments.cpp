#include<iostream>
using namespace std;
class flower{
	string name;
	int petals;
	public:
		flower(string n,int p){
			name=n;
			petals=p;
			cout<<name<<"created with"<<petals<<"petals."<<endl;
		}
		void show(){
				cout<<name<<"has"<<petals<<"petals"<<endl;
			}
};
int main(){
	flower rose("rose",5);
	flower lily("lily",3);
	rose.show();
	lily.show();
	return 0;
}
