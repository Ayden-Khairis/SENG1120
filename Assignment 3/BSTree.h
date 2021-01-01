/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
*/

#ifndef AK_Node
#define AK_Node
#include <cstdlib>
#include <iostream>
#include <string>
#include "BTNode.h"
using namespace std;

template <typename data_type>
class BSTree
{
// Public
public:
	// Constructors
	BSTree();	
	BSTree(BSTree<data_type>* root_node);

	// Destructors
	~BSTree();
	void removeBTNodes(BTNode<data_type>* node);
	
	// Mutators
	void insert(data_type it, BTNode<data_type>* node);
    void add(data_type new_data);
	bool remove(data_type data);
	bool find(BTNode<data_type>* node, data_type target);
	data_type getData(int pos);
	
	// Query
	data_type get_data() const;
	void print();
	void infix(BTNode<data_type>* node);
	
// Private
private:
	BTNode<data_type>* root;
	int size;
};

// Operator overload
template <typename data_type>
ostream& operator<<(ostream& os, BSTree<data_type>& list);

#include "BSTree.template"
#endif