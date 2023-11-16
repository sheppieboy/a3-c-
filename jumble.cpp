#include "jumble.h";
using namespace std;

BadJumbleException::BadJumbleException(const string& message) : error_message(message){}

string BadJumbleException::what() const {
    return error_message;
}

JumblePuzzle::JumblePuzzle(const string& hiddenWord, const string& difficulty){
    
}

charArrayPtr* JumblePuzzle::getJumble() const {
    return jumble;
}

int JumblePuzzle::getSize() const {
    return size;
}

int JumblePuzzle::getRowPos() const {
    return rowPos;
}

int JumblePuzzle::getColPos() const {
    return colPos;
}

char JumblePuzzle::getDirection() const {
    return direction;
}