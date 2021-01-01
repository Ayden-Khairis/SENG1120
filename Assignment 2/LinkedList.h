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
using namespace std;

template <class data_type>
class LinkedList
{
	public:
		// Linked List
		LinkedList();			
		
		// Linked List data
		LinkedList(data_type& data); 	
			
		// Linked List Destructor
		~LinkedList();			

		// Add to tail 
		void addToTail(const data_type& data);

		// Get current
		Node<data_type>* get_current();
       
		// Get head
		Node<data_type>* get_head();

		// Get head data
		data_type get_head_data();

		// Swap
		void swap(const int index1, const int index2);

    	// Add to head
		void addToHead(const data_type& data);

    	// Remove from head
    	void removeFromHead();

    	// Set current
     	void set_current(Node<data_type>* temp);

     	// Operator overload
     	LinkedList<data_type>& operator+= (LinkedList<data_type>& temp_list);

   	// Private
	private:
		Node<data_type>* head;     
		Node<data_type>* tail;     
		Node<data_type>* current;  
		int length;	
};

template <class data_type>
ostream& operator<<(ostream& os, LinkedList<data_type>& temp); 

#include "LinkedList.template"
#endif