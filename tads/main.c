#include "float_vector.h"
#include <stdio.h>

int main()
{
    FloatVector *vet = create(10);
    destroy(&vet);

    return 0;
}