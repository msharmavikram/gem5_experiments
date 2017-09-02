#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_dot_writer[] = {
    120,156,181,90,91,108,28,87,25,62,103,102,111,179,94,223,
    237,216,78,2,221,230,214,21,132,184,105,155,210,27,109,147,
    216,86,65,181,19,102,211,56,53,73,151,241,206,216,158,245,
    238,206,102,102,156,216,101,93,40,14,148,74,240,132,42,68,
    133,64,136,7,158,64,234,3,5,129,132,84,30,128,7,36,
    30,144,80,121,224,141,10,161,60,247,145,203,255,253,103,102,
    118,215,78,80,31,186,107,239,241,57,255,185,159,255,251,111,
    231,184,42,162,143,78,223,231,139,66,4,5,41,132,77,191,
    82,212,133,88,73,242,82,172,200,56,175,137,21,141,243,154,
    168,235,162,145,18,43,41,209,72,139,149,180,144,160,234,162,
    158,17,141,172,88,201,170,114,74,212,115,162,97,136,21,67,
    200,157,145,120,144,188,88,201,139,229,230,160,144,82,58,3,
    40,52,165,184,102,167,197,29,154,182,32,236,12,103,6,133,
    157,229,204,144,176,115,156,25,22,182,193,25,26,41,47,236,
    9,97,15,160,184,39,196,203,43,163,194,46,112,221,152,176,
    7,57,51,46,104,108,123,72,220,161,245,83,211,97,38,78,
    10,123,132,51,135,176,18,123,148,107,167,133,61,198,196,25,
    97,143,115,230,48,106,203,165,73,58,25,247,191,244,89,42,
    105,148,13,51,40,7,166,231,133,225,40,103,203,110,227,210,
    106,205,169,134,87,233,235,249,37,137,86,89,74,46,123,126,
    104,58,107,138,144,162,228,182,229,55,171,24,164,64,223,52,
    125,47,226,196,191,64,245,161,16,109,218,132,20,254,36,102,
    221,213,68,211,0,165,198,249,80,19,53,29,199,77,103,11,
    98,10,219,221,211,197,174,142,211,109,107,98,138,206,109,10,
    53,105,81,203,80,41,37,166,208,45,139,214,109,29,45,208,
    58,37,182,55,184,127,78,212,12,12,49,119,99,89,236,166,
    153,148,23,181,1,209,78,131,59,123,154,216,205,136,118,6,
    249,77,93,248,183,49,4,205,60,69,213,83,187,89,17,14,
    242,176,89,52,199,176,57,209,78,137,218,144,104,231,176,1,
    121,243,182,160,223,101,12,58,44,252,39,229,246,151,132,202,
    207,221,88,20,187,70,84,104,27,98,102,55,47,194,17,209,
    206,243,190,79,202,237,79,35,63,119,99,92,236,14,8,58,
    219,246,0,6,166,213,200,155,3,114,249,230,7,76,203,39,
    180,15,8,61,180,12,41,106,99,76,147,140,182,114,9,252,
    89,226,227,246,137,71,1,142,251,250,153,16,60,168,4,72,
    143,5,56,249,226,245,230,83,197,210,56,229,76,192,63,4,
    173,210,180,26,78,136,14,190,19,66,32,130,173,85,30,168,
    101,133,27,161,129,22,149,106,221,10,130,74,37,204,113,9,
    29,168,48,70,5,219,11,43,85,223,177,66,135,218,108,5,
    161,227,51,82,42,45,2,65,192,163,108,58,59,65,152,143,
    105,21,223,89,11,120,150,117,39,228,250,37,175,233,132,195,
    189,67,53,61,219,225,185,44,219,86,5,94,70,117,195,173,
    219,190,211,52,25,90,35,7,251,4,97,33,234,68,123,88,
    247,173,214,70,169,16,195,50,112,27,75,241,72,85,171,94,
    231,106,62,128,186,181,234,212,153,190,182,85,175,87,120,219,
    232,17,111,8,53,188,118,62,168,84,84,10,135,146,14,73,
    93,167,37,102,194,42,171,60,3,47,156,119,237,173,214,74,
    56,121,78,130,207,83,50,187,225,53,156,217,91,65,227,145,
    217,170,183,229,7,206,109,207,223,156,157,191,56,127,238,236,
    217,217,117,167,113,174,210,176,176,140,217,192,175,206,182,118,
    194,13,175,57,219,56,55,187,21,186,245,89,108,255,182,239,
    82,237,153,214,142,9,145,93,192,176,60,184,44,72,67,51,
    228,17,237,168,62,166,31,146,147,84,30,146,99,114,66,55,
    228,136,28,164,210,160,156,208,38,52,22,204,1,250,102,99,
    193,124,152,214,189,253,59,6,44,75,34,75,204,59,16,72,
    144,88,38,219,90,44,49,58,75,137,146,152,17,224,137,4,
    17,218,69,53,206,198,18,155,2,86,137,56,5,169,37,217,
    35,230,66,152,210,177,140,102,4,157,29,141,68,64,161,81,
    253,239,137,112,128,27,72,110,163,139,189,20,65,255,61,177,
    253,16,10,181,2,45,104,70,64,38,187,91,101,85,171,31,
    139,229,155,35,130,126,89,22,7,133,127,58,150,197,65,37,
    139,185,168,64,130,59,67,130,73,124,36,169,132,44,78,179,
    44,26,74,22,73,72,135,89,238,164,146,187,255,208,176,239,
    51,205,72,104,239,179,44,178,248,129,183,75,145,212,153,96,
    121,9,240,52,7,145,0,40,38,16,110,50,13,234,211,196,
    105,155,64,184,9,204,152,16,37,22,18,55,112,155,65,104,
    53,171,142,201,106,183,16,129,28,152,118,236,117,37,21,78,
    221,105,56,205,48,48,39,208,247,94,194,128,166,65,9,108,
    53,167,144,76,35,57,138,228,19,72,14,35,249,36,146,7,
    208,25,35,180,204,34,202,15,34,57,22,3,180,31,40,61,
    5,217,199,176,199,24,165,10,153,71,128,77,109,88,30,210,
    70,228,39,123,16,90,77,69,70,35,49,28,175,8,214,238,
    53,54,168,155,132,150,21,236,128,128,25,89,10,29,8,37,
    99,65,86,97,143,237,240,84,68,34,19,17,97,81,2,154,
    33,219,3,2,160,82,173,208,164,49,55,211,172,76,161,200,
    22,207,151,175,204,155,221,140,229,211,58,83,202,199,214,205,
    247,234,78,135,157,74,61,56,145,26,36,157,67,2,207,44,
    230,10,86,18,177,94,99,118,98,196,214,14,157,16,215,207,
    19,137,39,239,226,26,216,196,125,48,234,229,88,241,160,208,
    81,60,125,99,214,9,26,237,171,24,54,199,204,26,38,166,
    28,151,85,61,82,23,19,49,75,254,172,120,74,218,96,123,
    45,50,234,53,102,201,30,91,247,185,27,151,248,216,69,196,
    25,101,183,96,130,211,177,238,56,202,124,203,176,241,230,90,
    226,237,148,234,64,229,25,178,221,52,212,20,27,218,163,130,
    126,151,137,217,53,86,25,24,41,3,225,129,37,151,64,0,
    177,220,102,205,66,222,20,249,81,109,184,6,89,250,230,224,
    67,193,123,26,128,195,68,162,165,124,15,242,153,200,85,34,
    39,137,220,35,242,138,168,118,79,26,229,210,24,75,52,152,
    113,234,248,227,103,159,142,114,103,31,126,154,121,22,108,88,
    45,135,173,196,162,239,84,61,223,54,103,98,67,19,122,94,
    61,116,91,202,234,170,198,225,78,221,9,32,247,199,124,111,
    171,105,59,246,233,226,154,91,175,59,182,170,175,122,117,207,
    15,208,247,248,195,252,81,198,136,90,112,13,115,127,205,107,
    134,12,31,116,56,239,187,86,61,33,7,238,171,202,126,159,
    125,76,117,36,26,119,44,65,253,40,32,210,40,142,205,203,
    35,251,230,91,141,128,181,146,34,220,178,234,91,78,208,81,
    78,220,195,106,181,156,166,178,89,65,232,115,67,183,233,86,
    144,7,82,107,158,219,52,103,227,33,46,70,150,114,40,210,
    66,235,78,179,130,21,108,249,165,108,130,102,86,58,124,74,
    3,157,193,220,230,122,160,132,0,171,226,28,47,199,60,215,
    79,29,4,173,250,13,12,11,124,11,45,35,143,146,101,44,
    104,227,242,168,54,76,37,245,51,196,105,129,83,134,60,190,
    99,49,228,97,104,67,134,121,91,70,22,207,86,134,145,209,
    167,160,71,144,11,217,18,210,57,146,138,233,134,159,205,62,
    254,158,204,149,75,56,181,37,243,81,28,207,99,241,25,153,
    143,99,121,247,132,140,249,89,84,117,161,197,124,2,29,158,
    68,242,20,146,167,145,60,131,228,115,56,63,176,75,177,74,
    185,91,182,99,46,196,165,43,254,150,195,182,107,31,139,250,
    118,242,56,191,31,98,216,9,86,40,153,174,159,97,78,25,
    213,88,228,149,157,150,83,21,209,7,178,116,1,199,126,154,
    50,142,136,162,50,196,99,20,195,112,140,64,193,24,157,63,
    5,99,116,254,43,25,176,128,2,49,83,249,197,46,134,112,
    49,134,11,49,113,177,97,23,219,119,217,82,179,25,6,38,
    149,155,90,105,120,246,86,29,14,46,218,149,95,46,243,223,
    139,151,95,226,19,187,118,225,188,201,132,197,249,69,254,59,
    55,127,149,97,123,233,202,11,243,102,231,220,250,113,120,47,
    210,104,63,199,176,192,111,247,209,85,101,116,70,122,12,207,
    247,68,28,93,41,219,88,99,0,146,154,13,217,48,150,233,
    220,72,204,85,29,233,192,205,140,240,23,123,59,100,185,195,
    34,119,200,81,7,237,64,135,215,122,59,24,220,225,53,238,
    144,23,229,158,186,1,174,123,155,235,10,251,234,6,185,238,
    93,174,27,162,186,20,2,165,114,199,171,98,13,115,193,10,
    28,176,0,250,237,178,235,205,57,183,220,170,163,124,172,227,
    216,42,248,218,56,199,77,61,142,74,3,214,98,101,138,61,
    156,6,31,156,185,36,88,14,73,67,185,190,121,5,148,75,
    72,94,66,130,104,136,145,135,121,174,93,176,124,243,50,40,
    144,204,243,171,164,166,172,106,184,232,52,60,127,199,252,34,
    154,151,193,96,25,139,77,191,248,29,66,125,147,143,192,209,
    68,37,36,121,248,37,230,56,204,2,49,41,179,250,36,82,
    25,167,252,213,14,66,225,150,80,167,205,202,10,254,210,56,
    66,253,114,68,210,152,116,10,87,10,49,73,103,210,147,194,
    158,76,72,41,38,189,40,236,67,9,41,205,164,138,176,167,
    18,82,134,73,190,176,167,35,254,65,149,44,185,255,128,164,
    253,19,201,93,36,191,65,242,123,36,127,67,226,33,217,65,
    242,109,36,240,238,220,151,145,92,67,242,7,36,63,69,242,
    93,36,191,70,242,46,18,200,1,227,99,223,240,138,214,59,
    135,162,245,78,164,104,189,179,41,90,239,148,138,182,111,94,
    54,106,9,168,20,142,0,24,133,14,179,7,34,12,171,102,
    164,208,250,6,149,225,8,42,64,73,100,122,255,132,89,166,
    25,44,195,50,117,240,171,66,63,8,20,212,151,14,168,164,
    187,239,100,162,128,143,2,163,135,58,62,29,232,58,110,105,
    212,229,204,46,155,188,182,66,204,207,160,141,223,140,91,226,
    222,101,22,206,155,223,230,238,236,213,69,45,219,226,91,124,
    143,54,245,38,87,168,214,55,151,196,50,9,127,228,210,165,
    17,76,190,65,206,12,187,116,223,228,96,145,244,196,117,14,
    22,41,244,163,48,174,121,4,58,163,173,117,156,201,238,90,
    50,203,254,135,24,132,12,194,29,1,47,16,119,55,57,177,
    166,31,24,135,93,158,164,1,197,8,81,4,208,177,27,137,
    84,129,62,142,163,154,73,164,138,54,173,118,115,100,218,230,
    177,39,202,108,115,151,184,39,66,29,250,28,125,126,253,81,
    254,252,229,57,133,10,192,170,97,109,171,2,146,40,139,9,
    108,167,21,110,244,3,37,128,226,51,117,171,177,106,91,207,
    126,136,225,69,247,222,0,135,114,49,114,246,105,87,180,61,
    218,10,168,75,235,111,127,31,159,127,61,167,0,204,170,239,
    203,125,84,125,230,42,141,246,239,120,133,74,222,174,139,216,
    97,37,95,145,194,95,37,128,144,51,243,149,206,137,182,146,
    187,36,127,125,181,18,122,149,141,176,81,47,113,144,13,93,
    29,221,99,114,28,101,68,130,201,66,195,78,169,26,88,149,
    51,73,153,171,184,161,18,44,102,151,74,215,57,93,237,58,
    21,235,227,63,11,120,107,127,23,113,196,156,42,72,131,98,
    101,35,93,32,79,213,208,142,200,60,98,101,253,132,86,144,
    195,169,140,124,72,75,124,85,128,144,45,192,104,194,79,92,
    149,104,16,129,67,17,99,3,216,152,227,39,207,60,178,29,
    127,213,94,216,39,220,68,82,71,210,232,39,175,29,224,143,
    14,143,163,108,33,89,45,97,237,137,175,253,150,90,127,162,
    153,166,160,58,66,222,13,151,164,186,247,85,151,0,28,255,
    161,146,245,2,2,254,131,85,34,174,210,1,155,26,43,157,
    196,105,135,15,159,59,224,171,119,71,136,99,42,72,36,215,
    125,156,207,176,115,191,122,189,248,212,245,98,247,109,193,61,
    221,122,228,246,187,245,167,139,182,21,108,220,215,189,15,0,
    214,227,231,23,46,62,113,126,225,137,133,251,59,251,60,231,
    5,209,115,195,4,223,223,156,23,81,40,160,34,206,138,237,
    69,209,22,114,106,109,135,251,200,228,228,178,24,55,31,213,
    250,38,102,181,220,102,70,38,14,205,49,121,132,126,50,7,
    126,170,113,216,149,92,80,254,81,59,248,114,160,119,189,28,
    232,247,127,57,72,241,203,129,126,207,151,3,61,126,57,80,
    54,72,135,77,185,215,203,65,166,235,229,32,19,223,131,102,
    97,60,58,47,7,41,245,114,64,67,147,125,137,94,14,114,
    104,142,97,13,152,170,90,124,237,24,191,28,144,177,217,205,
    71,207,4,254,91,218,246,59,50,126,63,248,137,220,29,136,
    223,15,6,196,204,110,129,223,15,10,188,251,191,202,237,215,
    101,27,23,162,191,21,187,131,98,231,152,104,15,138,218,40,
    160,12,171,72,147,12,113,49,203,197,97,177,220,60,37,82,
    196,140,205,188,240,45,73,31,66,251,193,86,120,147,34,82,
    155,157,195,224,85,73,121,236,141,44,247,119,100,56,142,41,
    146,171,91,121,115,20,213,237,188,216,204,10,255,23,50,156,
    192,96,237,97,62,21,90,38,191,116,16,229,153,102,62,202,
    205,16,57,26,100,4,229,104,144,229,155,119,121,249,133,143,
    186,252,162,246,209,150,255,164,214,89,254,139,26,102,46,116,
    47,255,174,232,44,63,212,62,250,242,11,221,203,191,203,55,
    193,219,15,168,167,156,41,177,59,202,60,158,228,62,163,98,
    134,249,252,3,109,25,55,143,147,236,202,196,239,54,28,238,
    154,16,204,110,181,177,255,201,134,35,211,142,216,112,96,114,
    203,171,135,214,186,19,145,74,135,68,244,168,99,102,122,197,
    159,109,31,250,115,140,203,119,31,247,191,151,134,160,153,252,
    62,212,185,91,70,183,74,133,188,75,43,12,125,10,139,57,
    42,162,172,187,186,21,58,243,190,79,182,116,82,244,92,63,
    219,183,214,2,245,32,99,182,48,12,214,198,23,106,157,123,
    77,182,175,106,233,29,237,99,30,17,61,247,212,157,43,106,
    190,7,199,168,170,75,176,239,182,218,108,34,241,122,90,198,
    207,55,208,31,155,206,78,223,204,215,22,141,118,8,122,108,
    149,245,216,253,158,93,50,93,215,218,58,121,224,227,114,80,
    195,165,71,74,155,150,227,48,222,84,206,203,41,237,255,213,
    13,202,73,101,222,123,46,196,127,36,88,31,6,121,190,188,
    86,113,94,114,35,101,67,247,105,74,39,170,103,81,60,93,
    132,122,119,33,21,233,65,229,29,0,249,172,2,107,241,93,
    172,220,57,197,101,126,242,132,230,4,13,4,131,9,25,69,
    88,110,78,224,85,155,160,106,103,227,231,74,126,220,78,96,
    206,40,230,119,55,229,98,1,163,182,171,30,226,144,247,173,
    230,102,224,180,2,236,240,236,153,71,3,72,197,153,224,214,
    186,202,180,236,181,224,36,101,214,44,151,236,101,49,244,138,
    235,78,211,241,9,111,69,98,72,209,219,10,91,91,97,113,
    205,247,26,197,147,209,219,7,223,122,241,37,141,23,242,243,
    24,191,62,240,101,129,23,40,193,152,139,77,34,51,148,125,
    66,206,85,104,222,174,18,77,110,234,137,129,77,197,0,166,
    73,109,215,103,9,161,53,44,208,194,112,71,171,0,30,63,
    221,172,69,212,190,153,86,37,73,36,25,225,43,50,9,249,
    50,50,149,158,38,168,17,100,0,56,125,148,254,234,242,32,
    120,126,213,3,158,157,107,162,31,248,89,110,142,49,52,114,
    64,79,172,250,174,69,168,234,1,17,8,252,216,141,27,251,
    110,84,229,224,148,237,71,149,193,202,243,85,176,228,43,72,
    218,56,220,24,61,159,161,191,11,247,198,10,67,174,184,230,
    249,197,185,171,11,229,98,164,83,62,30,188,153,187,72,182,
    98,176,153,175,37,58,24,80,51,241,154,194,72,50,191,134,
    228,245,30,76,153,95,71,178,7,150,24,145,26,227,165,154,
    119,68,31,93,179,129,8,63,74,189,134,62,64,84,140,65,
    148,210,101,12,163,81,2,80,94,166,181,24,76,106,65,172,
    178,175,38,59,205,198,208,111,156,59,147,252,139,136,178,75,
    50,222,23,85,69,143,16,252,198,153,85,36,172,76,157,204,
    108,44,147,11,86,61,112,58,130,203,207,81,202,128,177,49,
    225,0,16,97,33,7,128,28,39,113,48,161,140,206,104,194,
    7,92,245,155,111,244,28,97,223,162,107,117,121,252,44,60,
    242,224,83,148,156,144,135,72,237,143,208,113,225,155,215,141,
    7,141,105,35,99,204,24,35,227,134,49,105,140,22,78,24,
    105,99,164,240,130,49,241,63,142,125,27,13,
};

EmbeddedPython embedded_m5_util_dot_writer(
    "m5/util/dot_writer.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/python/m5/util/dot_writer.py",
    "m5.util.dot_writer",
    data_m5_util_dot_writer,
    3756,
    9365);

} // anonymous namespace