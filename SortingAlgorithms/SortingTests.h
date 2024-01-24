#pragma once

#include <iostream>
#include <vector>

class SortBase;

class SortingTests
{
public:
    void LaunchAll(SortBase* SortingAlgorithm, const std::string& ImplementationName);

private:
    void Simple(SortBase* SortingAlgorithm);
    void SimpleMoreSpread(SortBase* SortingAlgorithm);
    void SimpleBigNumbers(SortBase* SortingAlgorithm);
    void SimpleNegative(SortBase* SortingAlgorithm);
    void SimpleRepetition(SortBase* SortingAlgorithm);
    void SimpleMix(SortBase* SortingAlgorithm);


    void InitializeTest(const std::vector<int>& UnsortedVector, const std::vector<int>& ExpectedVector, const std::vector<int>& ResultVector);
    void PrintTestResult(const bool IsEqual, const std::vector<int>& ExpectedVector, const std::vector<int>& ResultVector);
};