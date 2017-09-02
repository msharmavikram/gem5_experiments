#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Process[] = {
    120,156,173,86,109,111,219,54,16,166,236,188,58,105,222,155,
    183,54,45,187,165,171,50,52,241,58,36,253,210,173,88,210,
    165,64,49,36,11,236,116,192,50,12,134,34,210,54,19,81,
    18,72,202,177,139,125,75,255,198,126,235,118,119,146,92,23,
    232,246,41,86,164,28,31,82,199,227,221,243,144,10,89,241,
    171,194,253,19,103,204,158,130,33,224,207,99,17,99,231,133,
    229,13,173,10,88,21,38,171,172,237,49,81,101,31,25,187,
    101,236,247,139,49,38,198,74,116,124,136,142,51,49,193,154,
    254,36,184,84,255,192,207,247,192,114,248,248,214,33,120,102,
    146,80,90,27,142,6,113,132,65,252,13,99,36,99,23,30,
    134,114,81,193,153,47,170,76,194,20,224,178,194,62,122,236,
    22,144,9,38,39,217,213,20,198,1,179,223,86,216,197,116,
    137,208,204,136,212,74,100,146,137,41,66,102,8,153,101,242,
    30,187,154,99,98,154,192,121,2,23,152,168,49,49,67,200,
    226,8,50,75,200,18,33,203,76,220,99,98,142,144,21,66,
    238,51,49,207,196,2,33,171,35,200,34,33,107,35,200,18,
    33,235,35,200,50,33,27,35,200,10,33,155,37,2,127,171,
    132,60,24,25,179,70,200,195,114,105,235,76,108,16,178,197,
    228,35,66,54,41,63,143,139,102,7,74,247,128,6,240,145,
    87,30,18,242,132,144,175,104,162,45,66,190,166,183,182,233,
    173,71,132,60,101,242,27,38,30,83,89,193,237,51,214,104,
    250,80,37,214,192,74,218,57,124,40,93,79,243,98,238,117,
    187,225,56,64,120,99,255,27,172,231,88,78,170,38,17,224,
    212,199,90,251,56,192,97,135,149,81,219,97,171,23,8,97,
    200,74,201,162,78,245,65,186,105,48,194,32,236,202,224,50,
    146,249,219,248,176,175,224,81,239,38,90,214,123,86,127,95,
    15,147,204,88,121,147,152,235,250,241,155,227,131,23,47,234,
    29,169,15,90,58,176,78,154,186,53,97,29,227,44,72,183,
    151,14,28,242,77,7,233,83,244,85,65,143,21,130,66,21,
    219,37,248,223,86,145,140,3,45,121,59,49,220,58,161,98,
    10,9,166,113,118,249,11,253,128,231,3,164,49,95,28,128,
    248,38,78,54,128,136,52,47,50,198,111,84,20,113,147,197,
    60,137,105,245,237,32,178,210,106,10,14,230,132,155,7,49,
    87,241,174,150,58,49,3,222,147,198,170,4,134,183,185,235,
    74,158,6,29,201,255,231,231,48,107,60,119,18,152,176,171,
    156,12,93,102,228,174,77,101,168,218,42,196,240,116,224,236,
    51,212,105,172,156,10,34,200,122,238,187,8,17,23,240,75,
    79,191,57,123,143,142,154,199,180,206,151,251,39,71,118,131,
    194,236,43,157,105,142,197,42,163,178,46,8,175,149,192,213,
    162,212,51,43,13,87,194,46,130,45,219,109,136,64,245,36,
    47,209,41,64,59,38,201,82,108,44,125,54,100,8,215,144,
    23,69,56,74,40,34,192,34,113,197,200,216,241,79,93,118,
    97,100,100,249,186,163,241,219,232,186,47,195,44,207,137,159,
    64,42,141,18,210,242,80,139,63,190,251,147,171,54,183,210,
    237,88,159,234,172,117,16,11,30,169,24,134,142,188,150,70,
    153,133,76,118,50,13,19,219,29,187,130,94,227,158,50,73,
    140,8,122,112,42,238,88,202,77,152,25,138,15,105,9,32,
    23,202,192,202,160,140,118,55,23,78,22,5,14,171,153,38,
    80,107,30,192,200,174,10,187,220,37,152,66,3,222,134,67,
    136,59,135,189,64,69,20,134,36,92,10,46,140,66,74,132,
    72,225,242,38,217,161,52,255,242,112,247,4,221,122,36,64,
    236,59,181,175,225,121,153,36,17,7,246,251,135,160,53,78,
    218,123,206,201,78,115,27,195,177,31,158,115,26,56,148,223,
    143,206,100,114,231,85,174,66,244,150,75,38,178,133,54,196,
    93,10,116,142,234,149,38,198,181,180,116,221,68,216,195,79,
    90,245,113,14,135,212,105,181,80,101,173,150,171,81,67,39,
    34,139,176,137,17,185,65,42,9,15,251,253,22,44,1,68,
    152,239,39,253,254,9,185,36,201,189,69,201,53,144,168,212,
    60,11,76,160,221,4,88,77,103,160,106,4,170,56,5,129,
    35,8,66,47,77,224,79,82,152,77,82,53,153,103,196,73,
    202,76,16,15,8,202,53,79,33,29,65,66,41,6,160,255,
    33,8,242,236,156,78,195,235,158,126,23,131,180,48,216,19,
    82,122,19,55,191,217,92,96,77,212,19,1,232,245,93,225,
    61,3,102,163,75,137,6,2,157,18,232,20,64,90,0,233,
    208,192,158,218,103,66,112,51,208,252,141,104,153,175,156,74,
    170,115,7,192,236,188,125,35,104,33,239,97,238,151,251,148,
    119,168,22,177,150,234,116,92,208,241,103,98,35,173,168,32,
    38,185,15,163,192,218,188,136,141,133,146,32,119,71,21,58,
    139,158,160,163,125,120,76,120,112,85,170,222,124,117,201,195,
    235,190,55,13,23,88,149,188,93,92,208,154,31,218,13,124,
    113,248,41,130,20,163,79,145,29,246,31,159,34,240,117,35,
    39,216,213,36,126,144,224,177,56,133,199,34,38,138,28,209,
    46,134,33,162,74,91,121,34,224,104,180,91,152,22,217,83,
    33,28,10,112,58,112,58,30,252,44,6,90,242,58,116,236,
    248,72,140,6,110,108,13,116,209,192,115,164,129,59,12,21,
    239,28,196,71,169,15,46,173,51,65,232,26,107,216,191,94,
    42,161,60,113,238,58,187,184,164,99,116,52,85,102,23,174,
    83,31,249,144,19,244,96,175,169,244,175,151,87,64,34,162,
    54,0,41,82,201,82,88,216,50,73,127,64,93,195,129,84,
    51,114,125,199,225,210,156,63,228,219,192,235,173,50,236,154,
    7,87,101,117,251,95,165,158,154,31,
};

EmbeddedPython embedded_m5_objects_Process(
    "m5/objects/Process.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/sim/Process.py",
    "m5.objects.Process",
    data_m5_objects_Process,
    1290,
    2804);

} // anonymous namespace
