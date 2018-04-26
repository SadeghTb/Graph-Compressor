#include "MatchDetector.h"
#include <iostream>

using namespace std;

MatchDetector::MatchDetector()
{

}

void MatchDetector::detectMatch(const CompressedData& compressed_data,
	MatchMakingResult& return_result)
{
	unsigned short int start;
	unsigned short int counter = 0;
	this->compressDataObject = compressed_data;

	for (unsigned short int i = 0; i < 65535; i++)
	{
		if (this->compressDataObject.allNodes[i] != nullptr)
		{ 

			for (unsigned short int j = 0; j < this->compressDataObject.allNodes[i]->edges.size();j++)
			{
				if (this->compressDataObject.allNodes[i]->edges[j] == 0)
				{
					start = j;
					counter = 0;
					j++;
					while (this->compressDataObject.allNodes[i]->edges[j] != 0)
					{
						counter++;
						j++;
					}

					if (counter > 2)
					{
						if (return_result.allNodes[i] == nullptr)
						{
							return_result.allNodes[i] = new Node;
						}
							for (int k = start+1; k <= start + counter; k++)
							{
							return_result.allNodes[i]->edges.push_back(this->compressDataObject.allNodes[i]->edges[k]);
						}
					}
				}
			}

			return_result.allNodes[i]->edges.push_back(0);
		}
	}

}