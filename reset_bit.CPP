# include <stdio.h>

unsigned char pt,&st=pt;
int n;

int cli_bit(unsigned char &value,int &bit) {
  return value=value&~(1<<bit);
}

void main(void) {
  printf("\nEnter the number: ");
  scanf("%i",&pt);
  printf("Which bit do you want to reset : ");
  scanf("%i",&n);

  cli_bit(st,n);
  printf("%i\n",st);
}

