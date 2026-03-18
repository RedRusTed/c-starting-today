
#include <stdio.h>

int main(void){
  int c,blank;

  blank = 0;
  while ((c = getchar()) != EOF){
    if (c == ' ' && blank < 1){
      blank++;
      putchar(c);
    }else if (c == ' ' && blank >= 1){
      blank++;
    }else{
      blank = 0;
      putchar(c);
    }
    
  }
}
