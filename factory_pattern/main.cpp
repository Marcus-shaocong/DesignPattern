#include <iostream>
#include <map>
#include <string>
#include "AnimalFactory.h"
#include "IAnimal.h"
#include "Animals.h"
using namespace std;

int main( int argc, char **argv )
{
  IAnimal *pAnimal = NULL;
  string animalName;

  while( pAnimal == NULL )
  {
    cout << "Type the name of an animal or 'q' to quit:"; 
    cin >> animalName;

    if( animalName == "q" )
      break;

    IAnimal *pAnimal = AnimalFactory::Get()->CreateAnimal(animalName);
    if( pAnimal )
    {
      cout << "Your animal has " << pAnimal->GetNumberOfLegs() << "legs." << endl;
      cout << "Your animal says:"; 
      pAnimal->Speak();
    }
    else
    {
      cout << "That animal doesn't exist in the farm! Choose another!"<< endl;
    }
    if( pAnimal )
      pAnimal->Free();
    pAnimal = NULL;
    animalName.clear();
  }
  return 0;
}
