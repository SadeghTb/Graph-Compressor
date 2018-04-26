#ifndef MATCHDETECTOR_H
#define MATCHDETECTOR_H


#include "MatchMakingResult.h"

class MatchDetector
{
private:
	CompressedData compressDataObject;
	MatchMakingResult matchMakingResultObject;

public:
	MatchDetector();
	void detectMatch(const CompressedData& compressed_data,
		MatchMakingResult& return_result);

};




#endif