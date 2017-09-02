#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_System[] = {
    120,156,173,87,109,115,19,55,16,214,217,33,137,77,32,33,
    36,225,181,32,8,33,134,66,12,148,208,14,195,80,74,8,
    211,12,132,102,156,151,105,243,229,230,124,146,109,37,119,210,
    205,73,118,226,126,165,255,155,238,174,108,231,96,154,210,206,
    16,219,103,233,209,106,223,180,207,90,137,217,224,175,12,159,
    87,156,49,155,195,64,192,59,96,9,99,59,56,42,177,36,
    96,105,137,237,151,88,48,88,41,251,21,24,141,141,70,103,
    70,163,113,24,149,153,156,96,173,128,137,49,246,23,99,31,
    25,251,99,127,146,137,51,76,86,8,29,31,161,85,38,38,
    216,118,109,18,204,170,79,240,87,11,96,228,240,113,223,15,
    113,165,217,85,137,88,215,61,87,133,201,166,76,77,222,223,
    52,66,198,67,239,199,224,243,26,189,191,10,3,201,216,126,
    48,136,1,156,7,87,218,99,232,124,99,187,134,114,110,2,
    77,233,94,148,40,225,198,97,28,57,147,170,152,134,78,165,
    74,183,221,133,17,26,106,163,227,40,238,0,90,43,15,189,
    9,67,29,165,50,12,201,155,48,76,141,232,38,56,69,237,
    160,214,214,208,165,147,135,125,14,143,122,199,164,178,222,179,
    233,147,122,108,186,185,149,71,38,63,172,175,175,173,175,62,
    126,92,111,203,116,53,76,35,235,100,94,183,121,92,183,42,
    173,111,247,97,154,174,100,253,70,9,182,47,163,30,212,63,
    206,42,1,185,234,215,71,25,40,15,51,176,84,42,100,0,
    162,134,36,236,195,97,140,97,42,62,194,24,142,96,28,115,
    2,99,28,140,225,160,13,135,59,193,228,36,59,168,48,89,
    101,7,103,241,164,62,2,56,197,228,57,118,112,30,207,11,
    78,9,145,105,66,102,152,188,192,196,36,33,179,180,241,34,
    107,67,194,43,132,204,145,204,60,147,11,76,84,9,185,68,
    50,151,73,230,44,33,87,72,230,42,19,83,76,156,35,228,
    90,97,215,121,66,174,19,242,29,19,211,76,204,16,114,99,
    136,128,245,89,66,110,22,100,46,18,194,9,185,197,196,28,
    19,243,132,220,46,32,11,132,44,22,144,75,132,220,41,32,
    151,9,89,42,32,87,8,185,75,200,50,33,87,9,169,17,
    114,143,137,107,76,92,39,228,254,16,1,151,110,16,242,253,
    48,174,7,76,220,36,228,97,65,134,19,178,82,64,110,17,
    82,31,218,186,205,196,34,33,143,10,214,239,16,242,184,144,
    177,37,66,158,48,249,3,210,106,255,41,147,171,76,220,101,
    87,242,197,18,10,61,163,3,91,38,161,31,153,102,72,6,
    44,206,6,150,176,61,135,15,168,57,235,107,174,211,177,103,
    71,21,198,51,147,59,135,18,109,233,78,168,71,136,45,34,
    196,189,95,146,132,167,8,41,105,185,210,220,117,36,247,90,
    27,88,189,22,42,148,237,0,6,156,145,180,72,194,253,129,
    12,87,184,137,220,1,161,60,141,18,18,76,236,42,170,230,
    177,73,18,25,59,101,52,55,45,30,129,41,55,144,138,77,
    154,25,45,181,251,194,232,138,125,8,59,211,52,202,8,108,
    70,241,33,48,153,91,103,114,201,143,148,235,152,174,227,185,
    180,50,239,17,126,20,101,246,54,166,37,210,109,8,192,117,
    34,7,186,181,117,202,117,29,56,27,129,118,239,177,122,133,
    225,92,134,199,26,180,7,201,19,165,193,168,250,83,162,3,
    205,190,147,214,190,133,197,245,99,229,120,43,55,169,119,74,
    165,221,36,162,0,18,99,50,126,212,145,154,75,13,13,65,
    3,245,209,3,236,10,92,97,42,34,173,141,35,89,187,66,
    141,209,206,163,197,76,198,170,165,226,130,160,18,106,6,87,
    208,239,15,221,180,41,115,204,142,80,224,180,142,93,65,208,
    245,51,240,234,17,136,17,102,93,148,59,41,56,56,51,210,
    170,196,3,174,205,17,151,232,246,137,183,138,218,216,75,120,
    196,185,140,32,17,16,113,124,152,25,165,157,143,97,100,196,
    242,166,108,67,6,40,36,14,205,176,43,241,80,97,23,108,
    17,246,5,182,231,207,117,255,127,5,95,247,65,106,113,154,
    130,231,255,193,131,127,217,254,211,233,246,35,168,204,30,192,
    89,247,180,205,119,97,179,238,166,112,210,49,212,172,95,118,
    134,103,145,197,178,133,209,192,39,32,28,254,242,69,196,150,
    166,49,80,65,73,212,182,35,89,248,198,106,58,148,185,150,
    137,99,195,195,111,169,68,142,74,214,65,169,218,130,24,96,
    64,81,140,30,156,69,218,160,150,72,8,40,126,235,67,193,
    66,24,200,214,160,122,162,38,104,107,153,28,72,147,203,84,
    186,40,185,71,254,120,43,6,131,18,190,134,186,25,183,113,
    174,50,95,232,246,122,65,8,90,198,128,141,105,211,36,150,
    4,54,176,152,63,161,211,75,200,234,129,11,32,12,63,128,
    135,192,139,72,32,17,154,74,71,212,68,144,165,118,249,115,
    73,211,106,65,235,57,69,22,143,104,187,155,97,219,178,28,
    242,233,212,67,215,65,111,161,214,215,182,118,237,207,124,35,
    205,224,176,44,223,33,184,190,6,217,146,199,142,111,188,177,
    116,55,216,221,94,15,223,237,109,218,69,24,195,55,135,119,
    77,173,200,149,7,220,118,32,23,98,216,179,132,193,126,112,
    175,134,6,27,184,177,129,151,3,186,5,32,213,232,118,16,
    31,31,135,29,180,157,251,171,11,253,198,111,97,71,197,14,
    235,155,84,72,29,118,10,230,91,253,215,74,139,77,56,31,
    35,72,0,183,203,99,10,133,230,123,208,254,76,190,21,229,
    81,234,206,99,78,154,214,229,16,139,239,194,100,122,91,38,
    45,135,183,1,232,143,116,91,25,182,99,119,6,45,224,86,
    186,81,12,215,240,250,34,201,250,160,229,98,47,79,72,213,
    135,221,247,239,169,207,15,218,44,137,38,174,130,86,84,250,
    91,243,0,188,113,179,133,245,147,54,76,251,95,27,147,144,
    213,183,112,41,146,110,110,208,138,195,174,133,83,131,155,149,
    111,188,146,20,226,233,82,215,165,60,161,95,57,245,96,114,
    115,87,91,213,214,82,184,105,204,9,146,41,196,126,27,98,
    191,37,7,144,209,161,209,33,146,56,36,18,83,10,54,180,
    207,235,8,14,225,202,55,229,89,56,144,21,214,45,12,37,
    168,243,132,64,96,128,67,84,73,229,176,230,187,179,155,255,
    66,236,48,115,33,17,253,203,21,114,198,175,92,28,174,64,
    75,41,238,248,12,47,200,207,13,113,112,194,22,55,224,141,
    111,23,194,121,246,148,242,163,52,108,201,168,12,232,46,232,
    240,199,131,34,195,118,17,26,75,13,131,214,6,93,2,207,
    99,39,239,74,186,219,122,44,68,250,135,196,125,202,50,146,
    1,137,75,22,60,99,105,138,133,134,84,243,242,200,82,170,
    69,130,60,19,201,50,81,45,244,84,35,129,55,123,111,183,
    127,141,180,72,32,121,40,32,122,45,27,118,60,208,160,171,
    61,214,198,187,94,186,183,233,61,237,165,97,47,253,198,151,
    103,140,229,62,234,249,29,47,207,1,190,166,202,149,96,186,
    60,21,84,130,217,210,44,60,43,227,179,227,48,194,87,64,
    243,127,122,209,154,95,29,125,151,224,57,86,41,85,131,15,
    53,140,215,103,97,117,229,132,27,85,15,8,217,130,106,181,
    62,230,138,199,232,240,124,117,227,44,55,199,253,198,171,161,
    18,208,144,37,178,64,234,117,40,88,207,90,220,14,11,222,
    0,69,247,109,19,70,30,189,240,255,210,188,188,137,250,240,
    248,171,193,76,80,13,170,37,252,44,148,255,6,211,250,212,
    21,
};

EmbeddedPython embedded_m5_objects_System(
    "m5/objects/System.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/sim/System.py",
    "m5.objects.System",
    data_m5_objects_System,
    1681,
    3637);

} // anonymous namespace