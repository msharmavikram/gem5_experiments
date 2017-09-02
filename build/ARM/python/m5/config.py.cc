#include "sim/init.hh"

namespace {

const uint8_t data_m5_config[] = {
    120,156,173,144,75,107,27,49,20,133,175,52,15,219,193,180,
    16,232,42,41,116,57,45,196,34,133,217,149,18,48,206,99,
    17,27,38,187,217,4,51,163,216,227,88,163,116,164,164,20,
    220,77,146,125,127,114,115,143,226,144,252,128,8,61,174,206,
    149,142,190,171,138,182,45,230,113,244,133,200,253,227,160,230,
    46,104,77,84,62,199,146,214,130,140,164,82,146,137,168,140,
    200,196,84,38,36,52,209,42,165,85,143,234,136,30,4,149,
    125,210,125,114,247,244,170,199,65,31,144,30,80,199,186,36,
    157,32,174,19,122,144,72,65,124,163,176,195,175,123,106,249,
    201,148,30,249,249,30,56,46,178,30,51,53,255,185,77,179,
    136,67,159,96,239,234,166,243,105,136,174,154,181,246,168,96,
    101,155,214,15,56,56,207,47,199,179,233,241,217,73,144,79,
    103,231,19,135,155,35,147,87,130,87,201,3,251,49,42,62,
    128,37,175,59,168,245,194,75,108,54,4,156,191,130,124,68,
    27,1,82,247,53,164,55,224,129,197,52,131,179,7,90,101,
    219,43,192,64,152,218,86,251,254,22,229,102,238,151,5,14,
    103,120,48,228,219,185,121,206,227,18,184,51,252,126,152,220,
    17,79,106,105,141,86,119,206,124,87,149,189,237,156,254,109,
    187,107,53,25,79,242,195,67,181,208,38,191,52,115,231,117,
    167,92,87,169,155,63,126,105,91,101,114,5,183,102,49,98,
    1,101,45,180,255,6,195,33,108,69,42,98,241,81,12,69,
    44,179,29,96,128,197,186,64,110,221,40,48,226,92,0,45,
    144,44,122,47,149,233,246,174,233,108,91,224,94,145,188,168,
    64,228,122,95,201,223,17,31,95,243,195,216,250,118,173,127,
    126,134,235,7,158,134,98,63,218,149,105,180,43,246,196,39,
    249,4,252,4,137,57,
};

EmbeddedPython embedded_m5_config(
    "m5/config.py",
    "/home/vsm2/coursework/ECE511/gem5_master/src/python/m5/config.py",
    "m5.config",
    data_m5_config,
    406,
    692);

} // anonymous namespace