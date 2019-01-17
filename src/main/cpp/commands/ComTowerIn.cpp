
#include "commands/ComTowerIn.h"

ComTowerIn::ComTowerIn() 
{
  // eg. Requires(Robot::chassis.get());
}

void ComTowerIn::Initialize() 
{
  &Robot::towerRock->TowerIn();
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
