#include <iostream>

using namespace std;

struct node {
    int valor;
    node *left, *right;
};

node* create_node(int num) {
    node *root = new node;
    root->valor = num;
    root->left = nullptr;
    root->right = nullptr;

    return root;
}

void insert_node(node*& root, node* new_node) {
    if (!root) {
        root = new_node;
        return;
    }

    if (new_node->valor > root->valor) {
        insert_node(root->right, new_node);
    } else {
        insert_node(root->left, new_node);
    }
}

node *procurar(node *root, const int &num){
    if(!root || root->valor == num){
        return root;
    } else if (root->valor > num){
        return procurar(root->left, num);
    } else{
        return procurar(root->right, num);
    }

    return nullptr;
}


node* find_node(node* root, int value, node*& parent) {
    node* aux = root;
    parent = nullptr;

    while (aux) {
        if (aux->valor == value) return aux;

        parent = aux;
        if(value < aux->valor) aux = aux->left;
        else aux = aux->right;
    }

    return nullptr;
}

void delete_node(node*& root, int deleted_value) {
    if(!root) return;

    node* pai;
    node* aux_pai;
    node* aux_node;
    node* n = find_node(root, deleted_value, pai);

    if (!n) return;

    if (!n->left || !n->right) {
        if (!n->left) aux_node = n->right;
        else aux_node = n->left;
    } else {
        aux_pai = n;
        aux_node = n->left;

        while (aux_node->right) {
            aux_pai = aux_node;
            aux_node = aux_node->right;
        }

        if (aux_pai != n) {
            aux_pai->right = aux_node->left;
            aux_node->left = n->left;
        }

        aux_node->right = n->right;
    }
    
    if (!pai) {
        root = aux_node;
        delete n;
        return;
    }

    if (deleted_value < pai->valor) pai->left = aux_node;
    else pai->right = aux_node;

    delete n;
}

void pre_ordem(node *root, bool &isFirst){
    if (!root) return;

    if (!isFirst) cout << " ";
    cout << root->valor;
    isFirst = false;

    pre_ordem(root->left, isFirst);
    pre_ordem(root->right, isFirst);
}

void in_ordem(node *root, bool &isFirst) {
    if (!root) return;
    
    in_ordem(root->left, isFirst);

    if (!isFirst) cout << " ";
    cout << root->valor;
    isFirst = false;

    in_ordem(root->right, isFirst);
}

void pos_ordem(node *root, bool &isFirst){
    if (!root) return;

    pos_ordem(root->left, isFirst);
    pos_ordem(root->right, isFirst);

    if (!isFirst) cout << " ";
    cout << root->valor;
    isFirst = false;
}

int main() {
    string entrada;
    int num;

    node *root = nullptr;
    while(cin >> entrada) {
        if(entrada == "I"){
            cin >> num;

            node* new_node = create_node(num);
            insert_node(root, new_node);
        } else if (entrada == "P"){
            cin >> num;
            if(procurar(root, num)){
                cout << num << " existe\n";
            } else {
                cout << num << " nao existe\n";
            }  
        } else if (entrada == "R"){
            cin >> num;
            delete_node(root, num);
        } else if (entrada == "INFIXA"){
            bool first = true;
            in_ordem(root, first);
            cout << endl;
        } else if (entrada == "PREFIXA"){
            bool first = true;
            pre_ordem(root, first);
            cout << endl;
        } else if (entrada == "POSFIXA"){
            bool first = true;
            pos_ordem(root, first);
            cout << endl;
        } else {
            break;
        }
    }

    return 0;
}