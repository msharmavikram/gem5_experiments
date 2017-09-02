#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_DiskImage[] = {
    120,156,181,84,75,111,211,64,16,158,77,156,135,147,136,68,
    21,170,196,1,225,19,178,122,136,85,164,158,138,16,106,9,
    168,23,64,78,47,228,98,54,246,54,217,212,142,35,239,166,
    109,184,134,255,13,51,227,36,4,40,234,133,250,49,218,249,
    118,61,243,205,203,49,108,174,42,190,111,61,0,243,21,23,
    9,62,2,82,128,76,192,72,128,32,189,2,105,5,46,147,
    42,40,1,87,2,18,7,190,3,172,1,190,140,170,144,212,
    64,85,25,173,239,80,7,146,198,22,109,238,208,26,36,46,
    12,253,22,58,209,63,240,242,5,174,172,139,98,168,179,79,
    227,153,138,109,9,145,56,226,141,119,218,92,95,100,114,162,
    226,125,174,103,196,245,20,23,10,136,34,50,28,85,200,29,
    249,69,210,72,168,14,179,6,209,94,163,218,100,213,5,213,
    2,140,96,93,129,81,27,194,161,239,224,247,97,5,133,121,
    70,81,171,155,192,216,188,64,87,65,130,78,35,77,94,251,
    211,169,233,210,46,34,30,35,222,149,78,21,99,133,146,137,
    151,207,211,85,185,225,119,136,121,19,69,20,205,101,166,162,
    200,182,88,201,242,100,153,146,74,14,237,106,161,120,113,89,
    44,21,159,150,99,99,11,25,91,62,29,223,221,69,83,180,
    171,10,91,67,245,179,44,100,102,235,148,32,91,232,249,132,
    207,176,183,136,104,176,161,179,60,79,249,240,123,153,26,197,
    73,35,102,17,49,243,41,97,191,132,25,160,8,166,121,166,
    130,27,147,189,10,226,124,89,24,117,155,23,215,193,224,124,
    112,114,124,28,76,84,118,18,101,210,88,85,4,166,136,131,
    253,172,236,74,209,95,172,56,111,47,200,36,49,170,139,242,
    238,10,75,73,8,229,237,223,101,19,219,178,61,253,163,108,
    84,176,42,213,131,76,134,221,7,235,81,214,141,186,32,228,
    21,133,30,54,127,139,243,127,7,75,164,94,146,73,103,19,
    44,135,121,158,223,19,166,179,13,243,195,189,97,42,7,102,
    220,157,216,154,170,129,83,33,54,29,217,228,45,151,38,11,
    231,137,144,22,205,83,217,169,13,10,177,247,96,102,194,39,
    116,164,77,109,52,213,105,82,182,165,166,212,155,3,234,155,
    185,182,90,166,158,149,227,84,121,70,127,83,150,147,213,249,
    71,62,67,119,59,32,156,128,144,218,144,27,141,173,91,250,
    226,98,94,182,45,155,140,200,100,216,126,212,74,80,18,142,
    200,100,103,215,118,7,194,197,247,163,207,244,8,206,78,250,
    187,223,73,8,219,63,12,162,11,154,38,179,23,81,239,49,
    185,242,112,191,46,135,255,205,115,50,77,64,79,180,196,97,
    227,208,249,9,201,232,43,19,
};

EmbeddedPython embedded_m5_objects_DiskImage(
    "m5/objects/DiskImage.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/dev/storage/DiskImage.py",
    "m5.objects.DiskImage",
    data_m5_objects_DiskImage,
    600,
    1403);

} // anonymous namespace
