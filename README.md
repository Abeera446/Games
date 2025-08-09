# Games

This repository contains a collection of simple console-based games implemented as part of my learning journey in programming.  
Each game is self-contained and can be compiled and run individually.

## Games Included

1. **Dice Competition Game**  
   Two players enter their names, target number, and number of rounds.  
   Dice are rolled randomly, and players earn points when the dice match the target.  
   Final scores and the winner are displayed.

2. **Number Guessing Game**  
   A random number between 1 and 100 is generated.  
   Includes two modes:
   - Limited guesses (6 tries)
   - Unlimited guesses

3. **Sudoku Checker**  
   Prompts the user to enter a completed Sudoku board.  
   Validates whether the solution is correct based on Sudoku rules.

4. **Towers of Hanoi**  
   Recursive solution for moving `n` disks from one rod to another.  
   Shows the step-by-step moves required.

## How to Run

### Compile
```bash
g++ filename.cpp -o game
