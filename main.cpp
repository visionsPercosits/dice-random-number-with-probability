#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  srand((unsigned) time(NULL));

  int random = rand() % 10;

  cout << "Random Number: " << random << endl;
}