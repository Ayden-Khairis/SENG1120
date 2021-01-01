/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
*/

#ifndef AK_QUEUE
#define AK_QUEUE
#include <cstdlib>
#include "LinkedList.h"
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
	
	template <class value_type>
	class Queue
	{
		public:
		// Queue
		Queue();

		// Queue Destructor
		~Queue();

		// Enqueue
		void enqueue(const value_type& obj);

		// Dequeue
		void dequeue();

		// Front 
		value_type front();

		// Queue Size
		int size() const;

		// Average of Queue
		const double average();

		// Minimum 
		const value_type minimum();

		// Maximum
		const value_type maximum();

		// Standard Deviation of Queue
		const double stdeviation();

		// Private 
		private:
		LinkedList<value_type>* data;
		int length;
	};

#include "Queue.template"
#endif