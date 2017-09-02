#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleMemory[] = {
    120,156,181,82,77,111,211,64,16,157,205,87,243,81,129,232,
    181,23,35,113,176,42,97,147,162,72,28,16,42,169,42,46,
    128,170,6,33,145,139,181,177,7,108,240,218,102,119,146,52,
    231,244,127,195,204,38,81,122,226,198,218,30,189,25,205,188,
    121,179,227,20,246,167,205,223,85,0,224,34,6,25,191,10,
    74,128,47,123,164,24,181,0,21,124,87,144,181,225,1,96,
    11,240,109,222,130,172,3,179,176,203,37,197,31,62,161,98,
    68,98,46,232,148,237,172,48,77,137,159,208,212,118,147,62,
    238,52,149,78,95,25,32,192,92,73,63,225,82,48,111,3,
    118,128,91,109,25,119,1,123,240,243,68,26,114,155,109,11,
    230,253,67,164,11,89,207,71,6,62,50,132,140,131,125,31,
    25,193,221,44,28,48,245,157,232,112,207,216,24,52,177,243,
    82,18,134,81,158,187,145,136,43,245,10,131,166,182,228,168,
    195,254,235,87,149,115,231,82,136,191,151,232,40,160,58,176,
    232,154,186,114,24,148,154,176,74,55,36,226,37,239,197,191,
    243,130,149,182,133,174,82,116,125,78,28,95,70,111,62,76,
    99,231,158,179,115,93,155,69,81,97,198,53,58,11,116,149,
    5,107,91,16,6,11,134,235,34,163,60,148,155,35,169,75,
    146,74,27,76,18,26,122,199,212,217,178,20,87,212,210,166,
    65,31,79,239,239,147,156,169,208,210,224,48,213,45,15,229,
    179,100,58,146,245,220,106,171,13,157,48,250,184,159,68,240,
    97,170,209,17,39,172,156,158,178,191,219,218,244,160,202,147,
    31,53,202,34,143,198,93,177,137,243,218,96,188,114,230,50,
    78,235,165,117,184,174,237,175,248,230,250,102,50,30,199,63,
    208,76,18,163,29,161,141,157,77,99,89,201,227,191,35,106,
    54,126,95,47,133,237,9,155,158,146,231,84,157,169,179,246,
    64,125,14,229,226,189,6,51,137,26,25,198,145,164,189,95,
    56,178,58,165,29,139,167,248,31,218,252,58,222,238,22,240,
    238,66,88,229,118,135,106,216,250,11,30,216,201,121,
};

EmbeddedPython embedded_m5_objects_SimpleMemory(
    "m5/objects/SimpleMemory.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/mem/SimpleMemory.py",
    "m5.objects.SimpleMemory",
    data_m5_objects_SimpleMemory,
    462,
    833);

} // anonymous namespace