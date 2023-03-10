#include "Pilas.hpp"

int main(int argc, char** argv)
{
	Pilas p1;
	
	p1.pushFront(8);
	p1.pushFront(5);
	p1.pushFront(10);
	p1.pushFront(15);
	p1.pushFront(2);
	p1.printPilas();
	
	cout<<"******************"<<endl;
	p1.popFront();
	p1.printPilas();
	cout<<"******************"<<endl;
	p1.popFront();
	p1.printPilas();
	
	return 0;
}
