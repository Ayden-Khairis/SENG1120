/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
*/

#ifndef AK_LINKEDLIST
#define AK_LINKEDLIST

#include <cstdlib>
#include <string>
#include "Node.h"
#include "Student.h"
using namespace std;

class LinkedList
{
	public:
       
		typedef Student data_type;  
			
		// Linked List
		LinkedList();			
		
		// Linked List data
		LinkedList(data_type& data); 	
			
		// Linked List Destructor
		~LinkedList();			

		// Add to tail 
		void addToTail(const data_type& data);

		// Get current
		Node* get_current();
       
		// Get head
		Node* get_head();

		// Swap
		void swap (const int index1, const int index2);

		// Count
		int count(const string student);

		// Average calculation
		const double calcAverage();

    	// Remove
    	void remove(const string student);

     	// Set current
     	void set_current(Node* temp);

     	// Operator overload
     	LinkedList& operator+= (LinkedList& temp_list);

   	// Private
	private:
		Node* head;     
		Node* tail;     
		Node* current;  
		int length;	
};
ostream& operator<<(ostream& os, LinkedList& temp); 

#endif