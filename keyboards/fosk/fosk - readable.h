#define LAYOUT( \
        // Keyboard right half - right to left
    K00, K01, K02,      K04, K05, K06, K07, K08, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, \
         K31, K32, K33, K34, K35, K36, K37,      \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, \
    K50, K51, K52, K53, K54, K55,      K57,      \

        // Keyboard left half - left to right
    K60,      K62, K63, K64, K65, K66, K67, K68, \
    K70, K71, K72, K73, K74, K75, K76, K77, K78, \
    K80, K81, K82, K83, K84, K85, K86, K87, K88, \
    K90, K91, K92, K93, K94, K95, K96, K97,      \
    KA0, KA1, KA2, KA3, KA4, KA5, KA6, KA7, KA8, \
    KB0, KB1,      KB3, KB4,      KB6, KB7, KB8  \
) { \
        // Keyboard right half - right to left
    { K00, K01, K02, XXX, K04, K05, K06, K07, K08 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28 }, \
    { XXX, K31, K32, K33, K34, K35, K36, K37, XXX }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48 }, \
    { K50, K51, K52, K53, K54, K55, XXX, K57, XXX }, \

        // Keyboard left half - left to right
    { K60, XXX, K62, K63, K64, K65, K66, K67, K68 }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78 }, \
    { K80, K81, K82, K83, K84, K85, K86, K87, K88 }, \
    { K90, K91, K92, K93, K94, K95, K96, K97, XXX }, \
    { KA0, KA1, KA2, KA3, KA4, KA5, KA6, KA7, KA8 }, \
    { KB0, KB1, XXX, KB3, KB4, XXX, KB6, KB7, KB8 }  \
}