#include <iostream>
#include <cstdlib>
#include <time.h>

class Node{
    private:
        int data;
        int left = 0;
        int right = 0;
    public:

        int getData();
        void setData(int);
        int getLeft();
        void setLeft(int);
        int getRight();
        void setRight(int);
    
};
int Node::getData(){
    return data;
}
void Node::setData(int d){
    data = d;
}

int Node::getLeft(){
    return left;
}
void Node::setLeft(int l){
    left = l;
}
int Node::getRight(){
    return right;
}
void Node::setRight(int r){
    right = r;
}

class BinaryTree{
    private:
        int node;
        int root;
    public:
        int getNode();
        void setNode(int);
        int getRoot();
        void setRoot(int);
        void DefineRoot();
        void simetric_tranvesal();
        void simetric_tranvesal(int );
        
};
int BinaryTree::getNode(){
    return node;
}
void BinaryTree::setNode(int n){
    node = n;
}

int BinaryTree::getRoot(){
    return root;
}
void BinaryTree::setRoot(int l){
    root = l;
}
/*
void randon(){
    srand(time(NULL));
a
}*/
int main(){
    Node no;
    srand(time(NULL));
    int aux;
    for (int i = 0; i <10; i++){
        aux = rand() % 100000 + 1;
        no.setData(aux);
        std::cout << no.getData() << std::endl;
    }
}

void BinaryTree::DefineRoot(){
    Node no;
    int x;

    if (no.getData() != 0){
        x = no.getData();
        setNode(x);
        setRoot(x);
    }else{
        setRoot(0);
    }
}
void BinaryTree::simetric_tranvesal(int x){
    Node no;

    if (getNode() == 0){
        setNode(getRoot());
    }else if (no.getLeft()){
        simetric_tranvesal(no.getLeft());
        std:: cout<<no.getLeft();
    }else if (no.getRight()){
        simetric_tranvesal(no.getRight());
        std:: cout<<no.getRight();
    }
}
void BinaryTree::simetric_tranvesal(){
    Node no;

    if (getNode() == 0){
        setNode(getRoot());
    }else if (no.getLeft()){
        simetric_tranvesal(no.getLeft());
        std:: cout<<no.getLeft();
    }else if (no.getRight()){
        simetric_tranvesal(no.getRight());
        std:: cout<<no.getRight();
}
