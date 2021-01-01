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
#include "student.h"
using namespace std;
	
	class Node
	{
		public:
			typedef Student data_type; 

			Node(const data_type& initial_data = data_type(), Node* initial_next = NULL, Node* initial_previous = NULL);
			
			~Node();

			// Setters
			void set_data(const data_type& new_data);
			void set_next(Node* new_next);
			void set_previous(Node* new_previous);

			// Getters
			data_type get_data() const;
			Node* get_next() const;			
			Node* get_previous() const;
			double get_score();
			string get_name();

		// Private
		private:
			data_type data;   
			Node* next;        
			Node* previous;
	};

#endif