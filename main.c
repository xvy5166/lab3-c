// Author: Yanling Wang yuw17@psu.edu
// Collaborator: Aravind Hariprased azh5899@psu.edu
// Collaborator:Krish Choudhary ksc5496@psu.edu
// Collaborator: Peter Schulman pks5481@psu.edu
// Section: 4
// Breakout: 6



#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if(n== 0){
    return 0;
  }
  else{
    return n+sum_n(n-1);
  }
    
}
  
void print_n(const char *s, int n){
  if (n>0){
    printf("%s\n",s);
    print_n(s, n-1);
  }
}
    
int main(void) {
  int i = atof(readline("Enter an int: "));
  int number = sum_n(i);
  printf("sum is %d.\n",number);
  char *string = readline("Enter a string: ");
  print_n(string, i);
  return 0;
 
}