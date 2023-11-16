#ifndef JUMBLE_H
#define JUMBLE_H

#include <string>
typedef char* charArrayPtr;

class BadJumbleException {
public: 
    BadJumbleException(const std::string& message);
    std::string what() const;

public:
    std::string error_message;
};

class JumblePuzzle {
public:
    //constructor
    JumblePuzzle(const std::string& hiddenWord, const std::string& difficulty);

    //copy constructor
     JumblePuzzle(const JumblePuzzle& other);

     //destructor, will free up and memory on the heap when removing from 
    virtual ~JumblePuzzle();


    //assignment operator for jumble puzzle class
    JumblePuzzle& operator=(const JumblePuzzle& other);

    //accessors
    charArrayPtr* getJumble() const;
    int getSize() const;
    int getRowPos() const;
    int getColPos() const;
    char getDirection() const;

private:
    charArrayPtr* jumble;
    int size;
    int rowPos;
    int colPos;
    char direction;

};

#endif