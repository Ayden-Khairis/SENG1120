/*
Author: Ayden Khairis
Student Number: C3282229
Course: SENG1120
*/

#ifndef AK_HTable
#define AK_HTable
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

	template <typename data_type>
	class HTable
	{
	// Public
	public:
    // Constructor
    HTable();

    // Desconstructor
    ~HTable();

    // Add 
    void add(data_type newData);

    // Remove
    void remove(data_type oldData);

    // Get Data
    data_type getData(int pos);

    // Private
	private:
		int hashfun(int value);
    	data_type data[150];
    	int position[150];
	};

// Operator overload
template <typename data_type>
ostream& operator<<(ostream& os, HTable<data_type>& temp);

#include "HTable.template"
#endif