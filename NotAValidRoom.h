//
// Created by cartofiprajiti on 17.04.2023.
//

#ifndef TEMA2_NOTAVALIDROOM_H
#define TEMA2_NOTAVALIDROOM_H
#include <iostream>

class NotAValidRoom : public std::exception{
public:
    NotAValidRoom() = default;
    const char * what() const noexcept override;
};


#endif //TEMA2_NOTAVALIDROOM_H
