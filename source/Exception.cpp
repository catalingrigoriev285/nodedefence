#include "../include/Exception.h"

#include <iostream>
#include <cstring>

Exception::Exception(const char* title, const char* message, const char* type){
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);

	this->message = new char[strlen(message) + 1];
	strcpy(this->message, message);

	this->type = new char[strlen(type) + 1];
	strcpy(this->type, type);
}

Exception::~Exception() {
	delete[] title;
	delete[] message;
	delete[] type;
}

const char* Exception::getMessage() const {
	return message;
}

const char* Exception::getTitle() const {
	return title;
}

const char* Exception::getType() const {
	return type;
}

void Exception::displayMessage() const {
	std::cerr << title << " - " << message << std::endl;
}