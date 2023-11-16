#ifndef JUMBLE_H
#define JUMBLE_H

#include <string>

class BadJumbleException {
public: 
    BadJumbleException(const std::string& message);
    std::string what() const;

public:
    std::string error_message;
};

#endif