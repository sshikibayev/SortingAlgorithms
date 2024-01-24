#pragma once

#include <vector>

class SortBase
{
public:
    virtual std::vector<int> Implementation(const std::vector<int>& InputVector) = 0;
    virtual std::vector<int> AnotherImplementation(const std::vector<int>& InputVector);

protected:
    virtual ~SortBase() = default;
};