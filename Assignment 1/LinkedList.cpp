/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
Program Description: 
This is a program which removes students from a linkedlist, adds list 1 with list 2, 
averages the student scores from both lists individually, and counts the number of students
that have a specific name. 
*/

#include <cstdlib>
#include <string>
#include "Node.h"
#include "LinkedList.h"
#include "Student.h"
using namespace std;

    // Initializations of LinkedList
    LinkedList::LinkedList()
    {
        head = NULL;    // Initialize head node
        tail = NULL;    // Initialize tail node
        current = NULL; // Initialize current
        length = 0;     // Set length to 0
    }
    
    LinkedList::LinkedList(Node::data_type& data)
    {
        head = new Node(data);  // Create new head node
        tail = head;            // Makes tail node equal head node
        current = tail;         // Move current to tail
        length = 1;             // Set length to 1
    }
    
    // Destructor
    LinkedList::~LinkedList()
    {
       while(head != NULL)
       {
            Node* temp;
            temp = head;
            head = head->get_next();
                    
            if (head != NULL) 
            {
                head->set_previous(NULL);
            }
                     
            else 
            {
                tail = NULL;
            }
              
            delete temp;
            length--;
            current = head;
        }
    }

   // Method to add to tail
    void LinkedList::addToTail(const Node::data_type& data)
    {
        // Add tail Node for empty list
        if (length == 0)
        {
            tail = new Node(data); // Create a new node and sets it to tail
            head = tail;           // Makes head node = tail
            current = head;        // Let current become head 
            length = 1;            // Set the length of linked list to 1
        }
        
        else
        {
            Node* tailInsert = new Node(data); // Inserts a new node at the tail of linked list
            tail -> set_next(tailInsert);      // Sets tail to the new tail
            tailInsert -> set_previous (tail); // Sets the previous tail node
            tail = tailInsert;                 // Tail equals the new tail that was inserted
            length++;                          // Increases the length of the linked list
            tailInsert = NULL;                 // Sets tail insert to NULL
        }
    }  

    // Method to access current node
    Node* LinkedList::get_current()
    {
        return current;
    }
       
    // Method to access head node
    Node* LinkedList::get_head()
    {
        return head;
    }

    // Method to count amount of students with a specific name
    int LinkedList::count(const string student)
    {
        int count = 0;  // Initialize counter
        current = head; // Makes current equal head node
        do{
            if (student==current->get_name()) // Searches through linked list
            {
                count++;    // If student equals get_name, add 1 to counter
            }
            
            current = current->get_next();  // Sets current to get next student
        }while(current != NULL);            // Loop ends when all students have been checked
        return count;                       // Count is returned with a value
    }

    // Calculates average of the linked lists
    const double LinkedList::calcAverage()
    {
        double sum = 0; // Initialize sum
        current = head; // Makes current equal head node

        do{
            sum += current->get_score();    // Sum adds up student scores
            current = current->get_next();  // Sets current to get next student
        }while(current != NULL);            // Loop ends when all students have been checked
        
        sum = sum/length;   // Sum divided by the length of the linked list to find average
        return sum;         // Sum is returned with a value
    }

    // Method to remove a student from LinkedList
 	void LinkedList::remove(const string student)
    {
        current = head;
        while(current != NULL)
        {
            // Checks if student's name is equal to current to remove it whilst current equals head
            if (student==current->get_name() && current==head)
            {
                Node* temp;
                temp = head;
                head = head->get_next();
                
                if (head != NULL) 
                {
                    head->set_previous(NULL);
                }
                        
                else 
                {
                    tail = NULL;
                }
                
                delete temp;
                length--;
                current = head;
            }
            
            // Checks if student's name is equal to current to remove it whilst current equals tail   
            else if (student==current->get_name() && current==tail)
            {
                Node* temp;      
                temp = tail;
                tail = temp->get_previous(); 
                    
                if (tail != NULL)
                {
                    tail -> set_next(NULL);
                }
                    
                else
                {
                    head = NULL;
                }
        
                delete temp;
                length --;
                current = NULL;
            }
            
            // Checks if student's name is equal to current to remove it   
            else if(student==current->get_name())
            {
                Node* temp;
                temp = current->get_previous();
                temp->set_next(current->get_next());
                temp = current->get_next();
                temp->set_previous(current->get_previous());
                delete current;
                current = temp;
                length--;
            }
            
            // Gets next node in list to check   
            else
            {
                current = current->get_next();
            }
                
        }

    }

    // Method to set current 
    void LinkedList::set_current(Node* temp)
    {
        current = temp;
    }
        
    // Overloading operators += and <<
    ostream& operator<<(ostream& os, LinkedList& temp)  
    {
        temp.set_current(temp.get_head());
        do{
            os << temp.get_current()->get_data(); 
            temp.set_current(temp.get_current()->get_next());
        }while(temp.get_current() != NULL);
   
        return os;  
    }

    // Adds list 1 to list 2
    LinkedList& LinkedList::operator+= (LinkedList& temp_list)
    {
        temp_list.set_current(temp_list.get_head());
        do{
            this->addToTail(temp_list.current->get_data());
            temp_list.set_current(temp_list.get_current()->get_next());

        }while(temp_list.get_current() != NULL);

        return *this;
    }