# include <stdio.h>

int main(){
  
  int num1 = 12;
  int num2 = 4;
  char op ='+';

  switch (op) {

    case '+':
       printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
    case '-':
     printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
    case '*':
      printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
    
    
  }
}

