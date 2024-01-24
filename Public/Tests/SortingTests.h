#pragma once

#include <iostream>
#include <vector>
#include <memory>

class SortBase;

class SortingTests
{
public:
    void LaunchAll(const std::shared_ptr<SortBase> SortingAlgorithm, const std::string& ImplementationName);

private:
    void Simple(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleMoreSpread(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleBigNumbers(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleNegative(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleRepetition(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleMix(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleSmallInput(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleEmptyInput(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleOneInput(std::shared_ptr<SortBase> SortingAlgorithm);
    void SimpleBigInput(std::shared_ptr<SortBase> SortingAlgorithm);


    void InitializeTest(const std::vector<int>& UnsortedVector, const std::vector<int>& ExpectedVector, const std::vector<int>& ResultVector);
    void PrintTestResult(const bool IsEqual, const std::vector<int>& ExpectedVector, const std::vector<int>& ResultVector);
};