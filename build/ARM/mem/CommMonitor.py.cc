#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_CommMonitor[] = {
    120,156,181,85,223,83,27,55,16,222,59,219,252,48,134,24,
    19,66,72,32,185,148,180,117,59,29,27,50,195,91,167,63,
    66,211,153,206,148,36,3,244,161,188,220,200,39,97,31,156,
    238,220,147,28,236,103,250,127,183,187,43,219,145,135,166,125,
    170,237,147,181,223,126,187,250,78,90,73,9,76,63,21,124,
    126,136,0,204,91,236,72,252,5,144,1,92,76,123,129,235,
    133,144,133,160,67,184,12,33,32,187,2,89,5,116,5,46,
    43,104,87,65,133,112,21,128,172,193,159,0,119,0,191,95,
    86,65,46,193,121,123,25,83,166,127,225,167,29,96,207,82,
    243,181,235,174,98,115,170,244,187,222,181,74,172,131,150,176,
    57,159,24,171,180,93,195,238,73,161,245,105,145,167,182,40,
    19,95,235,107,210,106,48,66,1,92,6,164,24,69,161,84,
    148,162,170,112,93,3,181,4,215,203,36,249,14,245,174,128,
    90,37,185,119,72,168,131,90,3,84,75,253,6,147,215,73,
    51,42,37,230,6,35,15,64,98,236,10,35,77,70,54,65,
    181,64,174,50,178,229,113,234,140,60,244,56,107,140,108,123,
    156,6,35,143,60,206,58,35,59,30,103,131,145,199,140,236,
    130,68,176,201,200,19,47,106,147,145,167,94,84,139,145,61,
    143,179,197,200,190,199,121,200,200,51,143,179,205,200,115,70,
    34,80,47,64,62,98,228,51,15,217,97,228,96,22,245,18,
    228,99,70,62,135,179,243,246,46,46,192,25,173,130,217,194,
    70,43,221,77,112,153,98,237,214,169,51,24,152,131,249,42,
    70,118,32,44,54,42,154,186,163,158,202,138,188,111,34,91,
    116,12,45,241,169,64,94,25,13,139,210,154,58,197,101,226,
    131,98,211,210,24,71,218,152,61,130,133,30,102,136,171,50,
    45,100,116,133,137,6,169,177,69,191,20,218,216,16,9,175,
    14,205,11,252,59,136,122,105,110,162,52,143,122,163,210,216,
    40,83,121,223,14,60,178,121,142,172,159,82,35,122,152,238,
    83,156,103,139,153,68,46,111,83,185,72,217,243,211,124,138,
    240,49,71,38,172,202,147,137,79,120,226,101,248,7,247,211,
    133,248,95,46,46,34,137,206,50,237,141,108,90,228,198,214,
    104,118,14,15,115,55,210,169,24,19,55,42,174,238,83,205,
    174,55,210,125,239,87,11,3,21,35,107,44,190,79,154,247,
    163,82,253,49,82,198,26,95,214,151,94,174,255,226,126,177,
    144,217,150,34,55,34,161,65,163,164,24,229,214,167,190,244,
    210,254,43,113,31,137,63,74,89,42,99,34,45,204,13,215,
    66,169,132,140,132,67,121,241,238,49,110,203,212,170,57,101,
    223,27,109,138,45,78,74,155,164,219,21,108,226,56,23,90,
    197,177,173,179,161,11,57,202,200,172,18,97,50,84,140,39,
    227,113,60,64,13,170,228,101,121,47,80,234,89,56,59,208,
    208,84,185,43,103,145,79,24,50,238,140,171,207,55,192,123,
    42,120,242,104,54,249,108,228,173,192,14,74,106,200,226,222,
    73,86,36,55,118,157,48,222,21,177,219,21,44,247,183,220,
    164,253,92,73,187,137,6,151,119,236,202,59,166,101,96,213,
    175,139,34,227,60,63,139,204,40,75,101,40,221,92,196,11,
    1,52,233,198,110,80,158,89,125,187,36,59,126,196,220,229,
    232,13,244,77,139,217,145,183,61,242,204,225,168,36,55,181,
    214,209,232,150,248,213,185,249,228,39,135,22,99,114,242,171,
    204,82,16,46,57,188,137,168,87,128,46,205,174,71,245,157,
    131,121,136,87,92,247,67,124,167,11,169,78,139,137,5,226,
    38,227,62,205,9,149,92,76,181,19,83,141,217,7,8,113,
    141,121,24,197,94,148,35,101,91,222,16,236,230,55,104,211,
    109,246,177,49,223,99,211,29,20,90,117,63,24,253,10,15,
    85,92,12,117,91,148,55,221,55,39,111,142,143,142,186,125,
    165,143,99,87,31,93,83,38,93,58,122,189,27,178,51,156,
    240,177,220,161,100,223,96,179,20,224,55,220,174,52,130,70,
    165,181,220,10,91,213,86,208,170,224,179,132,79,128,86,200,
    79,141,172,183,237,218,236,74,214,199,157,161,224,115,117,101,
    106,149,197,120,114,70,247,51,215,52,15,242,63,136,231,225,
    190,117,27,236,59,58,102,12,1,245,160,30,52,131,102,245,
    111,178,9,76,73,
};

EmbeddedPython embedded_m5_objects_CommMonitor(
    "m5/objects/CommMonitor.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/mem/CommMonitor.py",
    "m5.objects.CommMonitor",
    data_m5_objects_CommMonitor,
    965,
    2220);

} // anonymous namespace
