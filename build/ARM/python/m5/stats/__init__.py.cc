#include "sim/init.hh"

namespace {

const uint8_t data_m5_stats[] = {
    120,156,181,88,75,115,27,199,17,238,89,128,160,64,129,20,
    73,217,178,222,94,201,197,24,84,20,32,82,34,186,202,145,
    159,162,100,217,86,81,14,40,91,46,218,12,106,129,29,144,
    75,46,176,224,206,128,34,29,50,149,138,92,177,115,72,85,
    46,57,164,42,149,95,144,31,144,92,82,57,248,146,202,61,
    127,39,249,186,103,23,128,104,199,39,17,143,217,121,246,244,
    244,227,235,158,109,83,246,41,226,255,182,79,100,94,83,68,
    33,126,138,98,162,181,97,93,209,154,39,117,143,226,2,117,
    139,180,86,36,197,237,2,197,19,212,45,209,90,137,186,147,
    180,54,233,122,139,188,162,123,130,214,202,174,61,33,237,41,
    90,155,34,181,1,186,39,41,44,209,151,168,84,72,227,55,
    77,225,36,125,169,232,41,182,153,161,168,64,122,134,194,19,
    180,196,143,178,123,76,209,210,218,41,10,79,202,170,89,10,
    43,82,153,35,166,54,79,17,202,211,92,15,94,160,112,90,
    134,94,164,112,70,42,103,40,60,69,193,75,20,206,74,243,
    44,133,115,82,57,71,186,68,81,153,71,195,121,90,10,79,
    83,248,2,30,88,119,6,15,204,63,139,199,57,10,207,227,
    113,129,194,139,120,92,162,240,50,30,47,83,232,227,113,133,
    194,171,180,196,60,159,103,25,173,86,95,129,16,163,255,226,
    179,82,133,20,201,178,80,27,73,98,171,30,183,78,160,8,
    172,77,195,168,109,237,4,26,157,192,6,177,155,57,131,194,
    180,55,117,184,106,3,123,119,87,247,172,235,159,69,209,215,
    105,148,96,17,15,45,15,186,253,54,143,20,242,63,235,172,
    78,162,36,214,13,81,87,209,161,34,117,160,232,107,98,129,
    126,133,141,20,235,233,183,210,60,244,232,192,3,175,204,155,
    57,1,198,30,167,65,223,15,252,126,28,68,61,255,163,125,
    187,153,244,252,206,160,215,182,17,42,79,34,187,233,127,220,
    120,224,247,131,212,68,189,13,127,83,199,224,199,76,77,249,
    248,124,239,210,78,181,211,187,238,95,187,182,253,36,72,55,
    204,162,111,19,95,239,245,117,219,98,5,83,180,155,129,21,
    42,155,129,241,91,90,247,124,211,143,35,235,15,100,159,65,
    26,243,150,186,134,138,244,215,252,123,81,106,172,223,79,76,
    196,244,131,216,7,221,65,23,162,18,42,145,241,3,99,208,
    14,121,167,150,198,46,157,40,214,189,160,171,175,99,47,12,
    227,215,78,117,96,49,3,59,218,77,237,183,147,94,27,237,
    94,192,4,133,74,210,145,129,158,182,113,210,246,171,191,218,
    76,140,101,18,139,126,208,11,33,4,72,3,71,229,41,194,
    93,200,39,169,249,31,234,253,39,73,26,10,133,156,41,176,
    147,106,63,132,238,118,49,173,147,38,93,89,182,51,208,233,
    190,191,27,196,3,109,114,82,76,195,9,244,94,146,66,72,
    65,183,31,235,215,165,131,63,79,32,229,190,14,155,157,234,
    183,132,82,189,106,245,158,125,189,94,55,176,13,83,179,123,
    246,173,80,155,246,27,247,130,216,232,171,139,139,254,143,222,
    28,146,233,84,175,14,103,93,189,238,143,230,45,186,189,197,
    112,157,213,177,113,242,174,70,76,109,18,255,18,254,167,217,
    212,254,241,29,166,22,138,121,197,30,117,11,244,59,114,166,
    167,104,171,200,48,0,90,79,149,130,209,193,12,191,82,212,
    241,24,11,96,137,135,5,178,37,118,88,24,227,214,36,61,
    37,90,94,191,64,159,123,116,88,164,195,9,58,40,208,65,
    145,14,176,216,163,95,120,180,243,88,76,183,68,251,87,232,
    107,143,177,131,55,56,33,101,153,137,158,57,40,209,239,225,
    130,143,123,23,168,104,167,104,123,138,210,191,147,82,202,158,
    100,104,193,98,213,83,244,41,160,104,181,202,126,184,50,118,
    90,110,139,88,155,59,198,245,84,80,64,186,58,13,226,166,
    134,174,236,28,58,182,181,238,55,91,113,208,219,110,58,245,
    181,217,171,249,63,145,11,231,95,188,24,71,18,32,131,84,
    182,61,246,205,81,143,199,61,233,3,110,98,244,92,5,85,
    43,178,227,115,120,44,132,3,146,211,8,191,251,207,174,44,
    82,250,75,153,94,252,238,233,31,208,254,89,238,248,154,114,
    250,79,69,222,144,73,29,50,41,136,76,190,17,153,40,86,
    194,136,136,155,61,36,148,203,169,36,114,226,224,16,177,84,
    204,101,20,11,230,117,255,213,5,243,170,31,38,218,244,94,
    181,112,222,93,118,53,145,72,205,92,26,159,194,126,221,29,
    196,54,130,53,103,22,95,51,175,100,51,22,216,31,153,128,
    172,141,194,28,62,50,177,11,60,89,6,56,184,112,67,224,
    147,217,217,208,22,166,15,253,18,125,194,4,239,166,105,146,
    58,116,45,136,138,246,101,154,219,76,250,27,147,249,32,22,
    86,249,48,230,62,138,250,102,210,213,245,93,211,189,89,111,
    39,3,232,30,254,187,93,191,123,231,238,173,27,55,234,27,
    186,123,171,217,13,12,56,169,155,180,93,239,11,107,245,238,
    45,231,102,245,102,51,234,69,182,217,172,97,224,228,208,120,
    100,211,85,222,96,158,183,81,117,117,73,205,171,75,94,65,
    157,85,211,170,164,76,81,142,190,96,12,179,241,126,28,235,
    13,96,24,83,244,119,35,96,26,92,31,132,128,53,216,22,
    80,168,219,81,39,210,97,181,146,155,104,238,252,141,82,126,
    34,112,232,142,199,6,40,192,34,17,231,81,58,208,82,25,
    6,26,200,180,107,68,50,14,216,100,148,193,204,150,121,254,
    126,223,9,82,228,92,101,138,13,142,71,110,35,238,219,49,
    141,83,92,103,51,216,150,114,87,168,57,104,31,197,58,198,
    254,145,212,133,200,243,149,246,100,6,76,8,65,247,135,146,
    246,102,213,172,247,98,105,190,242,83,200,250,10,100,237,12,
    162,156,49,100,147,36,54,13,22,67,149,133,214,96,27,149,
    102,131,13,90,76,66,78,32,3,207,151,93,214,93,19,122,
    107,118,2,176,145,238,191,198,59,176,224,232,212,172,119,225,
    242,16,64,152,175,59,12,32,167,29,128,108,137,107,30,56,
    239,231,96,45,254,87,68,249,112,96,251,3,43,86,227,194,
    7,224,223,239,36,105,55,176,89,8,121,196,61,98,85,28,
    254,12,199,56,203,225,57,233,105,215,13,217,193,203,208,146,
    216,30,96,164,239,226,169,44,231,176,144,70,210,83,243,31,
    109,234,241,14,142,160,8,150,173,24,1,173,181,143,145,78,
    0,247,190,238,183,192,81,27,132,90,218,145,136,204,112,142,
    209,214,114,56,183,25,165,49,19,71,148,150,240,147,241,125,
    55,11,123,254,247,68,52,55,83,212,40,14,208,236,222,18,
    251,150,185,226,36,44,123,150,128,51,1,46,58,61,231,11,
    32,226,116,253,252,49,64,212,204,108,223,115,106,222,228,29,
    120,111,170,88,26,250,6,180,33,21,158,40,113,181,152,133,
    14,209,124,235,187,83,184,131,60,103,219,159,227,227,112,176,
    44,208,57,4,79,23,232,138,2,234,31,8,168,79,112,32,
    201,1,28,238,137,168,202,81,212,227,62,238,70,220,88,173,
    138,180,254,128,221,223,9,145,5,61,139,62,67,204,201,82,
    48,151,166,25,155,162,225,36,191,58,54,221,229,55,71,215,
    96,133,129,169,137,190,59,73,28,39,79,184,215,25,168,203,
    104,178,122,189,206,248,243,217,91,98,15,111,8,118,126,246,
    179,177,198,250,122,102,206,32,20,236,6,81,204,38,149,45,
    118,91,199,145,225,84,46,203,161,156,135,69,48,120,238,71,
    178,152,183,179,164,12,201,94,16,179,81,138,213,187,4,142,
    205,223,37,130,157,163,169,229,200,76,57,239,195,20,33,51,
    236,117,28,108,187,180,111,148,242,213,252,143,134,235,178,20,
    175,59,0,225,150,118,65,78,136,60,27,232,76,237,91,217,
    87,6,246,146,224,153,43,71,99,5,219,145,111,1,217,35,
    217,215,86,36,167,105,240,101,161,113,109,136,125,185,4,4,
    170,249,114,1,198,120,30,178,213,17,220,75,44,77,4,85,
    30,64,112,50,151,241,181,23,74,8,118,129,224,90,30,127,
    93,210,43,48,156,65,218,113,249,20,239,27,132,114,29,250,
    196,25,220,33,239,193,221,52,61,235,85,0,245,115,128,250,
    25,175,77,217,71,229,174,116,121,28,68,145,223,168,172,81,
    144,134,164,54,60,119,197,29,144,5,220,184,74,89,214,199,
    12,172,70,221,85,1,148,11,232,72,245,6,219,89,234,180,
    38,253,247,97,18,49,108,96,116,244,231,127,254,198,79,64,
    236,143,130,250,114,182,105,37,231,204,179,77,57,231,191,221,
    57,173,156,211,157,14,126,30,20,105,47,100,200,89,94,255,
    156,14,37,69,220,154,224,177,138,185,45,141,146,52,210,143,
    9,106,12,5,97,144,72,115,89,166,167,5,160,135,91,50,
    197,150,177,117,146,222,54,23,25,148,220,248,25,60,154,39,
    104,231,34,255,30,3,110,112,141,6,80,97,179,173,74,150,
    169,170,189,5,183,249,165,108,115,59,157,109,113,155,31,51,
    162,131,157,63,209,227,140,109,215,49,194,166,111,80,220,149,
    24,35,142,201,130,129,252,163,182,129,243,181,183,131,13,93,
    243,253,119,53,112,224,255,141,35,72,137,67,101,129,234,186,
    15,183,31,159,150,59,228,240,42,216,99,12,129,223,195,65,
    191,200,218,184,22,58,135,119,56,145,211,29,209,236,37,126,
    151,89,24,163,235,2,96,78,182,102,62,200,226,146,12,187,
    132,184,186,16,46,250,79,0,57,189,4,96,147,38,136,196,
    241,254,51,155,35,98,6,62,76,78,236,172,186,56,188,76,
    79,25,118,211,102,147,251,23,126,188,20,74,230,80,204,12,
    98,149,141,161,70,78,111,98,234,161,202,111,250,234,217,30,
    137,7,136,10,219,236,4,188,118,69,178,185,154,11,151,76,
    144,47,187,46,166,202,253,82,2,86,30,98,111,12,107,55,
    37,180,238,222,112,143,155,199,5,2,188,59,114,24,243,215,
    97,222,132,140,122,94,173,84,79,229,236,50,216,143,185,112,
    57,79,6,4,203,166,242,86,147,167,9,243,64,193,246,182,
    76,107,5,70,223,225,150,192,96,99,41,207,23,162,208,189,
    155,137,131,13,35,64,135,116,166,31,7,142,25,147,164,227,
    100,37,193,102,190,156,97,140,164,200,195,141,219,199,8,15,
    239,129,216,159,153,234,121,166,93,122,209,155,86,231,113,199,
    56,141,92,248,37,175,60,49,173,166,71,224,168,50,59,17,
    208,120,25,149,189,179,140,27,203,235,179,57,62,40,231,149,
    147,240,105,149,25,134,249,12,197,71,169,238,115,160,203,93,
    200,112,0,246,195,192,6,126,208,110,67,49,53,14,208,209,
    200,169,66,206,50,91,226,158,46,21,28,116,251,146,74,192,
    169,140,78,197,204,229,101,11,66,150,136,253,45,150,24,75,
    185,239,182,114,153,248,253,99,148,220,251,32,246,183,33,176,
    22,167,149,220,112,69,80,133,204,169,68,80,127,25,70,17,
    200,230,80,140,3,162,218,86,28,95,144,124,254,70,229,61,
    184,209,215,228,245,31,26,129,39,96,56,145,161,172,178,242,
    102,67,237,61,228,168,190,188,254,30,163,229,129,188,179,64,
    119,250,80,234,83,110,202,5,194,93,114,121,253,116,246,130,
    110,4,168,59,41,61,230,121,211,78,73,15,9,191,49,61,
    221,68,193,111,5,143,226,156,104,9,57,54,67,88,30,196,
    128,48,46,212,155,149,234,76,110,240,200,161,89,1,237,65,
    250,40,130,111,112,134,16,67,148,76,83,162,240,59,6,154,
    99,157,185,164,97,228,108,242,110,50,77,216,14,120,242,207,
    7,122,160,69,188,141,90,142,26,146,245,72,173,5,22,122,
    78,221,50,192,49,93,114,120,206,52,228,94,246,33,101,73,
    134,99,241,56,141,192,221,8,192,243,63,135,46,84,168,20,
    230,85,69,21,85,201,155,246,38,225,78,21,53,5,23,154,
    83,67,203,24,186,80,235,136,101,64,239,233,18,237,93,17,
    87,242,220,171,172,217,92,211,46,233,216,121,25,9,187,115,
    188,162,27,117,74,158,112,163,111,32,28,74,194,142,48,41,
    225,112,168,221,31,176,100,52,110,81,71,213,155,105,150,81,
    76,186,245,74,149,81,173,193,220,202,75,137,13,109,223,239,
    97,4,161,76,218,124,1,130,172,3,164,169,130,96,41,83,
    149,56,51,210,138,244,141,105,120,110,164,97,97,66,84,236,
    174,95,44,193,52,73,156,14,147,214,214,177,250,236,167,32,
    246,31,202,211,191,98,133,145,142,230,10,140,112,46,104,1,
    118,162,225,91,8,9,168,130,46,203,220,154,205,79,103,19,
    11,115,244,41,187,60,246,195,78,244,118,222,104,163,241,235,
    156,64,200,50,102,216,116,175,76,146,47,116,154,68,172,127,
    33,131,205,130,94,149,115,195,6,199,120,9,38,184,136,214,
    132,109,17,158,200,23,61,16,139,110,163,143,114,144,67,223,
    192,70,113,67,64,78,56,44,228,211,229,229,191,188,248,111,
    20,115,23,106,48,175,13,126,39,208,16,59,248,33,23,236,
    239,146,29,58,102,16,174,77,227,94,14,165,18,23,156,15,
    62,224,226,17,23,44,189,198,157,103,212,115,12,46,197,184,
    113,187,155,132,131,88,191,201,140,154,119,81,84,188,138,154,
    85,103,10,252,134,166,228,149,111,20,212,169,233,130,55,169,
    38,213,84,161,124,182,92,44,41,254,150,47,150,39,81,158,
    41,207,148,212,228,145,239,255,0,141,173,97,155,
};

EmbeddedPython embedded_m5_stats(
    "m5/stats/__init__.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/python/m5/stats/__init__.py",
    "m5.stats",
    data_m5_stats,
    3005,
    6817);

} // anonymous namespace