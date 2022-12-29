#include <stdio.h>

int main()
{
    int king, queen, rook, knight, bishop, pawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &knight, &bishop, &pawn);
    printf("%d %d %d %d %d %d", 1-king, 1-queen, 2-rook, 2-knight, 2-bishop, 8-pawn);
    return 0;

}