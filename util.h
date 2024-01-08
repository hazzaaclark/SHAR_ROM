/* COPYRIGHT (C) HARRY CLARK 2024 */

/* DECOMPILATION OF THE MAKEGCM TOOL FROM */
/* THE SIMPSONS HIT AND RUN SOURCE CODE */

/* THIS FILE SERVES TO PROVE MODULRISATION FOR METHODS */
/* AND ACCESS ACROSS THE PROGRAM */

#ifndef UTIL
#define UTIL

/* SYSTEM INCLUDES */

#include <malloc.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct FILE_ARGS
{
    int* FILE_INDEX;
    FILE* FILE_TYPE;
    char* FILE_DESTINATION;

} FILE_ARGS;

typedef struct MEMORY_STACK
{
    char(*MEM_INCREMENT);
    char(*MEMORY_BASE);
    int(*STACK_BASE);
    int RESULT;
    
} MEMORY_STACK;

int RETURN_FILE_STREAM(struct FILE_ARGS* FILE_BASE);

#endif