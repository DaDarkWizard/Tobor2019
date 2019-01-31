
//References the header file for this command to be used here
#include "commands/ComTowerIn.h"

#include <Robot.h>

//Sets up the function ComTowerIn()
ComTowerIn::ComTowerIn() 
{
  //Makes the function ComTowerIn() need the variable towerRock to be used
  Requires(&Robot::towerRock);
}

//Sets up the function that runs when the command is initialized
void ComTowerIn::Initialize() 
{
  //Makes the initializer function pull the tower back
  Robot::towerRock.TowerIn();
}

//Sets up the function that is executed when this command is run
void ComTowerIn::Execute() 
{

}

//Sets up the function that runs when the commands execute function is completed
bool ComTowerIn::IsFinished() 
{
  //Sets it so the funtion returns data
  return true; 
}

//Sets up the function that runs when the command ends
void ComTowerIn::End() 
{

}

//Sets up the function that runs is the command is interrupted
void ComTowerIn::Interrupted() 
{
  //Runs function End()
  End();
}
