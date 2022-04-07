/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Rj                                                        */
/*    Created:      Sat Mar 7 2020                                            */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "gifclass.h"

using namespace vex;

//IMPORTANT
//put your gif on the root of your sd card

vex::brain       Brain;
int main() {
  int count = 0;
  
  //use for 240x240 vidoes
  vex::Gif gif("gif.gif", 120, 0 );

  //use for fullscreen 330x240
  //vex::Gif gif("gif.gif", 80, 0 );

  while(time) {
    Brain.Screen.printAt( 5, 230, "render %d", count++ );
    Brain.Screen.render();
  }
  
}