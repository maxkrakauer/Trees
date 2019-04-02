



#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;





class Node {

  private:    // Not required. All is private by default.

    int _value;
    Node* _parent;
    Node* _left;
    Node* _right;
    
    

  public:

    // methods defined inline:

    Node* getParent() { return _parent;  }

    Node* getLeft() { return _left;  }
    
    Node* getRight() { return _right;  }
    
    
    
void setLeft(Node* left);


void setRight(Node* right);


void setParent(Node* parent);


Node* minimum();

    

   
   int getValue(){
      return _value;
   }

   void remove();

   string to_string();

   string print(string str);
   
   
  Node();
  
  Node(int x);

};


