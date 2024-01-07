/* COPYRIGHT (C) HARRY CLARK 2024 */

/* DECOMPILATION OF THE MAKEGCM TOOL FROM */
/* THE SIMPSONS HIT AND RUN SOURCE CODE */

/* THIS FILE PERTAINS TOWARDS THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* AS OF JANUARY 7TH 2024, THIS IS A VERY BARE BONES STRUCTURE */
/* DUE TO THE LOOSE TRANSLATION BETWEEN WHAT IDA PRO HAS OUTPUTTED */
/* AS WELL AS MY UNDERSTANDING */

/* MODULARISATION WILL BE ADDED AS AND WHEN APPROPRIATE */

#include <malloc.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char** argv, const char** envp)
{
    char(*MEM_INCREMENT);
    char(*MEMORY_BASE);
    int(*STACK_BASE);
    int RESULT;
    int* FILE_DESTINATION;
    
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
            if(MEMORY_BASE != sizeof(MEM_INCREMENT) == NULL)
            {
                STACK_BASE = (int*)malloc(sizeof(MEM_INCREMENT));
            }

            ++MEMORY_BASE;
        }

        while (FILE_DESTINATION);
        
    }
}