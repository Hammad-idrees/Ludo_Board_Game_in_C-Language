# Ludo_Board_Game_in_C-Language
Ludo Game in C Language
Overview: Experience the classic Ludo game reimagined in C! This multithreaded version brings the excitement of Ludo to life with dynamic gameplay, including player turns, dice rolls, and token movements—all powered by the power of multithreading. Whether you're playing solo or with friends, this game promises fast-paced action and strategy, as players race to get their tokens home while blocking and hitting opponents!
=========================================================================================================
--> Key Features <--:

Multithreaded Gameplay: Four players each have their own thread to simulate real-time action.

Dynamic Dice Rolls: Every move is driven by a randomized dice roll, adding unpredictability to each turn.

Hit and Block Mechanism: Players can send each other's tokens back to the start by landing on their squares.

Game Master Thread: A centralized thread coordinates the game, ensuring smooth gameplay and synchronization.

How to Play:
Clone the repository and compile the program.

Run the game and let the dice rolls determine your fate.

Use strategy to avoid being sent back and aim for the finish line!
-------------------------------------------------------------------------------------------------------------
Run It Now:
-------------------------------------------------------------------------------------------------------------
$ git clone https://github.com/Hammad-idrees/Ludo_Board_Game_in_C-Language.git

$ cd Ludo_Board_Game_in_C-Language

$ gcc -o ludo_game ludo_game.c -lpthread

$ ./ludo_game

Ready to roll the dice? Play now and become the ultimate Ludo champion! 🎲
