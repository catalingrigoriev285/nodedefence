#include "../include/FileSignature.h"
#include "../include/Exception.h"

#include <iostream>
#include <fstream>
#include <vector>

char* FileSignature::getFileSignature(const char* filePath) {
    std::ifstream file(filePath, std::ios::binary);

    if (!file) {
        //std::cerr << "Error: Unable to open file " << filePath << std::endl;
		throw Exception("FileSignature", "Unable to open file", "FileError");
        return nullptr;
    }

    std::vector<unsigned char> signature(SIGNATURE_MAX_SIZE);
    file.read(reinterpret_cast<char*>(signature.data()), signature.size());

    if (file) {		
        char* result = new char[SIGNATURE_MAX_SIZE * 3];
        result[SIGNATURE_MAX_SIZE * 3 - 1] = '\0';

        for (int i = 0; i < SIGNATURE_MAX_SIZE; i++) {
            sprintf(result + i * 3, "%02X ", signature[i]);
        }

        file.close();
		return result;
    }
    else {
		throw Exception("FileSignature", "Unable to read file", "FileError");
		return nullptr;
    }
}