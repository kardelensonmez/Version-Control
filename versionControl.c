#include <stdio.h>
#include <string.h>

int main(void) {
  char first_V[] ="212.21.11.13";
  char second_V[]="212.21.12.13";
  int result = 0;
  result = strcmp(first_V, second_V);
  if(result < 0){
    printf("First input is old version");
  }
  else if(result > 0){
     printf("First input is new version");
  }else{
    printf("Versions are the same");
  }
  return 0;
}