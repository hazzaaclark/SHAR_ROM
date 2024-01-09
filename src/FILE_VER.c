/* COPYRIGHT (C) HARRY CLARK 2024 */

/* DECOMPILATION OF THE MAKEGCM TOOL FROM */
/* THE SIMPSONS HIT AND RUN SOURCE CODE */

/* THIS FILE PERTAINS TOWARDS THE DECLARATION OF FILE ARGUMENTS */
/* AS WELL AS ANY METHODS TO DISCERN FILE TYPES, VERSIONS, ETC */

/* NESTED INCLUDES */

#include "common.h"
#include "util.h"

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdlib.h>

/* THIS FUNCTION IS A COROUTINE TO DETERMINE WHAT THE NAME */
/* OF THE GCM FILE IS */

/* RUNS THROUGH A LOOP TO CHECK FOR THE READER INDEX */
/* WHICH ACTS AS THE POINTER FOR PARSING CONTENTS */

STATIC
S32 DECLARE_FILE_NAME(void* BUFFER)
{
    struct FILE_ARGS* FILE_BASE;
    int INDEX;

    /* ASSUMING THAT THERE IS NO CONTENTS FOUND IN THE INDEXXING */
    /* PRINT TO ERROR */

    for (INDEX = 0; INDEX < sizeof(&FILE_BASE->FILE_INDEX); ++INDEX)
    {
        if(FILE_BASE->FILE_NAME.RESULT == 0)
        {
            fprintf(stderr, "%s: Couldn't get version resource.\n", 
            &FILE_BASE->FILE_NAME.BUFFER_MESSAGE);

            return EXIT_FAILURE;
        }
    }

    return FILE_BASE->FILE_NAME.RESULT;
}



