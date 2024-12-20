# Tic Tac Toe

This is a simple command-line Tic Tac Toe game implemented in C++.

## Features
- Two-player mode
- Interactive gameplay through the command line
- Error handling for invalid moves
- Displays the game board after each turn

## Requirements
- A C++ compiler such as `g++`

## How to Run
1. Make sure you have `g++` installed. If not, install it using your package manager:
   - For Ubuntu/Debian: `sudo apt install g++`
   - For Windows: Install [MinGW](https://sourceforge.net/projects/mingw/) or use WSL.
   - For Mac: Install via Homebrew with `brew install g++`.

2. Clone or download this repository.

3. Open a terminal in the project directory and compile the project with:
   ```bash
   g++ cpp_project.cpp
   ```

4. Run the compiled program:
   ```bash
   ./a
   ```

## Gameplay Instructions
1. The game is played on a 3x3 grid.
2. Players take turns entering their moves. Enter the row and column numbers (1-3) to place your symbol (X or O).
3. The game ends when a player wins or when all cells are filled.

## Example
```text
Player X, enter your move (row and column): 1 1
 X |   |  
-----------
   |   |  
-----------
   |   |  
```

## File Structure
```
.
├── cpp_project.cpp    # Main source code
├── README.md          # Project description and instructions
```

## Future Enhancements
- Add an AI player
- Support for larger grids
- Enhanced user interface

## License
This project is open-source and available under the [MIT License](LICENSE).
