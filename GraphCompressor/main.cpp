#pragma pack(1)

#include <iostream>
#include <fstream>
#include "DataCompressor.h"
#include "MatchDetector.h"

using namespace std;

int main()
{
	CompressedData compresedData; 
	DataCompressor dataCompressor;
	MatchDetector matchDetector;
	MatchMakingResult matchMakingResult;

	dataCompressor.init("dstb.txt");
	dataCompressor.getCompressedData(compresedData);
	compresedData.print();
	
	matchDetector.detectMatch(compresedData, matchMakingResult);
	matchMakingResult.print(); 

	system("pause");
	return 0;
}