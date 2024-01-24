#include <iostream>

#include "SortingTests.h"
#include "SortBase.h"
#include "Selection.h"

int main()
{
    SortingTests* Tests{ new SortingTests() };

    SortBase* SelectionSort{ new Selection() };
    Tests->LaunchAll(SelectionSort, "SelectionSort");
}