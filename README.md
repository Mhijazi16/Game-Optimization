 AI-GameOptimization


## 📋 Table of Contents

- [🕹️ Introduction](#introduction)
- [🫐 Showcase](#showcase)
- [✨ Features](#features)
- [💻 Installation](#installation)
- [🚀 Usage](#usage)
- [📁 Project Structure](#project-structure)
- [🗺️ Game Levels](#game-levels)
- [🤝 Contributing](#contributing)
- [📜 License](#license)

## 🕹️ Introduction
Welcome to the AI-GameOptimization repository! This project explores the use of optimization algorithms to solve complex games. Currently, it focuses on solving the Sokoban game using Q-learning, with plans to extend to genetic algorithms and other optimization techniques in the future.

## 🫐 Showcase
### Player Mode 

![player](https://github.com/Mhijazi16/AI-GameOptimization/assets/45119497/e6f0fe2b-c7b4-45e5-9a8e-17940b9e5e87)

 
### Training 
![train3](https://github.com/Mhijazi16/AI-GameOptimization/assets/45119497/16a7d4ef-e2b5-40d6-9084-42cedc343de0)


### Solving

![level2](https://github.com/Mhijazi16/AI-GameOptimization/assets/45119497/f7cdd527-8f3c-4fcb-a5c6-7cf49ad687ff)

![level3](https://github.com/Mhijazi16/AI-GameOptimization/assets/45119497/b5a76d57-2a45-4ddf-af95-f262b0083c55)


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
