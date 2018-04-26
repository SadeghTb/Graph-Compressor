#ifndef NODE_H
#define NODE_H

#pragma pack(1)

#include "Vector.h"

class Node
{
public:
	//Vector<unsigned short int> heads;
	Vector <unsigned short int> edges; 
	Node();
	void a(unsigned short int ,unsigned short int);

};
#endif 