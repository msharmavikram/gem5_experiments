#include "sim/init.hh"

namespace {

const uint8_t data_m5_stattestmain[] = {
    120,156,181,81,61,79,195,48,16,61,59,253,8,40,145,16,
    3,51,99,166,90,69,234,134,16,82,149,181,67,210,137,165,
    10,137,5,41,113,82,197,23,40,82,59,149,255,13,119,38,
    69,249,3,88,242,233,238,221,199,123,62,231,208,31,65,247,
    241,22,192,134,228,20,0,95,0,79,228,8,72,35,73,72,
    206,53,30,93,14,150,92,183,7,151,46,36,84,0,70,192,
    145,172,132,163,0,193,40,64,229,193,81,194,1,224,68,195,
    15,18,182,35,216,142,135,193,4,10,15,78,226,47,158,14,
    147,254,111,32,134,216,133,11,104,116,26,141,136,124,85,126,
    211,113,234,144,69,91,204,16,181,197,77,89,151,136,193,16,
    105,187,26,185,37,111,58,140,46,185,129,211,27,179,152,157,
    75,18,126,95,194,75,64,159,76,159,177,56,238,199,88,215,
    193,147,211,210,164,14,240,123,96,173,247,136,19,10,116,157,
    61,87,218,181,180,218,106,116,148,69,103,118,17,47,110,192,
    32,29,67,196,128,51,54,38,163,94,27,163,213,187,53,119,
    138,100,182,86,127,52,237,155,138,151,241,98,62,87,47,218,
    44,54,38,179,168,91,101,219,92,117,252,68,146,173,206,250,
    77,86,214,179,221,167,163,100,159,121,236,181,251,216,27,17,
    200,169,23,138,43,47,244,66,57,149,171,136,147,73,112,102,
    255,23,29,188,156,123,211,20,93,165,31,156,22,158,255,3,
    136,60,133,237,
};

EmbeddedPython embedded_m5_stattestmain(
    "m5/stattestmain.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/unittest/stattestmain.py",
    "m5.stattestmain",
    data_m5_stattestmain,
    324,
    621);

} // anonymous namespace
