#include <iostream>

using namespace std;

struct Node{
    string name;
    int number;
    Node *next, *previous;
};

Node* create_node(string nome, int ficha){
    Node *novo = new Node;
    novo->name = nome;
    novo->number = ficha;
    novo->next = nullptr;
    novo->previous = nullptr;

    return novo;
}

void insert_node(Node *&nodo, Node *&first, Node *&last){
    nodo->previous = last;
    last->next = nodo;

    last = nodo;
    nodo->next = first;

    first->previous = last;
}

void remove_node(Node *&nodo){
    nodo->previous->next = nodo->next;
    nodo->next->previous = nodo->previous;

    delete nodo;
}

void find_winner(Node *&primeiro, Node *&ultimo, int ficha, int aux){ 
    if(primeiro == ultimo){
        cout << "Vencedor(a): " << primeiro->name << endl;
        return;
    }

    Node *nodoAtual = new Node;

    if(aux == 1 && ficha % 2 == 0) nodoAtual = primeiro->next;
    else if(aux == 1 && ficha % 2 != 0) nodoAtual = primeiro->previous;
    else nodoAtual = primeiro;

    if(ficha % 2 == 0){
        while(ficha > 0){
            nodoAtual = nodoAtual->next;
            ficha--;
        }
    } else {
        while(ficha > 0){
            nodoAtual = nodoAtual->previous;
            ficha--;
        }
    }

    int newNum = nodoAtual->number;

    if(newNum % 2 == 0){
        primeiro = nodoAtual->next;
        ultimo = nodoAtual->previous;
    } else {
        primeiro = nodoAtual->previous;
        ultimo = nodoAtual->next;
    }

    remove_node(nodoAtual);
    find_winner(primeiro, ultimo, nodoAtual->number, 0);
}


void show_linked_list(Node *first, Node *last){
    if(first == last) {
        cout << first->name << endl;
        return;
    }

    cout << first->name << endl;
    show_linked_list(first->next, last);
}

int main(){
    int children, ficha;
    string nome;

    while(true){

        cin >> children;

        if(children == 0) break;

        Node *primeiro;
        Node *ultimo;

        for(int i=0; i<children; i++){
            cin >> nome >> ficha;

            if(i==0){
                primeiro = create_node(nome, ficha);
                ultimo = primeiro;
            } else {
                Node *novo = create_node(nome, ficha);
                insert_node(novo, primeiro, ultimo);
            }
        }

        find_winner(primeiro, ultimo, primeiro->number, 1);
    }
    
    return 0;
}