/* Program konwertujący liczbę w systemie dziesiętnym na liczbę w systemie
ósemkowym i szesnastkowym */
#include <stdio.h>
int main(void)
{
    int dec;
    
    printf("Podaj liczbę w systemie dziesiętnym: ");
    scanf("%d", &dec);
    printf("\ndziesiętny: %d\nósemkowy: %o lub %#o\nszesnastkowy: %x lub %#x\n", dec, dec, dec, dec, dec);
    
    return 0;
}