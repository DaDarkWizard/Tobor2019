
#include "commands/ComTowerOut.h"

ComTowerOut::ComTowerOut() 
{
  // eg. Requires(Robot::chassis.get());
}

void ComTowerOut::Initialize() 
{
  &Robot::towerRock->TowerOut();
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
