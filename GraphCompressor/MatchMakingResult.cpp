#include "MatchMakingResult.h"
#include <iostream>
MatchMakingResult::MatchMakingResult()
{
	for (int i = 0; i < 65535; ++i)
	{
		allNodes[i] = nullptr;
	}
}

void MatchMakingResult::print()
{
	unsigned short int counter = 0;
	for (int i = 0; i < 65535; ++i)
		if (allNodes[i] != nullptr){
			cout << "Node " << i << "inRelWith ";
			for (int j = 0; j < allNodes[i]->edges.size(); j++){
				counter = 0;
				if (allNodes[i]->edges[j] == 0)
				{
					j++;
					cout << allNodes[i]->edges[j]<<"  IN   " ;
					j++;
					while (allNodes[i]->edges[j] != 0)
					{
						cout << allNodes[i]->edges[j]<<" ";
						counter++;
						j++;
					}
					cout << "times(" << counter << " times)\n";
				}
			}
		}
}