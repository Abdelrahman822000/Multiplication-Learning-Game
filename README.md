**This Project was developed by Abdelrahman Mohamed Hamad**

# Multiplication Learning Game

A console-based application designed to help users practice multiplication skills through interactive gameplay.

## Table of Contents
- [Project Description](#project-description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)
- [Contact](#contact)

## Project Description

The Multiplication Learning Game is a C++ console application designed to help users improve their multiplication skills. The game asks users multiplication questions, tracks their score, and adjusts the difficulty based on their performance. The game continues until the user opts to exit, or if they answer 3 questions incorrectly in a row.

## Features

- **Start Game:** Play the game and answer multiplication questions.
- **Help:** View instructions on how to play the game.
- **Show High Score:** Display the highest score achieved.
- **Exit:** Exit the game.

## Installation

### Prerequisites

- C++ Compiler (e.g., GCC, Clang, MSVC)

### Steps

1. **Clone the repository:**
    ```bash
    git clone https://github.com/your-username/Multiplication-Learning-Game.git
    cd Multiplication-Learning-Game
    ```

2. **Build the project:**
    ```bash
    g++ main.cpp operations.cpp game.cpp -o MultiplicationGame
    ```

3. **Run the Program:**
    ```bash
    ./MultiplicationGame
    ```

## Usage

### Running the Application

1. **Start the Application:**
    - After running the `MultiplicationGame` executable, follow the on-screen instructions to play the game, view help, check the high score, or exit.

2. **Menu Options:**
    - **Start Game:** Begin playing the multiplication game and answer questions to score points.
    - **Help:** View instructions on how to play the game.
    - **Show High Score:** See the highest score achieved in previous games.
    - **Exit:** Exit the game and end the session.

### Example Output

```
Welcome to the Multiplication Learning Game!
1. Start Game
2. Help
3. Show High Score
4. Exit
Please choose an option (1-4): 2
Game Instructions:
This game is a multiplication learning tool.
You will be asked multiplication questions (e.g., 3 X 4).
Answer the questions correctly to score points.
If you answer 3 questions correctly in a row, the difficulty increases.
If you answer 3 questions wrong in a row, the game ends.
The game ends after 20 questions or if you make 3 wrong answers in a row.

1. Start Game
2. Help
3. Show High Score
4. Exit
Please choose an option (1-4): 1
Enter your name: Abdelrahman
How much is 37 X 33? 1221
Correct answer.
How much is 1 X 32? 32
Correct answer.
How much is 28 X 8? 224
Correct answer.
Great job! The difficulty level has increased.
How much is 50 X 62? 3100
Correct answer.
How much is 47 X 44? 900
Wrong answer.
How much is 68 X 50? 900
Wrong answer.
How much is 64 X 71? 890
Wrong answer.
Game Over. You've made 3 successive wrong answers.
Please ask your teacher for extra help.
Your score: 50
1. Start Game
2. Help
3. Show High Score
4. Exit
Please choose an option (1-4): 3
High Score: 50
1. Start Game
2. Help
3. Show High Score
4. Exit
Please choose an option (1-4): 4
Thanks for playing! Goodbye!
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions, feel free to contact me:
- **Phone:** +201028325749
- **Email:** a.mohamed822000@gmail.com
- **LinkedIn:** [Abdelrahman Mohamed Hamad](https://www.linkedin.com/in/abdelrahman-mohamed-a1956b247/)