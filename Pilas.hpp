#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Nodo.hpp"

class Pilas{
	public:
		Pilas();
		void pushFront(int);
		void printPilas();
	
	private:
		Nodo *head;	
};
