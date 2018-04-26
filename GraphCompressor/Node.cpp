#pragma pack(1)

#include "Node.h"
#include <iostream>

#define num 256


Node::Node()
{
	edges.push_back(0);
}

void Node::a(unsigned short int inRelWith,unsigned short int time)
{
/*	unsigned int my_size = edges.size();
	unsigned int head_size = heads.size();
	unsigned int this_head = 0;
	for (int i = 0; i < head_size; ++i){

	
	}
	*/
    unsigned int my_size = edges.size();
	unsigned int now_node=0;

	for (unsigned int i = 0; i < my_size - 1; ++i)
		{
			if (edges[i] == 0)
			{
				i++;
				if (edges[i] == inRelWith)
				{
					now_node = i;
					break;
				}
			}
		}

	unsigned int next_zero = now_node;
	if (now_node != 0)
	{
		for (; edges[next_zero] != 0; ++next_zero);
		edges.push_back(0);
		for (unsigned int i = my_size; i > next_zero; --i){
			edges[i] = edges[i - 1];

		}
		edges[next_zero] = time;
	}
	
	else
	{
		edges.push_back(inRelWith);
		edges.push_back(time);
		edges.push_back(0);		
	}
	
	/*
	unsigned short int my_size;
	unsigned short int hashed;
	
	hashed = inRelWith % num;
	//my_size =edge[hashed].size();
	unsigned short int sizeHashedEdge=edge[hashed].size();
	for (int i = 0; i < sizeHashedEdge; i++)
	{
		if (edge[hashed][i].fakeId == (inRelWith - inRelWith % 256) / 256)
		{
			edge[hashed][i].times.push_back(time);
			return;
		}
	}

	NodeDif newer;
	edge[hashed].push_back(newer);
	edge[hashed][sizeHashedEdge].fakeId = (inRelWith - inRelWith % 256) / 256;
	edge[hashed][sizeHashedEdge].times.push_back(time);
	*/

	/*for (unsigned short int i = 0; i < my_size; i++)
	{
		if (edge[hashed][i][0] == inRelWith)
		{
			edge[hashed][i].push_back(time);
			return;
		}
	}
		Vector<unsigned short int> c;
		edge[hashed].push_back(c);
		edge[hashed][my_size].push_back(inRelWith);
		edge[hashed][my_size].push_back(time);
	*/
}
