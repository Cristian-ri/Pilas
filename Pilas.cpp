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
	iterador = head;
	
	while(iterador != NULL){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}



int Pilas::popFront(){
    if (head==NULL)
   {
    cout<<"la lista esta vacia"<<endl;
   }
   int dato=head->key;
   head=head->next;
   return dato;
}
