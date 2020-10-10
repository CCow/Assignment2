#include "GameOfLife.h"
//#include "Classic.h"

/**
*#include "donut.h"
*#include "mirror.h"
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv){
  GameOfLife *gOL = new GameOfLife();
  /**
  *Classic *classic = new Classic();
  *mirror *mirror = new mirror();
  *donut *donut = new donut();
  */

  //integers
  int controller = 1; //controlls user inputs processes through simulation;
  int tempRow; //used to navigate the rows of the map at any point in the main
  int tempCol; //used to navigate the columns in the map at any point in the main
  int counter = 0; //

  //floats
  float tempDen; //temporary density float

  //chars
  char input;

  string output;
  string inputMap;

  ofstream out;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Game Of Life ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "\nDo you wish to provide a map file(f) or generate a random map(r): ";
  cin >> input; //cplusplus.com basic Input/Output

  while(controller == 1){
    //reading a txt file to find
    if(input == 'f' || input == 'F'){
      cout << "Enter input text file path to be read: ";
      cin >> inputMap;

      gOL->createReadMap(inputMap);
      cout << "User Provided Map: \n"+ gOL->returnMap() << endl;

      controller++;
    }

    //generating a random grid given height/width
    else if(input == 'r' || input == 'R'){
      cout << "Enter the amount of rows you want: ";
      cin >> tempRow;
      cout << "Enter the amount of columns you want: ";
      cin >> tempCol;
      cout << "Enter the population density you want(between 0.0-1.0): ";
      cin >> tempDen;

      gOL->createRanMap(tempRow, tempCol, tempDen);
      cout << "Original Map:\n" + gOL->returnMap() << endl;
      //
      controller++;
    }
    else{
      cout << "INVALID INPUT: Enter (f) or (r): ";
      cin >> input;
      continue;
    }
  }

  //Gammode selction, will call each class depending on which input is determined
  cout << "\nc) Classic \nm) Mirror \nd) Donut \nSelect Gamemode: ";
  cin >> input;
  while(controller == 2){

    if(input == 'c' | input == 'C'){
      //classic->;

      controller++;

    }
    else if(input == 'm' | input == 'M'){
      //mirror-> ;

    }
    else if(input == 'd' | input == 'D'){
      //donut-> ;
    }
  }

  while(controller == 3){
    cout << "Would you like a brief pause between generations (p), \nPress enter after every generation (e)\nOutput to a file (o)\n Enter here: ";
    cin >> input;

  }
  delete gOL;
  return 0;
}
