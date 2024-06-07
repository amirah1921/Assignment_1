#include <cs50.h>
#include <stdio.h>

int get_sen(void);
int calculate_50s(int cents);
int calculate_20s(int cents);
int calculate_10s(int cents);
int calculate_5s(int cents);

int main(void)
{
    int cents = get_sen();

    int fifty_sens = calculate_50s(cents);
    cents -= fifty_sens * 50;

    int twenty_sens = calculate_20s(cents);
    cents -= twenty_sens * 20;

    int ten_sens = calculate_10s(cents);
    cents -= ten_sens * 10;

    int five_sens = calculate_5s(cents);
    cents -= five_sens * 5;

    int total_coins = fifty_sens + twenty_sens + ten_sens + five_sens;

    printf("%i\n", total_coins);
}

int get_sen(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0 || cents > 100 || cents % 5 != 0);
    return cents;
}

int calculate_50s(int cents)
{
    return cents / 50;
}

int calculate_20s(int cents)
{
    return cents / 20;
}

int calculate_10s(int cents)
{
    return cents / 10;
}

int calculate_5s(int cents)
{
    return cents / 5;
}
