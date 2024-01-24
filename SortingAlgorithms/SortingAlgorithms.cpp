#include <iostream>
#include <memory>

#include "SortingTests.h"
#include "SortBase.h"
#include "Selection.h"

int main()
{
    std::unique_ptr<SortingTests> Tests{ std::make_unique<SortingTests>() };
    std::shared_ptr<SortBase> SelectionSort{ std::make_shared<Selection>() };

    Tests->LaunchAll(SelectionSort, "SelectionSort");
}