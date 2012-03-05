//
//  stack_ab.cpp
//  stack_arraybased
//
//  Created by Loc Nguyen on 16.02.12.
//  Copyright (c) 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include "stack_ab.h"

//all implementations here!!!

Stack_ab::Stack_ab()					//constructor
{
	index = -1;
}

Stack_ab::~Stack_ab()					//destructor
{
	delete [] data;
}

int Stack_ab::size()					//return stack size
{
	return index+1;
}

void Stack_ab::push(std::string value)	//add to stack
{
	try
	{
		index++;
		data[index] = value;

	}
	catch(OverFlow e)
	{
		e.overflowoutput();
	}
		
}

std::string Stack_ab::pop()				//remove from stack
{
	try
	{
		index--;
		return data[index+1];
	}
	catch(UnderFlow e)
	{
		e.underflowoutput();
	}
}

std::string Stack_ab::top()				//return top position
{
	try	
	{
		return data[index];
	}
	catch(UnderFlow e)
	{
		e.underflowoutput();
	}
}

bool Stack_ab::empty()					//is_empty
{
	return index==-1;
}