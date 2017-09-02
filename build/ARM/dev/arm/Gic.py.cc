#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Gic[] = {
    120,156,173,86,219,110,219,70,16,29,234,46,89,178,229,180,
    118,251,82,116,211,135,66,13,16,83,118,234,135,162,23,164,
    78,28,195,64,155,24,116,18,160,122,33,86,228,74,162,203,
    27,184,43,75,122,43,144,126,65,191,160,127,218,206,12,69,
    73,182,235,2,1,172,203,106,103,118,184,115,57,103,118,229,
    193,242,85,198,239,115,1,160,255,198,137,143,31,11,66,128,
    183,203,153,149,207,74,16,150,32,42,195,160,12,22,201,101,
    8,43,16,85,97,80,205,229,10,132,53,136,106,48,168,161,
    92,5,85,133,145,5,126,13,254,4,248,0,240,219,160,14,
    126,29,84,157,181,141,149,182,1,126,19,84,153,181,173,149,
    182,9,254,86,177,67,123,165,109,129,223,129,203,222,54,6,
    25,252,131,175,158,133,51,67,195,147,124,218,196,225,50,136,
    222,12,175,148,103,214,170,139,32,121,169,174,3,79,229,170,
    6,169,66,105,70,73,22,153,58,10,39,82,171,179,192,243,
    54,203,113,66,229,176,113,162,0,6,22,21,101,80,162,56,
    7,21,170,9,230,172,106,112,133,249,52,224,170,73,181,249,
    80,2,140,207,185,236,209,195,78,5,7,253,9,21,83,93,
    219,50,139,236,33,186,112,199,129,119,48,153,104,177,225,95,
    152,73,160,133,207,209,9,156,165,50,51,34,25,29,244,182,
    138,72,93,55,150,145,114,93,211,98,33,74,252,105,72,34,
    185,48,139,84,241,228,109,54,85,108,45,135,218,100,210,51,
    108,237,205,231,238,68,73,95,101,166,74,62,101,38,35,135,
    226,51,181,92,84,177,49,36,203,120,193,79,167,203,168,122,
    84,133,245,160,191,199,193,158,36,145,178,175,117,116,100,123,
    201,52,211,106,150,100,191,219,167,47,78,143,15,15,237,177,
    138,142,221,72,106,163,50,91,103,158,93,164,141,85,61,72,
    23,92,142,167,180,17,57,169,89,252,46,229,49,133,207,190,
    235,223,45,252,95,183,10,79,37,47,131,170,192,85,149,138,
    141,220,163,122,215,10,13,98,82,101,77,157,53,13,162,29,
    146,141,52,205,13,77,99,137,210,90,211,100,205,22,107,218,
    68,64,164,29,105,58,172,217,6,181,67,252,35,77,151,176,
    237,16,182,59,148,200,167,27,216,34,172,110,74,121,32,184,
    1,116,225,75,253,25,174,254,236,251,153,210,90,96,61,133,
    31,32,42,193,112,106,146,44,0,11,13,118,110,25,120,233,
    148,113,60,236,199,154,249,241,82,133,114,193,75,23,231,111,
    68,102,207,132,73,54,183,209,95,221,103,132,91,137,32,70,
    32,70,210,83,250,241,13,51,214,103,211,212,144,225,88,241,
    207,139,139,119,193,31,148,82,31,135,215,211,104,168,50,36,
    224,134,105,24,196,74,11,61,77,211,36,51,202,23,189,72,
    206,197,143,226,176,127,212,255,70,239,227,67,167,177,28,134,
    74,16,7,132,154,27,21,235,32,137,117,111,151,138,69,24,
    59,196,54,135,26,205,33,86,58,76,237,202,178,2,220,160,
    148,152,43,73,34,130,96,6,185,64,143,252,34,113,67,111,
    97,182,11,179,52,72,92,159,50,50,157,165,237,90,67,59,
    99,224,110,184,124,136,28,191,59,143,205,179,35,222,56,192,
    21,74,134,157,159,36,73,200,20,124,37,67,173,12,33,194,
    44,222,200,224,129,187,128,92,124,75,27,61,42,186,160,244,
    200,90,191,57,122,52,189,62,138,94,97,163,170,187,93,113,
    246,113,93,81,162,198,184,209,21,216,36,22,181,4,82,153,
    49,249,162,136,102,147,202,232,159,137,76,107,123,84,31,10,
    70,92,94,156,11,58,196,68,204,20,97,224,215,43,38,49,
    50,44,150,246,110,145,123,196,102,72,209,94,235,255,40,225,
    124,94,28,121,58,13,92,242,197,4,32,33,84,177,179,91,
    176,134,168,241,208,208,80,33,158,211,70,173,213,1,197,144,
    212,86,144,220,69,227,215,143,64,99,117,81,84,138,35,104,
    139,14,156,49,20,7,87,103,133,201,227,251,49,113,186,180,
    182,251,95,157,207,231,1,70,42,146,88,204,38,129,55,161,
    214,198,195,98,60,86,27,109,175,53,37,122,145,204,242,30,
    55,179,100,137,25,73,12,147,230,219,245,126,140,232,220,227,
    150,93,53,29,31,238,78,155,6,106,72,190,79,48,100,102,
    243,123,188,134,147,44,191,119,200,51,215,115,233,231,129,17,
    164,178,157,221,64,16,155,107,207,122,157,95,164,20,113,116,
    124,144,82,36,154,57,70,82,150,204,23,166,157,11,171,191,
    13,142,85,4,154,255,103,112,74,148,218,234,86,231,46,230,
    100,216,229,3,167,193,161,253,144,223,241,63,125,77,27,18,
    228,45,171,101,117,75,93,252,238,215,247,219,251,245,127,1,
    26,108,30,88,
};

EmbeddedPython embedded_m5_objects_Gic(
    "m5/objects/Gic.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/dev/arm/Gic.py",
    "m5.objects.Gic",
    data_m5_objects_Gic,
    1060,
    2488);

} // anonymous namespace
