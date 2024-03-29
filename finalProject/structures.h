/* 
 * Filename: structures.h
 *
 * Part of: C335 Final Project
 * Created: 12.7.14
 * Last-Updated: Erin Leonhard (eeleonha) &
 *           By: Zhongren Shao (shaoz)
 *           On: 12.7.14
 */

/* Code: */

#define LEFT 0
#define RIGHT 1

typedef struct dude {
  int x;
  int y;
  int direction;
  int screenPos;
  short hasBlock = 0;
} Dude;

typedef struct level {
  int startPos;
  int doorPos;
  int blocks[10];
  int numBlocks;
  int cols[25];
  int numCols;
} Level;

typedef struct state {
  int left;
  short bgColor;
  short brickColor;
  short blockColor;
  short doorColor;
  short dudeColor;
  short capColor;
} State;


Dude makeNewPlayer(int x, int y, int direction);
State defaultState();
Level initLevel();
