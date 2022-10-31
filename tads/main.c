#include "float_vector.h"
#include <stdio.h>

int main()
{
    FloatVector *vet = create(10);
    append(vet, 0.0);
    append(vet, 3.0);
    append(vet,9.0);
    print(vet);
    destroy(&vet);

    return 0;
}