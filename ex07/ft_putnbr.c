#include <unistd.h>

void ft_putnbr(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }

    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }
    // Recursão
    if (n >= 10) {
        ft_putnbr(n / 10);
    }

    char c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(){
  ft_putnbr(42);
  return 0;
}