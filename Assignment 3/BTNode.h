/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
*/
#ifndef AK_BTNode
#define AK_BTNode
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

template <class data_type>
class BTNode
{
// Public
public:
	// Constructors
	BTNode();
	BTNode(const data_type new_data);
	
	// Deconstructor
	~BTNode();

	// Setters
	void set_data(const data_type& new_data);
	void set_left(BTNode<data_type>* new_left);
	void set_right(BTNode<data_type>* new_right);
	void set_parent(BTNode<data_type>* new_parent);

	// Getters
	data_type get_data() const;
	BTNode<data_type>* get_left() const;	
	BTNode<data_type>* get_right() const;
	BTNode<data_type>* get_parent() const;

	// Mutators
	BTNode<data_type>* remove_node(data_type value, BTNode<data_type> *parent);
	data_type minimum_value();

// Private
private:
	data_type data;
	BTNode<data_type>* left;
	BTNode<data_type>* right;
	BTNode<data_type>* parent;
};

#include "BTNode.template"
#endif