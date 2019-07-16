// #include -> Preprocessor directive
// used to include library before compiling
// <iostream> -> header file
#include <iostream>

int AddNumbers(int a, int b, int c)
{
    return a + b + c;
}

int MultiplyNumbers(int a, int b, int c)
{
    return a * b * c;
}

void PrintIntroduction(int LevelDifficulty)
{
    // std -> namespace
    // :: -> scope operator
    // cout -> is defined in std namespace
    std::cout << "Level difficulty:" << LevelDifficulty << "\n";            // this is an expression
    std::cout << "You you are trying to break into the mind of a genius\n"; // this is an expression
    std::cout << "Try and guess the code\n\n";
}

bool CheckGuess(int GuessSum, int CodeSum, int GuessProduct, int CodeProduct)
{
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "Your guess was correct. You won\n\n\n";
        return true;
    }
    else
    {
        std::cout << "Your guess did not match the code. Try again\n\n\n";
        return false;
    }
}

int PlayGame(int LevelDifficulty)
{
    PrintIntroduction(LevelDifficulty);

    const int CodeA = 1;
    const int CodeB = 3;
    const int CodeC = 2;

    int CodeSum = AddNumbers(CodeA, CodeB, CodeC);
    int CodeProduct = MultiplyNumbers(CodeA, CodeB, CodeC);

    std::cout << "There are three numbers in the code\n";
    std::cout << "The code adds up to: " << CodeSum << "\n";
    std::cout << "The codes multiply to give: " << CodeProduct << "\n\n";

    int GuessA, GuessB, GuessC;
    std::cout << "What is the code:\n";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = AddNumbers(GuessA, GuessB, GuessC);
    int GuessProduct = MultiplyNumbers(GuessA, GuessB, GuessC);

    std::cout << "Your guess adds up to: " << GuessSum << "\n";
    std::cout << "Your guess' multiply to give: " << GuessProduct << "\n";

    return CheckGuess(GuessSum, CodeSum, GuessProduct, CodeProduct);
}

int main()
{
    int LevelDifficulty = 0;
    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    return 0;
}
