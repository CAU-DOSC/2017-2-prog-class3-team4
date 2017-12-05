#include "Project_Header.h"

int Generate_d(void) {
  srand((unsigned)time(NULL));
  int d = 0;
  if (rand()%2)
      d = 0;
  else
      d = -1;
  return d;
}

int Generate_n(int length) {
  srand((unsigned)time(NULL));
  return rand() % length;
}

char *Generate_array(int length) {
  srand((unsigned)time(NULL));
  char* array = (int*)malloc((sizeof(char))*length);
  for (int i = 0; i < length; i++)
    array[i] = rand()%94 + 33
  return array;
}
