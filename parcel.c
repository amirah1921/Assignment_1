#include <cs50.h>
#include <stdio.h>

int get_order(void);
int calculate_10i(int items);
int calculate_5i(int items);
int calculate_2i(int items);
int calculate_1i(int items);

int main(void)
{
    int items = get_order();

    int ten_parcels = calculate_10i(items);
    items -= ten_parcels * 10;

    int five_parcels = calculate_5i(items);
    items -= five_parcels * 5;

    int two_parcels = calculate_2i(items);
    items -= two_parcels * 2;

    int one_parcels = calculate_1i(items);
    items -= one_parcels * 1;

    int total_parcels = ten_parcels + five_parcels + two_parcels + one_parcels;

    printf("%i\n", total_parcels);
}

int get_order(void)
{
    int items;
    do
    {
        items = get_int("Items ordered: ");
    }
    while (items < 1 || items > 50);
    return items;
}

int calculate_10i(int items)
{
    return items / 10;
}

int calculate_5i(int items)
{
    return items / 5;
}

int calculate_2i(int items)
{
    return items / 2;
}

int calculate_1i(int items)
{
    return items / 1;
}
