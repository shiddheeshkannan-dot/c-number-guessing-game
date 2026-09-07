# 🎯 C Number Guessing Game

A simple number guessing game written in **C**.

The computer generates a random number between **1 and 100**, and the player has to guess it. The program gives hints when the guess is too high or too low.

## 📌 Features

* Generates a random number between 1 and 100
* Takes guesses from the user
* Tells the player if the guess is too high
* Tells the player if the guess is too low
* Continues until the correct number is guessed
* Uses functions to organize the program

## 🛠️ Concepts Used

This project helped me practice:

* `printf()`
* `scanf()`
* Variables
* `if` statements
* `while` loops
* Functions
* Function declarations
* Return values
* Random number generation
* `srand()`
* `rand()`
* `time()`
* `#include` libraries

## 🎮 How It Works

1. The program generates a random number between 1 and 100.
2. The player enters a guess.
3. If the guess is greater than the random number, the program says the guess is too high.
4. If the guess is smaller than the random number, the program says the guess is too low.
5. The player continues guessing until they find the correct number.

## 💻 Example

```text
Enter a guess: 75
You guessed a larger number, try again.
Enter a guess: 50
You guessed a smaller number, try again.
Enter a guess: 63

You guessed the right number! It is 63
```

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/c-number-guessing-game.git
```

### 2. Open the project

```bash
cd c-number-guessing-game
```

### 3. Compile the program

Using GCC:

```bash
gcc main.c -o guessing_game
```

### 4. Run the program

On Windows:

```bash
guessing_game
```

On Linux/macOS:

```bash
./guessing_game
```

## 📂 Project Structure

```text
c-number-guessing-game/
│
├── main.c
├── README.md
├── LICENSE
└── .gitignore
```

## 🚀 Future Improvements

Possible improvements for future versions:

* Add a maximum number of attempts
* Count the number of guesses
* Add difficulty levels
* Add input validation
* Allow the player to play multiple rounds
* Add a score system

## 📚 What I Learned

While creating this project, I practiced using **functions, loops, conditional statements, and random number generation in C**.

This is part of my journey learning C and building programming projects.

---

**Language:** C
**Project Type:** Beginner Console Game
