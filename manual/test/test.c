#include <stdio.h>
#include "myclib.h"

int main (){
  printf("Avant init : %d\n", init_done());
  fflush(stdout);

  init_mylib();

  printf("Après init : %d\n", init_done());
  fflush(stdout);

  int s = do_add(5, 7);
  printf("Somme : 5 + 7 = %d\n", s);
  fflush(stdout);

  s = do_substract(5, 7);
  printf("Soustraction : 5 - 7 = %d\n", s);
  fflush(stdout);

  return 0;
}
