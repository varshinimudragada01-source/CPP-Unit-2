#include<iostream>
using namespace std;
class hotelroom{
	int roomno;
	public:
		hotelroom(int r){
			roomno=r;
			cout<<"room"<<roomno<<"booked"<<endl;
		}
		~hotelroom(){
			cout<<"room"<<roomno<<"checked out"<<endl;
		}
};
int main(){
	cout<<"guest checking in..."<<endl;{
	hotelroom rl(101);
	cout<<"guest staying..."<<endl;}
	cout<<"guest has left the hotel"<<endl;
	return 0;
}

