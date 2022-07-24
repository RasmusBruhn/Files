#include <stdio.h>
#include "Files.h"

int main(int argc, char **argv)
{
    // Load file
    char *String = FIL_Load("TestFile.txt");

    if (String == NULL)
    {
        printf("Unable to load file: %s\n", FIL_GetError());
        return 0;
    }

    printf("%s\n", String);

    free(String);

    // Save CSV
    bool BoolList[4] = {true, false, false, true};
    uint8_t Uint8List[4] = {200, 201, 203, 204};
    uint16_t Uint16List[4] = {30001, 30002, 30003, 30004};
    uint32_t Uint32List[4] = {4000000001, 4000000002, 4000000003, 4000000004};
    uint64_t Uint64List[4] = {5000000000001, 5000000000002, 5000000000003, 5000000000004};
    int8_t Int8List[4] = {-100, -101, -103, -104};
    int16_t Int16List[4] = {-20001, -20002, -20003, -20004};
    int32_t Int32List[4] = {-1000000001, -1000000002, -1000000003, -1000000004};
    int64_t Int64List[4] = {-5000000000001, -5000000000002, -5000000000003, -5000000000004};
    float FloatList[4] = {1e1, 2e2, 3e3, 4e4};
    double DoubleList[4] = {5e5, 6e6, 7e7, 8e8};
    char *Delimiter = ",";
    char *Header = "Bool,Uint8,Uint16,Uint32,Uint64,Int8,Int16,Int32,Int64,Float,Double";
    char *FileName = "TestCSV.csv";

    if (!FIL_SaveCSV(FileName, Header, Delimiter, 4, 11, BoolList, FIL_DATATYPE_BOOL, Uint8List, FIL_DATATYPE_UINT8, Uint16List, FIL_DATATYPE_UINT16, Uint32List, FIL_DATATYPE_UINT32, Uint64List, FIL_DATATYPE_UINT64, Int8List, FIL_DATATYPE_INT8, Int16List, FIL_DATATYPE_INT16, Int32List, FIL_DATATYPE_INT32, Int64List, FIL_DATATYPE_INT64, FloatList, FIL_DATATYPE_FLOAT, DoubleList, FIL_DATATYPE_DOUBLE))
    {
        printf("Unable to write csv file: %s\n", FIL_GetError());
        return 0;
    }

    printf("Finished without errors\n");

    return 0;
}