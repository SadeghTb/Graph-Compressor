#pragma pack(1)


#ifndef COMPRESSEDDATA_H
#define COMPRESSEDDATA_H
#include "Node.h"

class CompressedData
{
public:
	void print();
	CompressedData();
	Node* allNodes[65536];

};
#endif