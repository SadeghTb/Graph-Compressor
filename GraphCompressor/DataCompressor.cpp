#pragma pack(1)

#include "DataCompressor.h"
#include <fstream>
#include <iostream>
DataCompressor::DataCompressor()
{
	
}

void DataCompressor::init(std::string entry_file)
{
	int counter = 0;
	std::ifstream sth(entry_file);
	unsigned short int a, b, c;
	while (!sth.eof())
	{
		sth >> a >> b >> c ;

		if (compressedData.allNodes[a] == nullptr)
		{
			compressedData.allNodes[a] = new Node;
		}
			compressedData.allNodes[a]->a(b, c);

	}
	
}

void DataCompressor::getCompressedData(CompressedData& return_compressed_data)
{
	return_compressed_data=compressedData;
}

/*void DataCompressor::resize()
{
	for (int i = 0; i < 65535; i++)
	{
		if (compressedData.allNodes[i] != nullptr)
		{
			for (int j = 0; j < 256; j++)
			{
				compressedData.allNodes[i]->edge[j].times.resize(compressedData.allNodes[i]->edge[j].times.size());
			}
		}

	}
}

*/