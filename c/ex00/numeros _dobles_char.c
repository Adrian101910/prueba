#include <unistd.h>
int main(void){
    int n1 = 0;
    int n2 = 0;

    while ( n1 <= 99 ){
        while (n2 <= 99)
        {   
            char n1_1 = (n1 / 10) + '0';
            char n1_2 = (n1 % 10) + '0';
            write(1,&n1_1,1);
            write(1,&n1_2,1);
            write(1," ",1);
            char n2_1 = (n2 / 10) + '0';
            char n2_2 = (n2 % 10) + '0';
            write(1,&n2_1,1);
            write(1,&n2_2,1);
            write(1,", ",1);
            n2++;
        }
        n1++;
                n2 = n1 + 1; 

    }
    return 0;
}