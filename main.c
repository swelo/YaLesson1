 #include <stdio.h>
 #include <stdlib.h>
   #include <string.h>

   int main(void) {

char word[50];
char end;
char x;

printf("Telling it backwards\n: ");

scanf("%s", word);

end = strlen(word) - 1;

for (x = end; x >= 0; --x) {
    printf("%c", word[x]);
}
printf("---------------------");

return 0;
   }


// Word är hur lång text man kan skriva. X är där man sparar texten som man skrev.