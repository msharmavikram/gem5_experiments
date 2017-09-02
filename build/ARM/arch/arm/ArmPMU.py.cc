#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ArmPMU[] = {
    120,156,181,86,109,111,219,54,16,62,89,142,227,56,78,243,
    182,98,27,48,32,4,246,97,238,176,217,104,129,14,88,49,
    116,75,221,160,8,208,122,134,221,162,157,177,194,208,11,109,
    49,213,91,73,58,137,1,231,83,251,23,246,19,247,101,127,
    98,187,59,73,174,215,125,237,44,139,58,62,60,29,239,158,
    59,146,10,160,252,185,120,255,34,0,204,43,20,66,252,59,
    16,3,36,14,76,28,112,168,95,131,184,6,207,75,201,45,
    36,151,164,164,14,147,250,90,103,11,71,234,32,27,48,115,
    32,220,130,247,0,239,0,126,155,108,67,216,128,113,103,27,
    141,171,191,241,215,113,80,178,77,108,252,133,138,195,179,244,
    178,64,168,249,182,16,247,72,215,12,22,113,60,204,84,106,
    165,182,13,68,78,117,50,124,246,34,168,220,38,131,143,200,
    237,63,80,144,64,222,162,35,147,26,249,63,113,201,35,244,
    77,110,145,171,239,28,152,35,216,128,57,42,160,63,117,114,
    110,210,44,189,156,236,64,216,254,207,191,1,239,27,48,217,
    5,217,134,139,61,144,183,224,98,31,194,109,120,135,102,15,
    24,60,132,16,45,236,48,114,84,33,45,8,119,25,57,134,
    209,184,67,113,140,136,94,179,91,248,127,62,62,125,240,0,
    131,48,251,216,247,116,16,245,60,157,244,242,100,209,141,34,
    142,218,11,195,179,75,153,218,161,206,124,25,16,25,117,188,
    183,240,238,83,168,67,20,174,127,132,21,192,5,192,227,215,
    93,248,221,133,27,7,110,106,112,227,50,234,16,231,23,53,
    88,57,176,170,149,221,21,18,224,130,243,182,5,47,63,168,
    184,212,82,230,198,76,249,160,67,243,216,219,216,76,67,57,
    147,90,203,112,42,201,147,169,93,230,210,88,10,96,46,109,
    191,255,171,127,33,3,59,98,245,67,108,180,156,179,179,79,
    149,177,50,149,218,20,150,168,49,50,158,113,162,11,67,42,
    180,196,69,230,95,240,104,234,37,178,67,137,228,198,252,140,
    77,47,202,18,217,187,52,201,189,94,144,45,180,145,87,153,
    126,211,59,235,159,221,191,123,183,55,151,201,253,105,226,225,
    44,186,103,116,208,91,211,87,212,69,55,95,142,168,36,200,
    142,161,114,1,231,75,231,235,90,224,150,252,209,253,132,56,
    124,136,194,138,171,228,77,19,244,1,9,227,235,111,136,165,
    199,175,79,224,166,94,242,184,38,113,85,135,25,151,144,243,
    246,115,120,73,218,157,26,205,241,3,165,52,12,133,39,114,
    138,255,123,223,51,50,20,28,170,176,153,176,145,20,232,150,
    80,51,129,17,11,101,68,154,89,49,200,82,217,29,116,220,
    138,34,234,143,200,53,174,112,47,207,101,26,118,168,63,34,
    222,70,59,212,180,42,101,79,207,205,104,183,98,236,211,209,
    70,182,207,200,88,147,183,131,182,83,175,237,57,1,145,217,
    220,44,190,191,136,56,7,244,9,88,22,168,146,28,104,99,
    191,232,164,184,232,142,225,102,155,9,116,137,87,162,185,198,
    197,87,66,46,209,252,111,168,78,111,227,66,220,128,26,12,
    109,111,66,77,134,118,54,161,22,67,187,155,80,27,86,184,
    186,247,54,161,91,172,181,191,9,29,176,214,225,38,116,84,
    58,65,147,210,134,118,140,73,254,140,24,249,211,41,147,140,
    172,41,139,133,95,165,216,108,228,184,219,106,137,242,247,60,
    194,68,39,210,70,89,40,2,47,21,190,196,71,28,227,91,
    201,34,182,42,143,165,176,42,145,70,92,41,27,137,44,141,
    151,88,63,102,225,27,105,69,54,91,155,33,195,111,228,18,
    243,72,83,207,23,9,207,136,74,221,98,6,153,122,126,140,
    86,138,106,195,37,136,139,79,123,86,101,169,80,233,218,74,
    144,165,51,53,95,148,3,38,208,42,47,252,142,184,208,68,
    16,103,70,234,42,16,149,26,235,165,86,21,218,31,57,67,
    131,154,221,192,80,50,222,2,140,232,200,238,188,251,29,143,
    39,50,201,244,82,152,37,214,89,114,135,213,165,23,110,90,
    241,68,128,111,107,47,22,57,237,233,27,156,245,135,47,42,
    78,77,148,45,98,12,57,54,25,81,87,4,38,53,205,153,
    6,82,228,232,45,105,219,200,179,184,162,214,22,76,228,105,
    149,206,215,107,174,116,236,42,194,32,13,50,141,185,195,81,
    95,218,43,137,8,89,72,178,80,198,230,78,119,109,66,209,
    154,182,84,243,35,57,83,113,108,20,213,189,162,85,105,219,
    140,90,133,126,60,205,188,208,168,237,234,144,42,209,177,205,
    180,52,170,249,145,242,57,178,96,20,1,118,255,3,250,72,
    123,105,16,161,250,65,181,236,159,41,99,176,127,88,245,251,
    203,0,147,171,142,170,115,114,253,198,241,122,167,30,177,187,
    180,51,248,60,56,68,195,35,158,154,70,59,205,106,7,225,
    29,55,200,23,252,84,214,231,103,136,79,154,71,5,30,154,
    101,49,44,68,10,44,190,87,200,20,191,159,163,221,79,187,
    219,84,199,220,41,142,240,81,103,6,100,249,11,178,127,120,
    226,52,220,99,247,216,225,171,142,23,75,6,119,31,24,198,
    158,157,101,58,193,36,227,2,8,229,165,194,130,64,41,247,
    52,45,157,174,58,33,51,164,57,88,36,62,22,74,54,195,
    133,149,231,153,166,146,165,170,64,111,233,91,194,168,199,213,
    132,132,62,57,239,11,254,198,208,139,220,138,148,223,29,240,
    226,103,238,167,83,58,167,166,83,230,122,58,197,186,89,196,
    212,229,67,14,79,70,75,91,116,112,125,61,13,98,207,24,
    214,162,94,132,213,143,159,45,148,145,225,242,145,74,195,103,
    188,39,240,49,74,227,242,154,28,51,188,245,243,177,197,121,
    43,50,72,129,48,251,67,79,123,9,123,81,5,207,185,66,
    24,105,227,76,122,233,146,199,243,106,156,192,115,28,220,171,
    78,221,126,25,52,187,130,31,26,231,85,168,31,178,250,233,
    14,18,154,189,75,198,190,194,166,225,240,229,238,55,27,238,
    78,99,167,229,114,191,125,122,219,57,114,6,92,161,204,86,
    114,191,139,31,28,42,149,102,4,213,250,65,108,172,146,226,
    75,131,9,70,32,39,50,76,81,247,205,18,210,217,245,146,
    199,215,218,236,194,255,16,26,79,249,83,145,253,135,100,213,
    144,239,7,78,11,47,108,107,255,0,55,253,156,185,
};

EmbeddedPython embedded_m5_objects_ArmPMU(
    "m5/objects/ArmPMU.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/arch/arm/ArmPMU.py",
    "m5.objects.ArmPMU",
    data_m5_objects_ArmPMU,
    1406,
    2893);

} // anonymous namespace