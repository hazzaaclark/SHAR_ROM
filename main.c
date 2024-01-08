/* COPYRIGHT (C) HARRY CLARK 2024 */

/* DECOMPILATION OF THE MAKEGCM TOOL FROM */
/* THE SIMPSONS HIT AND RUN SOURCE CODE */

/* THIS FILE PERTAINS TOWARDS THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* AS OF JANUARY 7TH 2024, THIS IS A VERY BARE BONES STRUCTURE */
/* DUE TO THE LOOSE TRANSLATION BETWEEN WHAT IDA PRO HAS OUTPUTTED */
/* AS WELL AS MY UNDERSTANDING */

/* MODULARISATION WILL BE ADDED AS AND WHEN APPROPRIATE */

/* NESTED INCLUDES */

#include "util.h"

/* SYSTEM INCLUDES */

#include <malloc.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int RETURN_FILE_STREAM(struct FILE_ARGS* FILE_BASE)
{
    return fprintf(&FILE_BASE->FILE_INDEX, NULL, NULL);
}

int main(int argc, const char** argv, const char** envp)
{
    struct MEMORY_STACK* MEM_STACK;
    struct FILE_ARGS* FILES;

    /* CHECKS TO SEE IF THE ENTRY CODE OF THE PROGRAM */
    /* HAS BEEN MET IN RELATION TO THE LOCAL EXECUTION ARGS */

    if (argc <= 1)
    {
        /* CREATE A STATIC CAST TO INITIALISE THE MEMORY ALLOCATION */
        /* THIS IS IN RELATION TO THE HEAP AND STACK OF THE GAMECUBE */

        /* THIS BLOCK OF CODE WILL BE EXECUTED ASSUMING THERE IS AN ARBITARY */
        /* FILE DESITNATION ALLOCATED */

        do
        {
            if(MEM_STACK->MEMORY_BASE != sizeof(&MEM_STACK->MEM_INCREMENT) == NULL)
            {
                MEM_STACK->STACK_BASE = (int*)malloc(sizeof(&MEM_STACK->MEM_INCREMENT));
            }

            MEM_STACK++;
        }

        while (FILES->FILE_DESTINATION);
        
    }
}
