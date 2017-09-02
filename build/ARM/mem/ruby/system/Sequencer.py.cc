#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Sequencer[] = {
    120,156,181,86,73,111,219,70,20,30,82,155,37,121,149,109,
    197,205,74,20,109,161,182,128,133,4,48,122,104,81,164,113,
    18,32,135,180,46,157,20,168,47,4,77,142,45,58,92,148,
    153,145,107,221,10,184,127,164,64,127,100,111,237,251,30,23,
    209,177,147,155,69,123,244,230,155,121,111,222,54,159,24,136,
    226,211,160,255,167,142,16,250,79,18,66,250,179,68,44,196,
    155,66,178,114,201,22,177,45,18,91,28,217,194,10,27,66,
    218,226,196,18,97,83,252,37,196,165,16,191,31,53,68,216,
    18,178,193,104,187,66,155,34,236,148,232,82,133,182,68,216,
    45,209,94,133,182,69,216,23,135,163,101,114,34,250,143,62,
    35,139,36,131,225,155,92,236,210,240,90,38,191,28,159,201,
    192,152,37,154,185,179,227,249,65,166,76,80,15,229,25,66,
    249,151,4,41,196,145,133,128,200,103,58,13,206,88,130,14,
    151,109,113,214,65,68,20,199,37,69,180,36,100,23,161,92,
    210,106,79,200,62,34,129,188,44,228,10,130,129,188,90,147,
    215,132,92,71,92,144,55,88,94,98,121,192,150,55,133,220,
    42,45,111,95,67,134,140,220,17,114,71,156,125,86,130,119,
    25,188,87,130,93,6,239,151,186,13,36,9,200,131,26,210,
    103,228,97,13,89,102,228,145,112,15,71,43,72,141,77,131,
    190,71,67,34,147,177,162,68,141,245,92,27,146,203,164,237,
    78,38,17,114,102,48,232,85,26,246,15,222,58,58,246,207,
    165,51,165,117,189,86,64,137,79,122,42,199,182,138,172,59,
    100,245,202,194,102,185,48,141,178,186,145,245,154,66,166,230,
    57,8,7,115,111,156,140,171,169,31,160,245,124,227,59,129,
    31,76,164,163,228,251,153,212,70,59,122,54,133,134,12,121,
    71,148,106,243,241,29,3,218,17,100,105,74,246,100,232,152,
    204,33,107,211,217,200,65,140,232,22,207,75,253,68,122,158,
    233,241,36,201,194,89,140,105,19,27,230,83,201,194,27,53,
    147,188,219,63,214,70,249,212,104,216,29,92,92,120,19,233,
    135,82,153,22,77,15,124,229,39,6,205,246,42,53,166,67,
    223,231,82,233,40,75,13,114,246,27,57,144,169,67,228,0,
    121,102,13,206,136,89,175,86,95,115,234,120,185,141,26,241,
    148,143,170,173,192,24,165,211,203,87,189,105,137,81,42,175,
    96,184,24,139,227,86,11,45,62,50,223,176,90,40,213,32,
    196,250,44,203,98,246,238,165,31,107,105,54,72,154,233,40,
    61,245,208,46,158,145,236,19,208,52,243,148,52,106,238,101,
    169,167,141,31,199,236,41,202,122,200,85,228,24,40,41,146,
    178,129,172,248,233,220,244,233,155,237,232,197,150,218,238,2,
    133,245,162,130,30,234,79,231,188,215,87,80,212,60,71,145,
    189,72,123,84,83,79,163,250,105,32,213,8,205,187,24,244,
    43,26,198,147,44,145,227,115,157,60,25,7,217,76,105,249,
    71,166,222,141,95,236,191,216,123,252,120,124,42,147,189,34,
    121,99,173,130,241,135,183,227,176,180,188,59,157,243,29,250,
    28,102,49,180,173,252,25,216,203,86,245,216,3,107,96,109,
    211,131,111,179,82,227,164,3,149,93,204,43,98,178,74,98,
    218,250,128,152,64,73,13,92,90,156,229,126,129,195,156,79,
    92,90,182,74,55,119,132,250,185,60,160,128,46,82,234,118,
    175,228,226,54,18,2,255,190,131,217,102,145,144,42,228,106,
    219,117,46,254,231,198,144,137,127,137,145,101,75,156,181,153,
    7,9,236,92,157,46,241,148,169,25,140,108,51,59,87,72,
    155,145,62,35,203,160,99,176,48,33,43,229,158,110,201,155,
    171,140,228,172,157,19,238,70,169,213,47,121,115,80,241,230,
    151,229,79,77,21,145,190,127,67,65,22,105,153,76,92,132,
    26,161,196,122,200,156,80,177,212,36,50,78,236,27,218,56,
    231,165,231,11,138,171,45,69,232,108,253,45,243,192,197,130,
    217,70,81,26,196,187,206,84,201,19,105,72,69,127,237,100,
    51,67,247,47,13,233,146,70,206,223,29,161,95,22,74,181,
    5,39,152,7,177,212,206,73,166,136,1,11,107,206,177,164,
    185,116,66,34,177,56,11,222,141,227,232,92,66,32,36,136,
    233,230,134,17,10,199,116,189,79,27,15,252,72,57,1,52,
    162,112,180,121,189,215,56,67,96,69,82,214,154,59,207,237,
    149,56,250,97,31,65,242,77,143,130,74,12,23,226,62,59,
    105,6,213,6,143,18,226,21,9,97,56,188,6,187,224,20,
    179,147,135,236,213,66,246,202,156,229,138,69,140,158,153,40,
    169,39,89,28,186,119,224,21,20,153,90,78,125,149,74,227,
    177,182,31,103,105,238,17,162,165,96,111,245,254,160,185,190,
    135,217,187,11,66,177,215,172,181,22,232,163,91,60,131,134,
    193,75,208,243,215,63,125,226,82,125,117,227,165,146,77,113,
    214,170,189,218,180,209,214,92,185,39,56,245,209,13,141,92,
    63,6,175,4,79,177,113,231,134,182,42,115,60,234,124,132,
    122,184,1,184,70,238,238,173,51,17,226,249,21,102,219,85,
    38,127,102,207,184,3,147,189,221,41,126,163,53,255,148,99,
    6,222,116,113,69,221,138,104,185,26,108,232,86,93,101,23,
    126,200,223,54,126,124,8,243,168,110,207,234,89,235,246,112,
    123,216,28,14,255,7,150,42,199,180,
};

EmbeddedPython embedded_m5_objects_Sequencer(
    "m5/objects/Sequencer.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/mem/ruby/system/Sequencer.py",
    "m5.objects.Sequencer",
    data_m5_objects_Sequencer,
    1194,
    2954);

} // anonymous namespace