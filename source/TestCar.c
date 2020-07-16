#include <stdio.h>
#include <string.h>

typedef enum
{
    BMW,
    ACURA
}carTypes;

typedef CarData
{
    float mileage;
    int topSpeed;
    char colour;
    float brakeRate;
    int horsePower;
}CarData;

carTypes identifyCar();
void getspecs();

carTypes Car = ACURA;

int main()

{
    identifyCar();
    getspecs();
}

carTypes identifyCar()
{
    if (Car == BMW)
    {
        printf("BEEMER = %d",Car);
    }
    else
    {
        printf("ACURA = %d",Car);
    }

    return carTypes;
}


