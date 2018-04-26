#pragma pack(1)

#ifndef DATACOMPRESSOR_H
#define DATACOMPRESSOR_H

#include <string>
#include "CompressedData.h"
class DataCompressor
{
private:
	CompressedData compressedData;

public:

	DataCompressor();
	void resize();

	void init(std::string entry_file);

	void getCompressedData(CompressedData& return_compressed_data);

	void print();
};




#endif