#ifndef FILESIGNATURE_H
#define FILESIGNATURE_H

#define SIGNATURE_MAX_SIZE 8

class FileSignature {
public:
    static char* getFileSignature(const char* filePath);
};

#endif // FILESIGNATURE_H