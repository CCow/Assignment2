#include "GameOfLife.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <cstdlib>

using namespace std;

GameOfLife::GameOfLife(){
  mapRow = 0;
  mapCol = 0;
  density = 0;
}

GameOfLife::~GameOfLife(){
  //
}

void GameOfLife::createRanMap(int r, int c, float density){
  mapRow = r;
  mapCol = c;
  mapDen = density;

  nextMap = new char*[mapRow]; //creates grid and first array in 2-D array is row

  for(int x = 0; x < mapRow; ++x){
    nextMap[x] = new char[mapCol];
    for(int y = 0; y < mapCol; ++y){
      nextMap[x][y] = '-';
    }
  }
  pop = ((mapRow * mapCol)*mapDen); //pop = population percentage of the starting map

  for(int x = 0; x < (pop); ++x){
    ranRow = rand() % mapRow; //random row selected 0 -- # of rows - 1 (theoretically)
    ranCol = rand() % mapCol; //random column selected 0 -- # of columns - 1
    if(nextMap[ranRow][ranCol] != 'X'){
      nextMap[ranRow][ranCol] = 'X';
    }
  }
}

void GameOfLife::createReadMap(string inputMap){
  string line;

  ifstream inputRead;

  inputRead.open(inputMap);
  inputRead.close();

  //file was never read at any point during my attempt
  //lost cause
}

string GameOfLife::returnMap(){
  string line = "";
  for(int x = 0; x < mapCol; ++x){
    for(int y = 0; y < mapRow; ++y){
          line = line + nextMap[x][y] + " ";
    }
    line += "\n";
  }
  return line;
}

void GameOfLife::equals(string currBac, string nextBac){
  if (currBac.compare(nextBac)){

  }
  else{
    cout<<"SYSTEM FAILURE";
  }
}
