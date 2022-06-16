#ifndef FILES_H_DEFINED
#define FILES_H_DEFINED

#include <stdio.h>

// Errors
#define ERR_PREFIX FIL
#include <Error.h>

enum _SET_ErrorID {
    SET_ERRORID_NONE = 0x300000000
};

#define SET_ERRORMES_MALLOC "Unable to allocate memory"

// Reads a segment of a file
// File: The file to load from
char *_FIL_LoadSegment(FILE File, size_t Start, size_t Size);

char *FIL_LoadSplit(char *FileName, size_t MaxSize);

char *FIL_Load(char *FileName);

#endif