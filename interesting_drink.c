/*

B. Interesting drink
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasiliy likes to rest after a hard work, so you may often meet him in some bar nearby. As all programmers do, he loves the famous drink "Beecola", which can be bought in n different shops in the city. It's known that the price of one bottle in the shop i is equal to xi coins.

Vasiliy plans to buy his favorite drink for q consecutive days. He knows, that on the i-th day he will be able to spent mi coins. Now, for each of the days he want to know in how many different shops he can buy a bottle of "Beecola".

Input
The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of shops in the city that sell Vasiliy's favourite drink.

The second line contains n integers xi (1 ≤ xi ≤ 100 000) — prices of the bottles of the drink in the i-th shop.

The third line contains a single integer q (1 ≤ q ≤ 100 000) — the number of days Vasiliy plans to buy the drink.

Then follow q lines each containing one integer mi (1 ≤ mi ≤ 109) — the number of coins Vasiliy can spent on the i-th day.

Output
Print q integers. The i-th of them should be equal to the number of shops where Vasiliy will be able to buy a bottle of the drink on the i-th day.*/

#include <stdio.h>

int main() {
    int n, q;

    // Input the number of shops
    scanf("%d", &n);
    int prices[n];

    // Input the prices of drinks at each shop
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // Input the number of days Vasiliy plans to buy the drink
    scanf("%d", &q);
    int allowances[q];

    // Input the money Vasiliy has on each day and calculate the count of shops he can buy from
    for (int i = 0; i < q; i++) {
        scanf("%d", &allowances[i]);
    }

    // For each day, calculate and output the count of shops Vasiliy can buy from
    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (prices[j] <= allowances[i]) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
