#include "Node.hpp"
#include "Tree.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    
    Node* node1 = new Node(3);
    Node* node2 = new Node(5);
    Node* node3 = new Node();
    Node* node4 = new Node(6);
    (*node1).setRight(node2);
    (*node1).setLeft(node3);
    (*node2).setRight(node4);
    cout << node1->to_string()<< endl;
    cout << node1->getRight()->to_string()<< endl;
    
}