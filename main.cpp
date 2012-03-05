//
//  main.cpp
//  stack_arraybased
//
//  Created by Loc Nguyen on 08.02.12.
//  Copyright (c) 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include "stack_ab.h"

int main (int argc, const char * argv[])
{

    Stack_ab mystack;
    std::string temp;
    std::cout<<"initial size of stack: "<<mystack.size()<<"\n";
    try {
        mystack.push("Villa");
        mystack.push("Messi");
        mystack.push("Alexis");
        mystack.push("Iniesta");
        mystack.push("Xavi");
        mystack.push("Mascherano");
        mystack.push("Dani Alves");
        mystack.push("Abidal");
        mystack.push("Pique");
        mystack.push("Puyol");
        mystack.push("Valdes");

    } catch (OverFlow& e) {
        e.overflowoutput();
    }
        
    std::cout<<"current size of stack: "<<mystack.size()<<"\n";

    std::cout<<"current top element is: "<<mystack.top()<<"\n";
    
    try {
        while (!mystack.empty()) {
            std::cout<<mystack.pop()<<" wurde gepopt\n";
            std::cout<<mystack.top()<<" is now on top\n";
            //in the console these sentences are funny =)
        }
    } catch (UnderFlow& e) {
        e.underflowoutput();  
    }
    
	delete &mystack;

    int i;
	std::cin >> i;

    return 0;
}

