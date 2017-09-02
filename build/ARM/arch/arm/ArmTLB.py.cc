#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ArmTLB[] = {
    120,156,189,86,75,115,219,70,12,6,245,160,172,151,37,59,
    181,218,38,125,108,123,169,38,7,107,236,25,95,60,157,56,
    113,155,78,61,141,210,12,229,76,38,186,112,40,114,109,81,
    225,67,225,174,106,171,87,247,23,246,15,181,0,40,50,148,
    227,73,122,136,106,217,235,5,22,4,240,1,31,150,114,97,
    245,83,198,191,199,2,64,253,141,27,15,127,13,8,0,66,
    3,198,6,24,36,151,32,40,193,249,106,87,78,119,101,8,
    42,16,86,96,92,65,155,10,200,10,92,24,224,85,225,47,
    128,27,128,215,227,42,120,38,72,131,181,181,92,107,130,183,
    5,178,202,218,122,174,173,129,215,0,105,178,182,153,107,183,
    192,107,101,30,218,185,182,14,222,54,200,58,107,59,185,182,
    1,94,55,211,238,228,218,38,120,187,48,234,223,67,88,254,
    63,248,211,55,112,167,235,184,140,252,240,247,201,76,186,58,
    85,209,242,240,221,233,80,174,78,245,54,74,79,146,240,220,
    153,4,242,149,19,188,145,137,91,172,218,41,85,205,198,141,
    4,42,22,214,101,92,162,242,141,203,84,42,44,13,66,157,
    97,25,106,84,175,27,212,48,248,25,98,168,80,173,72,131,
    192,155,84,170,27,124,170,197,167,109,144,219,48,235,80,217,
    200,160,11,214,168,191,133,49,44,138,168,238,165,25,157,141,
    158,28,31,23,210,82,95,160,222,73,220,233,192,73,194,129,
    166,3,251,138,79,246,167,83,245,3,30,158,41,161,167,190,
    18,49,35,19,23,113,34,148,118,46,165,56,20,58,113,34,
    21,56,218,143,163,19,191,68,81,142,113,121,190,8,39,50,
    17,241,133,136,23,26,77,35,207,143,46,5,57,37,79,142,
    22,174,19,137,137,20,234,237,194,81,83,233,137,57,90,187,
    75,55,144,234,123,124,252,69,156,104,177,80,168,159,44,209,
    94,10,125,21,11,78,76,164,137,41,245,57,133,90,42,45,
    195,44,171,185,147,56,161,212,50,233,239,80,51,8,182,109,
    71,168,178,109,221,96,33,140,189,69,64,98,133,12,150,115,
    201,29,115,175,175,109,55,112,148,98,43,146,166,210,241,100,
    162,171,148,9,57,101,251,211,56,14,88,245,139,19,168,244,
    73,95,217,92,134,67,14,246,50,82,254,101,36,61,253,25,
    10,209,34,180,83,112,54,66,179,25,26,251,31,58,152,115,
    66,0,217,235,156,54,38,177,138,177,240,22,99,202,72,107,
    106,153,19,45,249,63,34,237,19,113,222,45,234,4,151,193,
    52,14,229,224,15,21,30,14,220,120,145,40,121,21,39,111,
    6,79,127,122,122,116,112,48,184,148,225,145,29,114,184,129,
    74,220,65,222,97,34,229,179,211,253,249,146,89,177,79,206,
    186,184,152,70,250,217,53,234,70,221,108,149,56,151,212,246,
    125,226,78,255,11,113,103,91,25,119,235,172,108,20,184,219,
    100,13,178,182,69,243,70,36,70,101,155,149,56,163,119,48,
    120,143,242,108,22,25,252,236,84,117,214,152,27,76,136,176,
    31,96,134,255,152,206,200,29,62,44,148,255,167,100,15,191,
    190,18,231,69,114,245,10,148,119,114,166,227,35,39,76,45,
    139,26,103,17,21,44,42,145,85,163,133,115,36,82,88,108,
    178,75,11,205,155,69,108,224,30,158,69,105,203,41,44,87,
    158,11,156,134,180,136,26,22,161,179,90,107,109,254,116,189,
    166,250,61,34,103,219,133,94,239,97,183,247,12,102,44,90,
    142,152,204,119,93,88,70,214,247,237,188,239,178,68,29,199,
    238,112,154,149,181,186,48,206,243,100,33,55,134,230,75,106,
    27,57,43,49,26,221,90,67,80,96,108,158,249,215,183,24,
    43,203,68,188,148,174,248,110,65,32,100,234,11,74,179,182,
    222,101,98,20,71,180,232,166,180,238,111,178,77,15,208,199,
    111,228,204,92,181,169,126,11,220,112,248,242,253,113,28,126,
    116,28,105,16,81,89,203,196,10,139,217,59,69,54,96,214,
    204,70,179,69,197,96,102,127,69,137,236,20,102,46,79,129,
    103,36,79,63,189,5,237,48,92,208,0,18,141,217,80,28,
    208,208,20,100,30,162,15,94,221,237,143,207,215,94,54,80,
    56,239,124,165,174,162,163,120,215,236,109,162,73,84,151,23,
    228,172,85,152,165,142,209,41,233,118,177,85,103,197,94,229,
    68,188,95,28,161,89,121,213,34,226,162,153,143,211,45,2,
    238,102,144,125,61,177,136,200,76,19,235,155,13,193,251,22,
    125,188,38,103,148,129,89,70,6,174,193,250,249,147,195,242,
    254,23,88,223,161,15,187,8,235,121,159,250,199,227,21,30,
    237,231,223,235,44,138,200,47,120,212,50,53,21,191,224,73,
    74,226,235,165,69,119,14,223,224,204,197,244,102,120,144,205,
    11,87,143,99,109,0,3,231,241,99,250,61,230,17,121,85,
    68,241,174,209,192,79,183,220,235,246,26,189,114,175,218,171,
    247,204,127,1,212,13,98,8,
};

EmbeddedPython embedded_m5_objects_ArmTLB(
    "m5/objects/ArmTLB.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/arch/arm/ArmTLB.py",
    "m5.objects.ArmTLB",
    data_m5_objects_ArmTLB,
    1096,
    2978);

} // anonymous namespace