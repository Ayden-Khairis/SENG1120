/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
*/

#include "student.h"
#include "node.h"

// Node 
Node::Node(const data_type& initial_data, Node* initial_next, Node* initial_previous)
{
	next = initial_next;
	previous = initial_previous;
	data = initial_data;
}

// Node Destructor
Node::~Node()
{
	previous = NULL;
	next = NULL;
	// data.~data_type();
	// This is the deletion method that was learnt in the lecture, however it causes a core dump?
}

// Setters
void Node::set_data(const data_type& new_data)
{
	data = new_data;
}
void Node::set_next(Node* new_next)
{
	next = new_next;
}
void Node::set_previous(Node* new_previous)
{
	previous = new_previous;
}

// Getters
Node::data_type Node::get_data() const
{
	return data;
}
Node* Node::get_next() const
{
	return next;
}
Node* Node::get_previous() const
{
	return previous;
}
double Node::get_score()
{
	double score = data.get_score();
	return score;
}
string Node::get_name()
{
	string name = "";
	name = data.get_name();
	return name;
}