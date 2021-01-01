/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
*/

#ifndef AK_STACK
#define AK_STACK
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
#include "LinkedList.h"	
	
	template <class value_type>
	class Stack
	{		
		public:
		// Stack
		Stack();

		// Stack destructor
		~Stack();

		// Push
		void push(const value_type& entry);
		
		// Pop
		void pop();
		
		// Size
		const int size();
		
		// Top
		const value_type top();
		
		// Private
		private:
		LinkedList<value_type>* data;
		int used;
		};

		template <class value_type>
 		ostream& operator<<(ostream& os, Stack<value_type>& input);

#include "Stack.template"
#endif