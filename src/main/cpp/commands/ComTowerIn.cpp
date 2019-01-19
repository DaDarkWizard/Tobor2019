
#include "commands/ComTowerIn.h"

#include <Robot.h>

ComTowerIn::ComTowerIn() 
{
  Requires(&Robot::towerRock);
}

void ComTowerIn::Initialize() 
{
  Robot::towerRock.TowerIn();
}

void ComTowerIn::Execute() 
{

}

bool ComTowerIn::IsFinished() 
{
  return true; 
}

void ComTowerIn::End() 
{

}

void ComTowerIn::Interrupted() 
{
  End();
}
