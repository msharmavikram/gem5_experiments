#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_MemTraceProbe[] = {
    120,156,181,81,61,111,219,48,16,61,202,31,73,220,15,20,
    89,218,161,131,166,194,200,96,34,5,188,21,65,225,192,69,
    19,160,133,225,120,169,23,66,161,206,145,26,81,20,72,42,
    177,231,244,127,183,119,148,141,166,63,160,164,244,240,248,120,
    188,123,60,106,216,143,30,253,159,83,0,127,65,36,167,79,
    64,5,176,218,51,209,177,4,170,4,76,2,235,4,68,222,
    3,76,96,35,32,239,195,47,128,39,128,31,235,30,228,3,
    184,25,15,41,69,249,155,198,88,16,11,12,103,29,125,73,
    48,203,60,126,67,179,112,246,22,195,43,18,104,177,114,153,
    198,168,232,231,134,102,108,232,154,8,2,172,5,219,162,202,
    228,135,10,97,31,126,14,0,135,108,234,137,28,29,29,148,
    99,32,103,172,156,68,101,196,254,200,21,43,47,96,217,153,
    91,38,4,254,45,129,65,35,27,174,235,37,81,21,216,199,
    164,40,252,59,218,155,215,217,109,133,105,212,82,109,77,227,
    208,251,210,214,254,61,109,94,213,186,106,115,76,23,151,105,
    89,111,44,65,26,138,125,112,96,255,49,197,34,211,247,24,
    246,41,108,27,154,54,164,155,178,194,49,55,34,28,19,40,
    85,103,6,149,10,163,184,48,54,111,43,94,246,57,96,215,
    96,212,245,118,171,10,204,114,116,97,16,179,186,204,196,136,
    153,181,85,36,43,215,98,120,205,103,184,148,58,184,141,225,
    95,178,202,99,56,34,246,88,134,66,53,58,112,15,110,130,
    43,235,187,152,190,59,19,125,177,243,191,224,191,18,200,194,
    26,148,15,222,124,148,218,182,206,227,163,117,247,114,126,57,
    159,158,159,203,59,52,83,101,50,31,208,73,239,180,124,214,
    207,127,158,117,210,236,98,211,207,56,43,215,28,10,154,189,
    83,154,223,199,241,174,39,252,26,211,73,195,119,243,177,53,
    188,114,118,187,91,138,195,147,253,79,123,177,228,167,174,255,
    23,31,56,59,119,105,36,70,226,77,242,7,233,112,188,236,
};

EmbeddedPython embedded_m5_objects_MemTraceProbe(
    "m5/objects/MemTraceProbe.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/mem/probes/MemTraceProbe.py",
    "m5.objects.MemTraceProbe",
    data_m5_objects_MemTraceProbe,
    448,
    806);

} // anonymous namespace
