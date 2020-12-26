#include "random.hpp"

// rand() 's RAND_MAX is defined in stdlib.h , value is INT_MAX
int Random::nextInt(int min, int max)
{
  srand((unsigned)time(0));
  int n = rand()%(max-min)+min;
  return n;
}


char Random::nextAlphabet()
{
  int charNum = nextInt(65,97+25);
  while( charNum>=91 && charNum <=96) {
	charNum = nextInt(65,97+25);
  }
  char ch = static_cast<char>(charNum);
  return ch;
}

double Random::nextDouble()
{
  srand((unsigned)time(0));
  int n =rand()%1000;
  double dnum = static_cast<double>(1) / static_cast<double>(n);

  return dnum;
}



