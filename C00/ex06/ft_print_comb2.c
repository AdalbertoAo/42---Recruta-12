#include <unistd.h>

void printN(int n)
{
    char c;
    if (n < 10){
        c = n +'0';
        write(1, "0", 1);
        write(1, &c, 1);
        return ;
    }
    c = (n / 10) + '0';
    write(1, &c, 1);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void ft_ptint_comb2(void){
    // xx,yy
    short v[2];

    v[0] = 0;

    while (v[0] < 99){
        v[1] = v[0] + 1;
        while (v[1] < 100)
        {
                printN(v[0]);
                write(1, " ", 1);
                printN(v[1]);

                if (v[0] == 98 && v[1] == 99){
                    write(1, ".\n", 2);
                }else write(1, ", ", 2);
                  v[1] ++;
            }
         v[0] ++;
        }
 
    }

int main(void)
{
    ft_ptint_comb2();
    return 0;
}