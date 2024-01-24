#pragma once

#include <vector>

#include "SortBase.h"

class Selection : public SortBase
{
protected:
    virtual std::vector<int> Implementation(const std::vector<int>& InputVector) override;
    virtual std::vector<int> AnotherImplementation(const std::vector<int>& InputVector) override;
};

//Complexity Time O(n^2)
//Space Complexity O(n), in default Selection Sort O(1)
//In our case it's taking up additional space,
//Allocates a new vector for the manipulations.