#include <iostream>
#include <memory>

#include "Public/Tests/SortingTests.h"
#include "Public/SortAlgorithms/SortBase.h"
#include "Public/SortAlgorithms/Selection.h"

int main()
{
    std::unique_ptr<SortingTests> Tests{ std::make_unique<SortingTests>() };
    std::shared_ptr<SortBase> SelectionSort{ std::make_shared<Selection>() };

    Tests->LaunchAll(SelectionSort, "SelectionSort");
}