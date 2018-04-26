#pragma pack(1)

#ifndef MATCHMAKINGRESULT_H
#define MATCHMAKINGRESULT_H

#include "DataCompressor.h"

class MatchMakingResult
{
private:

	
public:
	Node* allNodes[65536];

	void print();
	MatchMakingResult();

};

#endif