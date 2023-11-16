#include "jumble.h";
using namespace std;

BadJumbleException::BadJumbleException(const string& message) : error_message(message){}

string BadJumbleException::what() const {
    return error_message;
}