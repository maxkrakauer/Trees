
#include "Node.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string> 

using namespace std;


void Node::setLeft(Node* left) {
    Node*x = this;
    if(x==NULL)
    throw "no node and therefore cannot set left";
	_left = left;
    }



void Node::setRight(Node* right) {
    Node*x = this;
    if(x==NULL)
    throw "no node and therefore cannot set right";
	_right = right;

}

void Node::setParent(Node* parent) {
    Node*x = this;
    if(x==NULL)
    throw "no node and therefore cannot set parent";
	_parent = parent;
}

string Node::to_string(){
    Node*x = this;
    if(x==NULL)
    throw "no node and therefore cannot print";
    return "value is: " + std::to_string(getValue()) + "\n";
}

string Node::print(string str){
    Node*x = this;
    if(x==NULL)
    throw "no node and therefore cannot print!";
    if(this->getLeft()!=NULL)
    str=str+this->getLeft()->print(str);
    if(this->getRight()!=NULL)
    str=str+this->getRight()->print(str);
    return to_string();
}




void Node::remove(){
    delete(this);
 }


Node* Node::minimum(){
    Node* x = this;
    if (x==NULL)
    throw "no node and therefore no minimum";
    while(x->getLeft()!=NULL)
    x=(*x).getLeft();
    return x;
}



Node::Node() {
    _value=0;
    this->_left = NULL;
    this->_right = NULL;
    this->_parent = NULL;
}

Node::Node(int x) {
    _value=x;
    this->_left = NULL;
    this->_right = NULL;
    this->_parent = NULL;
}


