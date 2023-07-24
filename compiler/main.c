#include <stdio.h>
#include "helper/vector.h"
#include "compiler.h"
int main()
{
    // struct vector *vec = vector_create(sizeof(int));
    // int x = 50;
    // vector_push(vec, &x);
    // x = 20;
    // vector_push(vec, &x);

    // vector_pop(vec);

    // vector_set_peek_pointer(vec, 0);
    // int *ptr = vector_peek(vec);
    // while (ptr)
    // {
    //     printf("%i\n", *ptr);
    //     ptr = vector_peek(vec);
    // }

    int res = compiler_file("./test.c", "./test", 0);
    if (res == COMPILER_FILE_COMPILED_OK)
    {
        printf("Everything compiled fine!\n");
    }
    else if (res == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compile failed!\n");
    }
    else
    {
        printf("Unknown response for compile file!\n");
    }

    return 0;
}