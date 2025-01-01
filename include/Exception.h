#ifndef EXCEPTION_H
#define EXCEPTION_H

class Exception {
private:
    char* title;
    char* message;
    char* type;
public:
    Exception(const char* type, const char* title, const char* message);
    ~Exception();

    const char* getMessage() const;
    const char* getTitle() const;
    const char* getType() const;

	void displayMessage() const;
};

#endif // EXCEPTION_H