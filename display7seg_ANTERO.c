#include <stdio.h>
/*
HEXADECIMAIS DOS NUMEROS
0 - 0000000
1 - 0000001
2 - 0000010
3 - 0000011
4 - 0000100
5 - 0000101
6 - 0000110
7 - 0000111
8 - 0001000
9 - 0001001


SAIDAS
0 - 0111111
1 - 0000011
2 - 1011011
3 - 1001111
4 - 1100110
5 - 1101101
6 - 1111101
7 - 1000111
8 - 1111111
9 - 1101111
*/

int main(){
    int i;
char a;
char num, saida[7];
printf("insira o numero\n");
scanf("%d",&num);
printf("\n");
//operações logicas
saida[0] =(num&8)||((num&4)&&(~num&2))||((~num&4)&&(num&2))||((num&2)&&(~num&1));
saida[1] =(num&8)||((~num&2)&&(~num&1))||((num&4)&&(~num&2))||((num&4)&&(~num&1));
saida[2] =((~num&4)&&(~num&1))||((num&2)&&(~num&1));
saida[3] = ((~num&4)&&(~num&1))||((num&2)&&(~num&1))||((num&4)&&(~num&2)&&(num&1))||((~num&4)&&(num&2))||(num&8);//posso ter errado
saida[4] = (((num&1))||(num&4)||(~num&2));
saida[5] = ((~num&2)&&(~num&1))||((num&2)&&(num&1))||(~num&4);
saida[6] = (num&2)||(num&8)||((~num&4)&&(~num&1))||((num&4)&&(num&1));
for(i = 0;i<7;i++) printf("%d",saida[i]);

return 0;
}
