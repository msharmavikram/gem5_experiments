#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_LRUReplacementPolicy[] = {
    120,156,189,145,177,78,195,64,12,134,125,73,91,160,98,40,
    18,19,83,7,134,136,161,167,34,117,67,8,1,221,16,160,
    20,36,200,18,165,23,67,11,185,166,186,187,64,51,195,123,
    131,157,144,50,84,172,92,146,95,246,197,246,125,246,41,248,
    89,62,125,103,125,0,123,73,70,74,175,128,12,224,142,45,
    15,50,1,218,131,200,3,193,190,15,153,15,218,135,200,39,
    191,5,232,195,147,128,180,13,159,0,31,0,143,81,11,210,
    14,76,130,45,42,52,255,162,21,8,178,28,203,81,109,238,
    144,76,230,250,102,250,130,202,213,91,123,36,33,46,179,68,
    161,198,133,187,205,179,185,42,221,62,237,94,133,247,27,63,
    84,67,205,185,231,76,125,64,6,2,68,130,217,9,148,240,
    9,143,208,137,38,156,4,220,93,232,55,103,83,201,186,142,
    165,84,208,168,165,41,166,165,180,206,20,202,21,6,173,92,
    71,12,102,179,160,205,121,219,36,113,188,72,52,198,177,235,
    86,142,206,211,34,99,183,197,1,229,18,171,226,106,181,138,
    85,150,88,91,69,177,55,195,36,69,19,48,239,175,216,7,
    18,57,203,53,202,55,171,143,165,202,11,99,241,61,55,175,
    114,124,49,30,13,135,242,25,245,40,214,137,117,104,164,53,
    74,254,193,185,49,156,193,178,172,90,61,228,83,58,36,29,
    193,207,117,221,7,35,234,209,96,153,152,68,91,183,91,123,
    235,203,8,121,160,161,215,76,235,63,153,171,9,159,212,51,
    61,237,55,236,93,209,19,61,239,27,234,46,161,128,
};

EmbeddedPython embedded_m5_objects_LRUReplacementPolicy(
    "m5/objects/LRUReplacementPolicy.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/mem/ruby/structures/LRUReplacementPolicy.py",
    "m5.objects.LRUReplacementPolicy",
    data_m5_objects_LRUReplacementPolicy,
    350,
    678);

} // anonymous namespace
