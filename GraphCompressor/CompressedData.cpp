#pragma pack(1)

#include <iostream>
#include "CompressedData.h"

CompressedData::CompressedData()
{
	for (int i = 0; i < 65535; i++)
	{
		allNodes[i] = nullptr;
	}

}
void CompressedData::print()
{
	unsigned short int counter;
	for (int i = 0; i < 65535; ++i)
		if (allNodes[i] != nullptr){
			cout << "Node " << i ;
			for (int j = 0; j < allNodes[i]->edges.size(); j++){
				if (allNodes[i]->edges[j] == 0)
				{
					counter = 0;
					j++;
					cout << " inRelWith " << allNodes[i]->edges[j] << " IN ";
					j++;
					while (allNodes[i]->edges[j] != 0)
					{
						cout << allNodes[i]->edges[j] << " ";
						counter++;
						j++;
					}
					cout << " times ( "<<counter<<" times)\n";
				}
			}
		}
}
