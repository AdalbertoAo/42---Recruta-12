#include <unistd.h>

void ft_ft(int *nbr){
  int n = *nbr;
  char dez;
  char unid;

 
   dez = (n/10) + '0';
   unid = (n%10) + '0';
  write(1, &dez, 1);
  write(1, &unid, 1);
}

int main (){
  int n = 42;
  ft_ft(&n);
  return 0;
}