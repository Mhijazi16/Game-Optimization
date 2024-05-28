🕹️ AI-GameOptimization
Welcome to the AI-GameOptimization repository! This project explores the use of various optimization algorithms to solve complex games. Currently, it focuses on solving the Sokoban game using Q-learning, with plans to extend to genetic algorithms and other optimization techniques in the future.

## 📋 Table of Contents

- [🔍 Introduction](#introduction)
- [🫐 Showcase](#showcase)
- [✨ Features](#features)
- [💻 Installation](#installation)
- [🚀 Usage](#usage)
- [📁 Project Structure](#project-structure)
- [🗺️ Game Levels](#game-levels)
- [🤝 Contributing](#contributing)
- [📜 License](#license)

## 🔍 Introduction
This repository contains code to solve the Sokoban game using the Q-learning algorithm. Sokoban is a classic puzzle game where the player pushes boxes to designated storage locations. The goal is to develop AI agents that can efficiently solve these puzzles using reinforcement learning and other optimization techniques.

## 🫐 Showcase


## ✨ Features
Q-Learning Implementation: An AI agent that learns to solve Sokoban puzzles through reinforcement learning.
State Management: Efficient representation and management of game states.
Deadlock Detection: Mechanisms to detect and avoid deadlocks in the game.
Training and Evaluation: Tools to train the AI agent and evaluate its performance.

## 💻 Installation
To get started, clone the repository and compile the code using a C++ compiler.

```bash
git clone https://github.com/Mhijazi16/AI-GameOptimization.git
cd AI-GameOptimization
```

Make sure you have a C++ compiler installed. You can use g++ for compilation:

```bash
g++ -o game main.cpp
```

## 🚀 Usage
Initialize the Game:
Run the compiled executable to start the game.

```bash 
./game
```

Select Level:
Enter the level number you wish to play when prompted.

Train the AI:
Enter the number of episodes to train the AI agent.

Solve the Game:
The AI agent will attempt to solve the game using the trained Q-table. Follow the prompts to see the AI's progress.

## 📁 Project Structure
main.cpp: The main entry point for the application.
Point.h: Defines the Point structure and related operations.
Context.h: Contains constants and configurations for the game.
State.h: Defines the State structure and methods for managing game states.
Helper.h: Includes helper functions for initializing the game, applying moves, generating child states, and implementing the Q-learning algorithm.

## 🗺️ Game Levels
```
Level 1
Episodes to solve : 5
🪵🪵🪵🪵🪵🪵
🪵        🪵
🪵        🪵
🪵      🧺🪵
🪵🪵🪵🪵  🪵
🪵🍗      🪵
🪵🧺      🪵
🪵      🍗🪵
🪵🪵🪵🪵🪵🪵
```
```
Level 2
Episodes to solve : 40
⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺
⛺              🎪    🎪    ⛺
⛺          🫙     🍖 🎪    ⛺
⛺  🫙🎪        🎪    🎪    ⛺
⛺  🍖🎪        🎪          ⛺
⛺    🎪              🫙    ⛺
⛺    🎪        🎪    🎪  🍖⛺
⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺⛺
```
```
Level 3
Episodes to solve : 110
                  🗿🗿🗿        
🗿🗿🗿🗿🗿🗿    🗿🗿  🗿🗿🗿🗿🗿
🗿        🗿🗿🗿🗿          🥩🗿
🗿    🛒  🥩          🗿🗿🗿🗿🗿
🗿  🗿    🗿🗿🗿    🛒🗿        
🗿  🗿🗿  🗿  🗿      🗿        
🗿🛒      🗿🗿🗿      🗿🗿🗿    
🗿🥩          🛒        🥩🗿    
🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿   
```
## 🤝 Contributing
Contributions are welcome! If you have suggestions for improvements or new features, please create an issue or submit a pull request. Follow these steps to contribute:

Fork the repository.
Create a new branch (git checkout -b feature-branch).
Make your changes.
Commit your changes (git commit -m 'Add some feature').
Push to the branch (git push origin feature-branch).
Open a pull request.
