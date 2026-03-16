#include <stdio.h>

int main(){
  int c;
  int newLine = 0;
  int tab = 0;
  int blank = 0;

  while ((c = getchar()) != EOF){
    if ( c == '\n'){
      newLine++;
    }else if (c == '\t'){
      tab++;
    }else if ( c == ' '){
      blank++;
    }

  }

  printf("Number of new lines = %d\nNumber of tans = %d\nNumber of blanks = %d\n",newLine,tab,blank);
  return 0;
}
