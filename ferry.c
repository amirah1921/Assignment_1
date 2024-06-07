#include <cs50.h>
#include <stdio.h>

int get_civilians(void);
int calculate_bus(int civilians);
int calculate_van(int civilians);
int calculate_car(int civilians);
int calculate_motorcycle(int civilians);

int main(void)
{
    int civilians = get_civilians();

    int buses = calculate_bus(civilians);
    civilians -= buses * 20;

    int vans = calculate_van(civilians);
    civilians -= vans * 10;

    int cars = calculate_car(civilians);
    civilians -= cars * 5;

    int motorcycles = calculate_motorcycle(civilians);
    civilians -= motorcycles * 1;

    int total_transports = buses + vans + cars + motorcycles;

    printf("%i\n", total_transports);
}

int get_civilians(void)
{
    int civilians;
    do
    {
        civilians = get_int("Civilians ferried: ");
    }
    while (civilians < 1 || civilians > 500);
    return civilians;
}

int calculate_bus(int civilians)
{
    return civilians / 20;
}

int calculate_van(int civilians)
{
    return civilians / 10;
}

int calculate_car(int civilians)
{
    return civilians / 5;
}

int calculate_motorcycle(int civilians)
{
    return civilians / 1;
}
