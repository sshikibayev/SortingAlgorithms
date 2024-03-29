#include "Tests/SortingTests.h"

#include "SortAlgorithms/SortBase.h"

void SortingTests::LaunchAll(const std::shared_ptr<SortBase> SortingAlgorithm, const std::string& ImplementationName)
{
    std::cout << "------------------- START " << ImplementationName << " -------------------" << std::endl;

    Simple(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleMoreSpread(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleBigNumbers(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleNegative(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleRepetition(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleMix(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleSmallInput(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleEmptyInput(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleOneInput(SortingAlgorithm);
    std::cout << "---------------------------------------------------------------" << std::endl;
    SimpleBigInput(SortingAlgorithm);

    std::cout << "------------------- END " << ImplementationName << " ---------------------" << std::endl;

}

//---------------START TESTS -------------------------

void SortingTests::Simple(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ 5, 4, 3, 2, 1, 0 };
    std::vector<int> ExpectedVector{ 0, 1, 2, 3, 4, 5 };
    std::vector<int> ResultVector{};

    std::cout << "Simple" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleMoreSpread(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ 2, 1, 3, 4, 0, 5 };
    std::vector<int> ExpectedVector{ 0, 1, 2, 3, 4, 5 };
    std::vector<int> ResultVector{};

    std::cout << "SimpleMoreSpread" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleBigNumbers(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ 222222222, 111111111, 333333333, 444444444, 123456789, 555555555 };
    std::vector<int> ExpectedVector{ 111111111, 123456789, 222222222, 333333333, 444444444, 555555555 };
    std::vector<int> ResultVector{};

    std::cout << "SimpleBigNumbers" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleNegative(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ -2, -1, -3, -4, -6, -5 };
    std::vector<int> ExpectedVector{ -6, -5, -4, -3, -2, -1 };
    std::vector<int> ResultVector{};

    std::cout << "SimpleNegative" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleRepetition(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ 2, 2, 3, 3, 1, 1, 5, 5, 4, 4 };
    std::vector<int> ExpectedVector{ 1, 1, 2, 2, 3, 3, 4, 4, 5, 5 };
    std::vector<int> ResultVector{};

    std::cout << "SimpleRepetition" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleMix(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ 2, -1, 3, 3, -4, 1, 5, 5, -1, 0 };
    std::vector<int> ExpectedVector{ -4, -1, -1, 0, 1, 2, 3, 3, 5, 5 };
    std::vector<int> ResultVector{};

    std::cout << "SimpleMix" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleSmallInput(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ 1, 0 };
    std::vector<int> ExpectedVector{ 0, 1 };
    std::vector<int> ResultVector{};

    std::cout << "SimpleSmallInput" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleEmptyInput(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{};
    std::vector<int> ExpectedVector{};
    std::vector<int> ResultVector{};

    std::cout << "SimpleEmptyInput" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleOneInput(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ 1 };
    std::vector<int> ExpectedVector{ 1 };
    std::vector<int> ResultVector{};

    std::cout << "SimpleOneInput" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}

void SortingTests::SimpleBigInput(std::shared_ptr<SortBase> SortingAlgorithm)
{
    std::vector<int> UnsortedInputVector{ };
    std::vector<int> ExpectedVector{ };
    std::vector<int> ResultVector{};

    const int TotalElements{ 500 };
    for (int i{ TotalElements }; i >= 0; --i)
    {
        UnsortedInputVector.emplace_back(i);
        ExpectedVector.emplace_back(TotalElements - i);
    }

    std::cout << "SimpleBigInput" << std::endl;

    ResultVector = SortingAlgorithm->Implementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);

    ResultVector = SortingAlgorithm->AnotherImplementation(UnsortedInputVector);
    InitializeTest(UnsortedInputVector, ExpectedVector, ResultVector);
}


//---------------END TESTS -------------------------

void SortingTests::InitializeTest(const std::vector<int>& UnsortedVector, const std::vector<int>& ExpectedVector, const std::vector<int>& ResultVector)
{
    PrintTestResult(ResultVector == ExpectedVector, ExpectedVector, ResultVector);
}

void SortingTests::PrintTestResult(const bool IsEqual, const std::vector<int>& ExpectedVector, const std::vector<int>& ResultVector)
{
    if (IsEqual)
    {
        std::cout << "PASSED" << std::endl;
    }
    else
    {
        std::cout << "FAILED" << std::endl;

        std::cout << "Exp: ";
        for (int i{ 0 }; i < ExpectedVector.size(); ++i)
        {
            std::cout << ExpectedVector[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Res: ";
        for (int i{ 0 }; i < ResultVector.size(); ++i)
        {
            std::cout << ResultVector[i] << " ";
        }
        std::cout << std::endl;
    }
}