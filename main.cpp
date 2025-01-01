#include "include/FileSignature.h"
#include "include/Exception.h"

#include <iostream>

int main() {
    const char* filePath = "LICENSE";
    
    try {
		std::cout << "File signature: " << FileSignature::getFileSignature(filePath) << std::endl;
	}
	catch (Exception& e) {
		e.displayMessage();
	}

    return 0;
}
