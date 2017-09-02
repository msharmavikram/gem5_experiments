#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_FuncUnit[] = {
    120,156,173,85,109,111,19,71,16,30,191,196,113,28,167,4,
    74,211,119,88,40,80,131,90,159,64,74,213,15,168,34,132,
    184,66,2,130,108,210,170,254,114,189,220,172,185,75,239,173,
    183,123,134,124,171,148,254,239,118,102,206,62,159,145,42,245,
    67,108,223,104,102,118,61,251,236,60,207,238,249,176,248,180,
    232,121,162,0,204,239,228,32,253,26,16,1,196,13,152,54,
    160,193,113,19,162,38,188,193,22,232,22,204,26,128,109,248,
    27,224,2,224,183,105,27,112,3,116,67,178,157,42,187,1,
    184,185,204,118,171,108,7,112,11,38,131,30,45,18,254,67,
    159,65,131,60,187,69,102,18,198,199,167,103,218,183,101,138,
    205,3,187,73,246,56,59,140,60,99,252,37,210,123,244,60,
    101,164,127,145,163,129,1,150,120,9,34,193,67,129,67,64,
    104,121,90,152,150,195,30,224,54,96,31,112,7,240,35,192,
    43,128,187,128,87,1,175,1,126,12,120,29,240,19,192,61,
    192,79,1,63,3,252,28,240,11,192,47,1,191,2,252,26,
    240,6,224,77,64,5,120,11,240,54,224,55,128,119,0,239,
    194,219,123,48,109,194,120,50,96,52,150,183,243,42,117,23,
    72,109,135,194,231,137,61,136,10,217,0,185,47,139,200,46,
    211,207,194,185,237,146,59,138,82,207,30,32,174,130,195,56,
    171,5,115,43,125,145,64,254,223,175,71,7,190,191,154,203,
    37,87,115,67,227,175,162,201,159,185,21,20,212,95,228,213,
    122,43,159,107,84,67,11,176,236,51,142,202,39,24,221,133,
    47,149,171,128,33,109,215,2,174,182,32,18,39,65,56,43,
    1,87,209,18,176,36,24,212,114,180,234,195,122,130,240,172,
    37,24,212,122,98,254,65,13,238,194,78,61,33,120,215,51,
    12,122,247,195,12,67,91,155,86,53,237,165,142,199,218,43,
    41,34,255,215,60,180,186,198,195,98,116,167,150,40,167,112,
    31,158,103,57,21,214,164,135,190,16,111,236,235,92,207,180,
    245,131,1,31,54,169,233,186,137,23,107,215,21,86,92,55,
    78,177,136,56,108,83,56,247,34,51,96,193,175,140,121,76,
    198,9,210,88,59,115,19,63,114,252,180,200,141,126,151,230,
    127,56,71,135,71,251,15,31,58,111,117,188,239,198,158,177,
    58,119,76,238,59,126,86,56,163,34,241,79,146,208,14,179,
    243,113,147,10,124,199,149,174,147,233,52,174,208,183,180,125,
    250,118,232,17,149,30,103,207,180,241,171,19,215,90,158,184,
    159,235,39,142,244,79,135,110,74,23,66,27,206,54,248,244,
    93,80,216,145,112,115,113,18,47,154,48,237,74,102,11,116,
    143,15,38,103,182,249,224,240,58,99,129,194,124,48,206,25,
    225,116,11,6,26,4,230,42,183,232,60,211,42,157,169,52,
    211,185,103,195,52,9,249,86,48,138,231,159,251,145,54,170,
    72,108,24,169,92,27,98,81,133,70,121,115,47,140,188,83,
    26,210,60,83,91,101,83,101,243,66,171,119,129,78,148,13,
    180,226,85,184,150,23,41,94,75,205,210,220,6,244,215,52,
    227,2,179,34,138,206,85,22,102,58,10,19,141,67,53,34,
    22,180,138,181,151,24,149,164,118,53,164,60,171,188,40,26,
    14,152,221,241,125,54,15,24,115,123,1,92,40,245,223,191,
    119,3,146,136,206,237,6,133,175,189,220,139,133,3,81,87,
    90,187,47,14,101,67,50,43,205,94,120,86,234,60,77,211,
    72,156,55,180,5,17,85,181,252,165,43,131,169,248,145,43,
    245,68,25,29,209,197,181,82,15,163,147,53,61,52,151,122,
    120,244,191,244,176,9,103,93,214,3,135,91,76,61,239,104,
    252,195,127,82,127,131,146,73,17,159,234,156,201,39,206,136,
    128,209,201,183,117,118,111,75,155,22,170,80,62,119,145,212,
    64,84,42,225,114,116,162,152,2,121,205,172,168,25,127,207,
    102,200,198,97,10,90,229,125,44,61,167,126,37,229,117,246,
    11,189,130,210,188,100,138,123,34,13,32,74,66,99,47,189,
    231,220,131,39,92,169,91,235,249,171,1,107,67,46,141,120,
    127,88,189,22,199,188,164,104,128,178,25,195,51,34,141,35,
    106,149,72,74,208,74,201,203,198,41,87,213,227,242,114,250,
    233,254,18,239,110,163,215,220,235,239,117,255,5,103,217,246,
    109,
};

EmbeddedPython embedded_m5_objects_FuncUnit(
    "m5/objects/FuncUnit.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/cpu/FuncUnit.py",
    "m5.objects.FuncUnit",
    data_m5_objects_FuncUnit,
    961,
    2115);

} // anonymous namespace
