#include "operations.h" // Include the header file for operation-related declarations
#include "game.h"       // Include the header file for game-related function declarations

// Function to handle user operations, providing a menu for various game-related actions.
void operations()
{
    int highScore = 0; // Variable to store the high score of the game
    int choice;        // Variable to store the user's menu choice

    std::cout << "Welcome to the Multiplication Learning Game!" << std::endl;

    // Loop to display the menu and process user choices until the user chooses to exit (choice 4)
    while (choice != 4)
    {
        // Display the main menu options
        std::cout << "1. Start Game" << std::endl;
        std::cout << "2. Help" << std::endl;
        std::cout << "3. Show High Score" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Please choose an option (1-4): ";
        std::cin >> choice;

        // Process the user's choice using a switch statement
        switch (choice)
        {
        case 1:
            // Start the game and update the high score if the current score is higher
            highScore = std::max(highScore, startGame());
            break;
        case 2:
            // Display the help/instructions for the game
            showHelp();
            break;
        case 3:
            // Show the current high score
            showHighScore(highScore);
            break;
        case 4:
            // Exit the game with a goodbye message
            std::cout << "Thanks for playing! Goodbye!" << std::endl;
            break;
        default:
            // Handle invalid menu choices
            std::cout << "Invalid choice. Please choose a valid option." << std::endl;
            break;
        }
    }

    return; // End of the operations function
}