## Tic-Tac-Toe Game in C++

### Description

This project is a console-based implementation of the classic Tic-Tac-Toe game, developed in C++. It features a simple user interface and allows two players to play the game alternately. The game keeps track of the player's moves, checks for win conditions after every move, and declares the winner or if the game is a tie. 

### Features

- **Simple User Interface**: Easy-to-use interface for a smooth game experience.
- **Turn-Based Gameplay**: Allows two players to play the game alternately.
- **Win/Tie Detection**: Automatically checks for win conditions or a tie after every move.
- **Input Validation**: Ensures players cannot place their mark on an already occupied spot.
- **Colorful Output**: Uses colored text to enhance the visual experience.

### How to Play

1. **Start the Game**: Run the executable file to start the game.
2. **Player Input**: Players take turns to enter the position (1-9) where they want to place their mark.
3. **Game Progress**: The game board updates after each turn, showing the current state.
4. **Winning the Game**: The first player to align three marks horizontally, vertically, or diagonally wins the game.
5. **Tie Game**: If all spots are filled and no player has aligned three marks, the game ends in a tie.

### Code Structure

- **main()**: Initializes the game, manages player turns, and controls the game flow.
- **board()**: Initializes the game board.
- **printboard()**: Displays the current state of the game board.
- **userinput()**: Handles player input and updates the game board.
- **checkgame()**: Checks the game board for win conditions or a tie after each turn.
- **clear_line()**: Utility function to clear lines in the console for better readability.

### Sample Output

```
TIC TAC TOE

  X | O | X
-------------
  O | X |  
-------------
    | O | X

Player 'X' Won the GAME
```

### Installation and Execution

1. **Clone the Repository**: `git clone https://github.com/yourusername/tic-tac-toe.git`
2. **Navigate to the Directory**: `cd tic-tac-toe`
3. **Compile the Code**: `g++ tic-tac-toe.cpp -o tic-tac-toe`
4. **Run the Game**: `./tic-tac-toe`

### Requirements

- C++ Compiler (e.g., GCC, MinGW)
- Windows OS (for `windows.h` header functionality)

### Contribution

Feel free to contribute by creating issues, submitting pull requests, or suggesting improvements to enhance the game's functionality and user experience.

### License

This project is licensed under the MIT License. See the LICENSE file for more details.
