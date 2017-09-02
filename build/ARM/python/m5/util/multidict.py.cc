#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_multidict[] = {
    120,156,205,88,219,110,219,70,16,157,93,234,126,247,61,74,
    210,196,73,155,86,69,129,8,113,107,180,104,46,13,18,167,
    14,154,192,72,232,162,78,141,38,4,45,174,101,217,18,37,
    147,116,98,3,246,75,29,160,79,253,142,62,244,47,250,101,
    157,25,114,41,74,118,242,208,66,65,44,115,117,184,90,45,
    231,204,153,25,13,217,130,232,47,133,199,253,69,0,255,111,
    1,224,0,180,5,108,50,80,2,182,5,56,2,222,2,156,
    2,252,186,41,65,25,224,72,216,147,224,253,37,148,164,217,
    205,20,32,80,41,56,197,175,165,25,167,25,103,24,103,24,
    103,193,49,104,141,147,130,59,78,154,81,6,81,150,81,14,
    81,158,81,1,81,145,81,9,81,153,118,162,111,208,91,6,
    238,58,21,158,192,229,225,78,119,241,108,55,7,78,149,46,
    116,42,65,56,53,88,197,143,118,243,100,215,234,99,103,10,
    79,211,241,105,120,209,122,8,114,26,20,52,40,49,224,11,
    70,32,167,65,65,3,94,115,88,39,51,118,11,180,235,202,
    203,34,108,162,197,69,220,127,191,41,54,232,131,18,56,211,
    224,204,176,69,209,121,6,156,217,248,60,199,231,115,225,121,
    10,120,103,30,202,56,150,35,239,161,245,243,224,44,128,115,
    1,156,58,180,83,228,72,118,69,22,63,114,81,157,139,176,
    222,184,132,194,5,121,28,122,7,221,160,227,116,90,65,75,
    107,42,241,120,64,154,254,131,64,161,74,2,58,172,233,91,
    84,67,70,154,110,178,152,111,89,67,212,135,0,243,39,128,
    151,75,51,200,146,185,4,208,238,44,131,60,185,134,64,1,
    80,55,2,69,242,17,1,228,90,100,80,38,103,17,168,0,
    234,72,160,10,168,31,129,26,41,70,96,138,188,130,154,145,
    73,51,128,106,209,228,44,121,143,192,28,249,144,192,60,152,
    235,141,57,164,209,34,82,70,68,238,9,145,187,65,14,0,
    56,150,240,39,142,0,150,128,99,193,64,18,93,2,6,145,
    94,111,96,100,195,90,131,34,61,160,129,124,21,164,17,116,
    251,45,187,27,100,16,13,108,79,185,65,144,165,79,85,87,
    5,202,105,24,122,185,175,186,219,38,159,209,202,189,55,182,
    215,246,27,228,102,30,252,199,56,52,119,250,61,213,124,237,
    247,150,154,173,254,129,231,171,55,125,111,175,249,232,225,163,
    229,91,183,154,109,213,91,182,122,182,31,40,175,233,123,173,
    230,224,40,216,233,187,205,222,114,243,32,232,116,155,177,124,
    55,241,131,28,110,102,89,29,183,19,88,214,34,237,78,151,
    4,81,21,121,209,34,22,34,114,194,67,114,192,124,232,128,
    128,73,239,114,62,98,240,224,191,102,204,70,211,224,7,158,
    73,83,204,186,19,168,158,207,43,204,180,102,49,1,42,89,
    166,130,87,182,44,82,202,151,204,36,102,33,53,139,169,72,
    70,164,32,34,10,101,77,128,22,177,225,38,5,250,228,109,
    14,221,239,169,1,26,221,72,24,45,35,131,99,163,175,67,
    104,49,27,125,204,78,31,92,139,100,136,103,146,50,152,244,
    85,246,201,142,237,91,123,234,136,35,42,36,152,214,50,225,
    244,164,152,149,152,89,171,239,6,118,199,245,45,235,171,49,
    118,116,249,180,102,247,12,193,81,37,34,136,92,238,110,184,
    183,33,133,113,182,87,0,239,9,136,19,44,94,199,58,234,
    246,50,224,253,64,246,211,105,138,150,223,217,127,202,65,41,
    225,119,9,174,128,23,137,36,76,199,190,32,95,63,81,71,
    143,60,175,239,153,113,178,253,236,29,40,147,64,232,53,94,
    94,6,14,114,44,101,147,242,78,145,189,131,153,79,185,97,
    89,55,233,2,37,118,142,33,42,152,125,85,81,147,45,35,
    114,83,156,127,159,141,5,65,16,254,16,33,111,154,53,216,
    21,99,245,135,169,177,214,131,254,128,179,241,71,187,235,43,
    246,200,56,99,66,175,237,238,193,132,89,251,42,8,89,127,
    75,23,72,49,235,153,115,130,98,139,130,162,58,12,138,250,
    250,134,251,52,142,138,151,81,84,132,25,192,220,81,79,116,
    71,201,123,30,149,229,221,52,199,202,243,8,243,22,239,10,
    147,140,14,19,179,58,226,181,182,10,204,89,154,49,206,58,
    204,156,154,96,101,8,125,213,214,190,186,157,140,16,138,143,
    27,162,40,207,86,232,139,35,181,77,104,44,9,47,156,169,
    210,93,229,134,156,141,15,82,236,194,2,141,23,181,172,21,
    24,45,208,58,204,91,68,226,15,4,135,141,97,164,115,231,
    179,0,191,73,56,17,128,162,31,179,134,219,18,126,17,251,
    53,216,8,9,122,167,112,248,20,226,112,224,239,124,55,250,
    29,222,111,47,11,222,138,62,77,37,78,245,142,43,128,255,
    27,46,192,121,69,132,127,22,134,197,195,85,135,193,121,197,
    195,156,155,156,27,77,234,195,86,135,225,112,89,84,101,30,
    199,43,231,252,106,20,0,34,170,152,8,154,12,155,37,71,
    236,157,148,169,100,225,179,49,169,181,129,44,245,34,73,93,
    143,164,137,58,220,19,174,109,168,68,25,54,18,26,112,120,
    94,26,177,157,53,160,252,152,84,196,230,195,253,61,238,96,
    214,71,202,149,166,18,167,222,39,84,45,32,73,165,20,81,
    121,37,1,185,188,135,135,121,121,130,26,16,135,141,247,165,
    219,231,164,193,213,164,225,83,35,121,243,30,37,62,92,212,
    243,175,55,73,129,45,139,191,57,84,162,62,36,148,210,74,
    124,122,70,137,233,17,66,239,210,227,3,178,33,91,137,201,
    171,255,46,140,252,72,132,41,68,194,112,231,224,219,255,71,
    26,249,49,72,67,157,64,200,69,37,196,209,44,226,238,228,
    11,4,71,37,98,18,181,38,179,216,154,0,183,38,215,177,
    53,49,184,45,91,127,49,174,14,117,23,97,99,54,236,187,
    194,155,192,109,27,173,152,100,75,97,46,224,102,59,180,107,
    142,57,25,162,132,125,68,220,101,198,204,30,141,51,91,138,
    153,221,7,33,68,216,92,236,114,42,97,27,145,232,64,195,
    102,124,156,119,90,243,230,95,74,115,134,6,110,169,206,233,
    65,205,235,19,142,84,108,62,35,87,187,144,232,168,74,162,
    140,69,189,124,78,89,255,158,196,161,39,36,72,16,195,20,
    251,146,128,29,131,141,36,50,247,150,233,153,198,234,49,251,
    3,215,8,234,61,112,217,126,37,74,76,218,103,205,175,64,
    226,169,201,162,115,208,27,112,142,44,226,95,248,148,128,147,
    200,199,27,165,192,118,91,202,4,237,158,241,155,54,110,58,
    250,206,196,58,116,186,136,69,246,189,134,168,125,0,145,22,
    25,49,141,30,226,246,34,149,244,205,171,48,155,79,88,125,
    12,249,195,7,236,28,67,59,231,25,55,31,134,190,105,91,
    161,12,167,86,221,136,162,167,142,93,169,112,249,27,24,59,
    184,193,126,21,219,57,116,246,49,57,115,60,132,232,238,103,
    232,25,206,83,123,48,80,174,19,58,105,52,169,204,107,52,
    220,152,96,52,229,180,171,176,142,159,208,238,21,246,86,134,
    189,85,21,11,24,77,107,13,74,185,232,38,223,181,123,202,
    178,88,105,203,234,245,157,131,46,158,154,148,251,38,205,153,
    212,240,155,180,135,57,77,3,61,107,49,47,208,112,81,87,
    65,110,167,76,234,51,194,54,244,10,13,87,105,88,212,140,
    57,64,214,250,174,226,100,55,169,220,154,244,51,98,54,70,
    60,49,129,226,66,59,146,45,252,164,42,35,74,233,188,193,
    175,124,62,133,135,193,71,106,120,148,50,249,92,62,27,185,
    166,103,119,240,158,128,235,96,160,252,224,150,101,243,221,183,
    157,152,217,226,153,173,196,76,139,103,90,137,25,135,103,156,
    196,140,226,122,26,79,44,89,118,2,135,27,108,243,19,47,
    94,126,47,134,75,247,248,179,54,223,37,109,247,251,252,190,
    101,123,236,222,173,174,189,211,33,186,29,90,211,161,96,236,
    112,154,55,42,250,98,150,101,119,187,200,136,246,235,111,237,
    170,86,16,6,238,151,16,221,102,243,245,98,180,20,163,175,
    99,244,77,40,222,80,104,142,106,86,181,62,97,45,89,149,
    59,97,136,222,163,112,243,127,194,33,47,231,219,37,145,199,
    66,128,47,89,16,209,11,81,22,223,179,178,38,171,124,39,
    194,47,153,15,145,156,193,163,38,107,162,134,101,4,11,137,
    44,202,121,249,47,146,210,160,195,
};

EmbeddedPython embedded_m5_util_multidict(
    "m5/util/multidict.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/python/m5/util/multidict.py",
    "m5.util.multidict",
    data_m5_util_multidict,
    1865,
    6155);

} // anonymous namespace