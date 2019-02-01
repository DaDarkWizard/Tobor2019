
#include "commands/ComTowerOut.h"

//References the main header file
#include <Robot.h>

ComTowerOut::ComTowerOut() 
{
  Requires(&Robot::towerRock);
}

void ComTowerOut::Initialize() 
{
  Robot::towerRock.TowerOut();
}

void ComTowerOut::Execute() 
{

}

bool ComTowerOut::IsFinished() 
{
  return true; 
}

void ComTowerOut::End() 
{

}

void ComTowerOut::Interrupted() 
{
  End();
}
