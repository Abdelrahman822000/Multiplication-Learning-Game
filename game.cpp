#include "game.h"

// Displays the game instructions to the user
void showHelp()
{
    std::cout << "Game Instructions:" << std::endl;
    std::cout << "This game is a multiplication learning tool." << std::endl;
    std::cout << "You will be asked multiplication questions (e.g., 3 X 4)." << std::endl;
    std::cout << "Answer the questions correctly to score points." << std::endl;
    std::cout << "If you answer 3 questions correctly in a row, the difficulty increases." << std::endl;
    std::cout << "If you answer 3 questions wrong in a row, the game ends." << std::endl;
    std::cout << "The game ends after 20 questions or if you make 3 wrong answers in a row." << std::endl;
    std::cout << std::endl; // Print a blank line for spacing
}

// Displays the current high score
void showHighScore(int highScore)
{
    std::cout << "High Score: " << highScore << std::endl;
}

// Starts the game, returns the player's final score
int startGame()
{
    std::string playerName;     // Stores the player's name
    int successive_correct = 0; // Counter for successive correct answers
    int successive_wrong = 0;   // Counter for successive wrong answers
    int score = 0;              // Player's score
    int difficulty = 1;         // Initial difficulty level

    std::cout << "Enter your name: "; // Prompt for player's name
    std::cin >> playerName;

    std::srand(std::time(0)); // Seed the random number generator for random question generation

    // Loop for 20 questions or until the game ends
    for (int i = 0; i < 20; i++)
    {
        // Generate two random numbers based on the current difficulty level
        int num1 = rand() % 40 + 40 * (difficulty - 1) + 1;
        int num2 = rand() % 40 + 40 * (difficulty - 1) + 1;

        int answer;                       // Variable to store the player's answer
        int correct_answer = num1 * num2; // Calculate the correct answer

        // Loop until a valid number is entered
        while (true)
        {
            std::cout << "How much is " << num1 << " X " << num2 << "? ";
            std::cin >> answer;

            // Check if the input is a valid number
            if (std::cin.fail())
            {
                std::cin.clear();                                                   // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a valid number." << std::endl;
            }
            else
            {
                break; // Valid input, exit the loop
            }
        }

        // Check if the player's answer is correct
        if (answer == correct_answer)
        {
            std::cout << "Correct answer." << std::endl;
            successive_correct++;     // Increment the correct answer counter
            successive_wrong = 0;     // Reset the wrong answer counter
            score += 10 * difficulty; // Increase score based on difficulty

            // Increase difficulty if 3 correct answers in a row
            if (successive_correct == 3)
            {
                difficulty++;
                successive_correct = 0; // Reset the correct answer counter
                if (i != 19)
                {
                    std::cout << "Great job! The difficulty level has increased." << std::endl;
                }
            }
        }
        else
        {
            std::cout << "Wrong answer." << std::endl;
            successive_correct = 0; // Reset the correct answer counter
            successive_wrong++;     // Increment the wrong answer counter

            // End game if 3 wrong answers in a row
            if (successive_wrong == 3)
            {
                std::cout << "Game Over. You've made 3 successive wrong answers." << std::endl;
                std::cout << "Please ask your teacher for extra help." << std::endl;
                break;
            }
        }
    }

    std::cout << "Your score: " << score << std::endl; // Display the player's final score
    return score;
}