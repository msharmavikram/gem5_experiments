#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_CPUTracers[] = {
    120,156,181,83,77,111,211,64,16,157,181,99,39,13,72,132,
    30,122,168,132,84,46,200,2,41,86,145,114,169,80,133,90,
    229,208,75,65,78,56,144,139,229,174,7,18,240,38,214,238,
    166,164,103,248,223,237,204,36,113,8,18,23,84,252,241,52,
    251,60,26,191,247,180,171,97,115,133,244,190,63,1,112,53,
    21,37,61,10,42,0,163,96,162,64,241,58,128,42,128,49,
    87,33,84,33,152,16,38,33,125,105,1,134,240,69,65,25,
    193,47,128,159,0,159,39,45,40,227,45,219,110,216,8,202,
    14,96,75,216,131,134,141,161,236,194,40,121,66,63,157,221,
    211,149,40,170,252,1,193,104,102,62,220,124,67,237,215,20,
    195,235,117,217,37,184,154,59,63,182,133,70,43,205,195,21,
    174,87,122,235,135,59,47,216,207,49,21,8,108,131,180,79,
    2,54,70,194,201,14,233,204,70,9,251,206,24,92,143,64,
    134,156,157,53,227,220,51,34,117,189,76,113,133,158,153,254,
    116,154,68,44,162,67,144,231,243,194,96,158,139,162,60,55,
    139,114,89,241,178,197,13,119,53,138,52,189,90,229,186,42,
    156,147,46,94,77,177,40,209,38,172,114,7,238,156,32,157,
    46,12,166,183,206,188,77,245,98,105,29,254,88,216,239,233,
    240,114,56,56,61,77,191,162,25,228,166,112,30,109,234,172,
    78,89,214,229,199,79,27,161,253,250,78,108,188,228,89,49,
    65,172,248,222,132,229,177,146,190,127,139,135,109,184,231,187,
    120,118,243,132,101,33,51,166,246,18,202,56,133,76,42,150,
    147,181,25,58,123,158,31,205,56,11,124,245,135,113,222,82,
    215,133,159,221,226,95,156,159,52,206,49,16,207,192,158,217,
    127,36,254,227,198,63,103,232,14,119,254,127,27,43,52,11,
    154,11,215,36,208,222,75,64,118,196,216,46,81,182,77,113,
    227,184,207,255,255,92,88,248,27,158,213,105,114,137,213,181,
    136,243,79,9,204,160,223,28,179,12,182,39,143,216,186,176,
    133,113,89,176,61,28,146,176,140,123,124,149,146,201,187,245,
    225,57,127,193,51,249,63,61,213,85,189,224,40,58,138,30,
    0,207,233,245,3,
};

EmbeddedPython embedded_m5_objects_CPUTracers(
    "m5/objects/CPUTracers.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/cpu/CPUTracers.py",
    "m5.objects.CPUTracers",
    data_m5_objects_CPUTracers,
    485,
    1187);

} // anonymous namespace