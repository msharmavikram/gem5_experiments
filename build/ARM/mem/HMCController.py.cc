#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_HMCController[] = {
    120,156,181,80,177,78,195,48,16,61,39,165,130,74,136,5,
    70,36,198,192,16,171,72,217,16,130,86,21,44,116,104,25,
    160,139,21,57,7,65,196,113,101,187,208,206,240,223,112,231,
    182,32,62,128,147,253,244,238,108,223,123,62,13,155,72,105,
    95,157,0,248,156,72,69,75,64,3,112,191,97,130,88,2,
    152,192,147,128,42,133,79,128,15,128,199,89,10,85,7,166,
    217,14,61,121,249,162,200,4,177,192,112,22,246,9,111,239,
    134,67,219,6,103,155,6,157,222,74,241,249,128,165,14,137,
    32,192,76,176,224,44,97,37,106,57,153,102,9,29,76,248,
    154,63,34,48,104,100,109,180,210,63,173,242,186,206,58,44,
    181,75,160,84,91,26,84,42,244,98,98,108,181,104,56,141,
    23,86,115,140,117,189,92,170,26,203,10,93,198,22,126,193,
    95,19,200,218,26,148,111,222,156,75,109,23,206,227,187,117,
    175,114,52,28,21,253,190,124,70,83,40,83,250,128,78,122,
    167,37,219,249,243,177,124,190,138,102,111,184,29,171,118,69,
    87,140,215,6,247,216,127,145,207,75,87,26,31,45,61,12,
    74,23,14,136,140,109,171,109,141,14,219,192,181,216,226,95,
    204,197,41,93,172,231,114,121,186,53,217,19,189,227,111,239,
    170,115,96,
};

EmbeddedPython embedded_m5_objects_HMCController(
    "m5/objects/HMCController.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/mem/HMCController.py",
    "m5.objects.HMCController",
    data_m5_objects_HMCController,
    291,
    510);

} // anonymous namespace