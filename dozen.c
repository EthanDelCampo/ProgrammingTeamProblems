#include <stdio.h>

//Problem 1 in 2024 qualifying round
int main(){

    int numApples;
    int numBags;
    int costPerDozen;
    scanf("%d %d", &numApples, &numBags);
    scanf("%d", &costPerDozen);

    int totalNumOfApples = numApples * numBags;

    int result = ((totalNumOfApples + 11) / 12) * costPerDozen;

    printf("%d\n", result);

    return 0;
}