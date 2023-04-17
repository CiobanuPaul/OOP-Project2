//
// Created by cartofiprajiti on 17.04.2023.
//

#ifndef TEMA2_NOTAVALIDBUILDING_H
#define TEMA2_NOTAVALIDBUILDING_H
#include <iostream>

class NotAValidBuilding : public std::exception{
public:
    NotAValidBuilding() = default;
    const char * what() const noexcept override;
};


#endif //TEMA2_NOTAVALIDBUILDING_H
