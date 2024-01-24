#pragma once

#include <vector>

#include "SortBase.h"

class Selection : public SortBase
{
protected:
    virtual std::vector<int> Implementation(const std::vector<int>& InputVector) override;
    virtual std::vector<int> AnotherImplementation(const std::vector<int>& InputVector) override;
};
