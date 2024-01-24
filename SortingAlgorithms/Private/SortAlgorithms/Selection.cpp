#include "SortAlgorithms/Selection.h"

std::vector<int> Selection::Implementation(const std::vector<int>& InputVector)
{
    //Save InputVector as a writable new vector.
    std::vector<int> Result{ InputVector };
    const int VectorSize{ static_cast<int>(InputVector.size()) };

    //Start loop from the first element and End on a penultimate element.
    //End loop on the penultimate element, because the second loop will have the Last element.
    //The second loop Starts from the Next element and ends on the Last element.
    //Idea of the second's loop to find the smallest element in a given range,
    //of the first loop, when the second loop ends, it's saving the smallest index number,
    //and swapping it with the index from the first loop.
    //Eventually at every cycle of the first loop we have the smallest number,
    //at the right position, and we do the same until all numbers are sorted.
    for (int Index{ 0 }; Index < VectorSize - 1; ++Index)
    {
        int MinIndex{ Index };
        for (int NextIndex{ Index + 1 }; NextIndex < VectorSize; ++NextIndex)
        {
            if (Result[MinIndex] > Result[NextIndex])
            {
                MinIndex = NextIndex;
            }
        }

        std::swap(Result[Index], Result[MinIndex]);
    }

    return Result;
}

std::vector<int> Selection::AnotherImplementation(const std::vector<int>& InputVector)
{
    //Save InputVector as a writable new vector.
    std::vector<int> Result{ InputVector };
    const int VectorSize{ static_cast<int>(InputVector.size()) };

    //Start loop from the first element and End on a penultimate element.
    //Inside the loop we search for the smallest value,
    //When it's done, we search for the index of the smallest value,
    //Which will be written as MinIndex.
    //The next move is to swap Index with MinIndex.
    //Overall we are moving MinIndex to the first available position,
    //To be sure that the first element is the smallest one.
    for (int Index{ 0 }; Index < VectorSize - 1; ++Index)
    {
        const std::vector<int>::iterator MinValue{ std::min_element(Result.begin() + Index, Result.end()) };
        const int MinIndex{ static_cast<int>(std::distance(Result.begin(), MinValue)) };

        std::swap(Result[Index], Result[MinIndex]);
    }

    return Result;
}
