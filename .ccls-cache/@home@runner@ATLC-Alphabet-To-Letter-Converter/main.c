#include <stdio.h>
#include <ctype.h>

// A is ARRAY   
int main(void) {
  char ABC_A[26] = { 

'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'

};
  int N_A[26] = {
    1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
  ,
    16,17,18,19,20,21,22,23,24,25,26
  };

  char buf;
  printf("Enter Letter: \n");
  scanf("%c", &buf);
  buf = toupper(buf);

  switch(buf) {
    case 'A':
      printf("____\n");
      printf("= %d\n", N_A[0]);
    break;
    case 'B':
      printf("____\n");
      printf("= %d\n", N_A[1]);
    break;
    case 'C':
        printf("____\n");
        printf("= %d\n", N_A[2]);
    break;
    case 'D':
      printf("____\n");
      printf("= %d\n", N_A[3]);
    break;
    case 'E':
      printf("____\n");
      printf("= %d\n", N_A[4]);
    case 'F':
      printf("____\n");
      printf("= %d\n", N_A[5]);
    break;
    case 'G':
      printf("____\n");
      printf("= %d\n", N_A[6]);
    break;
    case 'H':
      printf("____\n");
      printf("= %d\n", N_A[7]);
    break;
    case 'I':
      printf("____\n");
      printf("= %d\n", N_A[8]);
    break;
    case 'J':
      printf("____\n");
      printf("= %d\n", N_A[9]);
    break;
    case 'K':
      printf("____\n");
      printf("= %d\n", N_A[10]);
    break;
    case 'L':
      printf("____\n");
      printf("= %d\n", N_A[11]);
    break;
    case 'M':
      printf("____\n");
      printf("= %d\n", N_A[12]);
    break;
    case 'N':
      printf("____\n");
      printf("= %d\n", N_A[13]);
    break;
    case 'O':
      printf("____\n");
      printf("= %d\n", N_A[14]);
    break;
    case 'P':
      printf("____\n");
      printf("= %d\n", N_A[15]);
    break;
    case 'Q':
      printf("____\n");
      printf("= %d\n", N_A[16]);
    break;
    case 'R':
      printf("____\n");
      printf("= %d\n", N_A[17]);
    break;
    case 'S':
      printf("____\n");
      printf("= %d\n", N_A[18]);
    break;
    case 'T':
      printf("____\n");
      printf("= %d\n", N_A[19]);
    break;
    case 'U':
      printf("____\n");
      printf("= %d\n", N_A[20]);
    break;
    case 'V':
      printf("____\n");
      printf("= %d\n", N_A[21]);
    break;
    case 'W':
      printf("____\n");
      printf("= %d\n", N_A[22]);
    break;
    case 'X':
      printf("____\n");
      printf("= %d\n", N_A[23]);
    break;
    case 'Y':
      printf("____\n");
      printf("= %d\n", N_A[24]);
    break;
    case 'Z':
      printf("____\n");
      printf("= %d\n", N_A[25]);
    break;
  }
  return 0;
}