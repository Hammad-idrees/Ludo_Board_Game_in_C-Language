#ifndef GAME_UTILS_H
#define GAME_UTILS_H
#include<semaphore.h>
#include <pthread.h>
#include"player_threads.h"
#include <semaphore.h>
#include<mutex>
#include <condition_variable>
extern char game_grid[15][15];
extern bool gameOver;  // Flag to indicate if the game is over
extern int dice_value;
#define MAX_PLAYERS 4  // Maximum number of players in the game
#define MAX_TOKENS 4   // Maximum number of tokens per player
extern char game_grid[15][15];
extern  void clearScreen();
// Global variables for synchronization
extern std::condition_variable cv;   // Condition variable to signal threads
extern std::mutex mtx;               // Mutex to protect shared data (turn variable)
extern int turn;
extern Player players[MAX_PLAYERS];  // Use 'extern' to declare the global array
// Function declaration
Token& getTokenByCoordinate(int x, int y);
void pressAnyKey();
void displayInactive() ;
// Declare PLAYER_COLORS and RESET as external variables
extern const std::string PLAYER_COLORS[];
extern const std::string RESET;
void inactiveCheck(int symbol, int diceValue,bool kill,Player *&obj);
extern  int ps1;
extern  int ps2;
extern  int ps3;
extern  int ps4;
extern  int maxAllowedNoSix;
extern bool isSafe(int x, int y);
extern void   neutralizer(int symbol);
extern  Player *getPlayer(int symbol);

extern bool p1allowed;
extern bool p2allowed;
extern bool p3allowed;
extern bool p4allowed;
extern  void updateIsAllow(bool status,int symbol);
bool checkIsAllow(char symbol);
bool isHomePosition(int x, int y) ;
// Function declarations
void initializeGrid(Player players[],int numofplayer,int numberoftoken);
void printGrid();
void rollDice();  // New function to roll the dice
#endif // GAME_UTILS_H
