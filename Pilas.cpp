#include "Pilas.hpp"

Pilas::Pilas(){
	head = 0;
}

void Pilas::pushFront(int key){
	Nodo *nuevoNodo = new Nodo(key);
	nuevoNodo->next = head;
	head  = nuevoNodo;
}

void Pilas::printPilas(){
	Nodo *iterador;
	iterador->next = head;
	
	while(iterador->next != NULL){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}
