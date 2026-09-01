# Guess the Number Game

A simple command-line number guessing game written in **C**.

The computer randomly selects a number, and your goal is to guess it. After each guess, the program tells you whether your guess is **too high** or **too low** until you find the correct number.

## Features

* Generates a random number.
* Accepts guesses from the player.
* Provides hints after each guess.
* Continues until the correct number is guessed.
* Runs directly in the terminal.

## Requirements

* A C compiler such as **GCC**
* A terminal or command prompt

## How to Compile and Run

Clone the repository and navigate into the project directory.

Compile the program using GCC:

```bash
gcc main.c -o main
```

Run the game:

```bash
./main
```

### On Windows

If you're using Windows, run:

```bash
main.exe
```

## How to Play

1. Start the program.
2. The computer generates a random number.
3. Enter your guess when prompted.
4. The program will tell you if your guess is:

   * **Too high**
   * **Too low**
   * **Correct**
5. Keep guessing until you find the number.

## Example

```text
Guess the number: 50

Too high! Try again.

Guess the number: 25

Too low! Try again.

Guess the number: 37

Congratulations! You guessed the number.
```

## Project Structure

```text
.
├── main.c
└── README.md
```

## License

This project is open source and available for learning and personal use.
