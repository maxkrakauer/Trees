#pragma once

#include "Node.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

 using namespace std;


namespace ariel{

class Tree {

  private:    // Not required. All is private by default.

    Node* _root;
    int _size;

    
    

  public:

    // methods defined inline:



    Node* findNode(int i);

    void insert(int i);

    void transplant(Node* u, Node* v);


    void remove(int i);

    int size();

    int contains(int i);

    int root(){
      if (_root==NULL)
      throw "no root";
      return _root->getValue();
    }

    int parent(int i);

    int left(int i);

    int right(int i);

    string print();

   
  Tree();
  
  Tree(Node* node);

  Tree(int i);

};

}