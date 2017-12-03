# include <stdio.h>

unsigned char pt,st;
int i;

int get_bit(unsigned char* value,unsigned char* ch,int* bit) {
  return *ch=(*value>>*bit)&1;
}

void main(void) {
  printf("\nEnter the number: ");
  scanf("%i",&pt);
  st=0;
  for(i=7;i>=0;i--) {
    get_bit(&pt,&st,&i);
    printf("%i",st);
  }
}

