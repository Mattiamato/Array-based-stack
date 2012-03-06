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
	for(int i=0; i < StackMax; i++)
		data[i].clear();
	index = -1;
}

int Stack_ab::size()					//return stack size
{
	return index+1;
}

void Stack_ab::push(std::string value)	//add to stack
{
	try
	{
		if(index+1 < StackMax)
		{
			index++;
			data[index] = value;
		}
		else
		{
			OverFlow e;
			throw e;
		}
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
		if(index != -1)
			return data[index];
		else
		{
			UnderFlow e;
			throw e;
		}
	}
	catch(UnderFlow e)
	{
		e.underflowoutput();
		return "Nothing";
	}
}

bool Stack_ab::empty()					//is_empty
{
	return index==-1;
}