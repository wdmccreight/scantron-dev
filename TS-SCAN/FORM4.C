#include <stdio.h>
#define EXTERN extern
#include "scanvars.h"

/* This file contains no executable code, only the declaration and           */
/* initialization of the TEMPLATE array, which determines how the bubbles    */
/* on the form correspond to the answers and other data in the output file.  */
/* To add a form, the definition of FORMS must be incremented in the         */
/* 'scanvars.h' file.                                                        */
/* The format for adding values is the following:                            */
/* Each potential X-Y position on the form has an entry in the following     */
/* table.  Each entry is a decimal number, the digits have the following     */
/* interpretation:                                                           */
/*    The units digit determines which 'type' of question this bubble is     */
/* a part of.  Valid values:  0 ==> Answer,  1 ==> Id,  2 ==> Option,        */
/* 3 ==> Misc.                                                               */
/*    The tens digit determines what value this bubble has, i.e., the bubble */
/* corresponding to answer 5 will have a tens digit of 5.                    */
/*    The remaining upper digits determine what question the bubble is a     */
/* part of, i.e., all bubbles that form the answer to question 17 will       */
/* start with 17.                                                            */
/*    Note: the values below cannot start with leading zeros, because C      */
/* interprets such numbers to be octal.  A value of 0 is the "ignore this    */
/* mark" value.                                                              */

unsigned int template[FORMS] [66] [48] = {

/***** Form #4, NCS standard CompuTest form #16412 */ 
/*01*/     0,    0,    0,  0,    0,    0,    0,    0,    0,    0,    0,    0,
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*02*/     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*03*/   191,  181,  171,  161,  151,  141,  131,  121,  111,  101,    0,    0,
           0,10050, 9950, 9850, 9750, 9650,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*04*/   291,  281,  271,  261,  251,  241,  231,  221,  211,  201,    0,    0,
           0,10040, 9940, 9840, 9740, 9640,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*05*/   391,  381,  371,  361,  351,  341,  331,  321,  311,  301,    0,    0,
           0,10030, 9930, 9830, 9730, 9630,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*06*/   491,  481,  471,  461,  451,  441,  431,  421,  411,  401,    0,    0,
           0,10020, 9920, 9820, 9720, 9620,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*07*/   591,  581,  571,  561,  551,  541,  531,  521,  511,  501,    0,    0,
           0,10010, 9910, 9810, 9710, 9610,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*08*/   691,  681,  671,  661,  651,  641,  631,  621,  611,  601,    0,    0,
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*09*/   791,  781,  771,  761,  751,  741,  731,  721,  711,  701,    0,    0,
           0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*10*/   891,  881,  871,  861,  851,  841,  831,  821,  811,  801,    0,    0,
           0, 9550, 9450, 9350, 9250, 9150,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*11*/   991,  981,  971,  961,  951,  941,  931,  921,  911,  901,    0,    0,
           0, 9540, 9440, 9340, 9240, 9140,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*12*/   292,  282,  272,  262,  252,  242,  232,  222,  212,  112,    0,    0,
           0, 9530, 9430, 9330, 9230, 9130,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*13*/     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
           0, 9520, 9420, 9320, 9220, 9120,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*14*/     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
           0, 9510, 9410, 9310, 9210, 9110,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*15*/  1810, 1710, 1610, 1510, 1410, 1310, 1210, 1110, 1010,  910,  810,  710,
         610,  510,  410,  310,  210,  110,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*16*/  1820, 1720, 1620, 1520, 1420, 1320, 1220, 1120, 1020,  920,  820,  720,
         620,  520,  420,  320,  220,  120,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*17*/  1830, 1730, 1630, 1530, 1430, 1330, 1230, 1130, 1030,  930,  830,  730,
         630,  530,  430,  330,  230,  130,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*18*/  1840, 1740, 1640, 1540, 1440, 1340, 1240, 1140, 1040,  940,  840,  740,
         640,  540,  440,  340,  240,  140,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*19*/  1850, 1750, 1650, 1550, 1450, 1350, 1250, 1150, 1050,  950,  850,  750,
         650,  550,  450,  350,  250,  150,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*20*/  9050, 8950, 8850, 8750, 8650, 8550, 8450, 8350, 8250, 8150, 8050, 7950,
        7850, 7750, 7650, 7550, 7450, 7350,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*21*/  9040, 8940, 8840, 8740, 8640, 8540, 8440, 8340, 8240, 8140, 8040, 7940,
        7840, 7740, 7640, 7540, 7440, 7340,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*22*/  9030, 8930, 8830, 8730, 8630, 8530, 8430, 8330, 8230, 8130, 8030, 7930,
        7830, 7730, 7630, 7530, 7430, 7330,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*23*/  9020, 8920, 8820, 8720, 8620, 8520, 8420, 8320, 8220, 8120, 8020, 7920,
        7820, 7720, 7620, 7520, 7420, 7320,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*24*/  9010, 8910, 8810, 8710, 8610, 8510, 8410, 8310, 8210, 8110, 8010, 7910,
        7810, 7710, 7610, 7510, 7410, 7310,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*25*/  3610, 3510, 3410, 3310, 3210, 3110, 3010, 2910, 2810, 2710, 2610, 2510,
        2410, 2310, 2210, 2110, 2010, 1910,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*26*/  3620, 3520, 3420, 3320, 3220, 3120, 3020, 2920, 2820, 2720, 2620, 2520,
        2420, 2320, 2220, 2120, 2020, 1920,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*27*/  3630, 3530, 3430, 3330, 3230, 3130, 3030, 2930, 2830, 2730, 2630, 2530,
        2430, 2330, 2230, 2130, 2030, 1930,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*28*/  3640, 3540, 3440, 3340, 3240, 3140, 3040, 2940, 2840, 2740, 2640, 2540,
        2440, 2340, 2240, 2140, 2040, 1940,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*29*/  3650, 3550, 3450, 3350, 3250, 3150, 3050, 2950, 2850, 2750, 2650, 2550,
        2450, 2350, 2250, 2150, 2050, 1950,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*30*/  7250, 7150, 7050, 6950, 6850, 6750, 6650, 6550, 6450, 6350, 6250, 6150,
        6050, 5950, 5850, 5750, 5650, 5550,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*31*/  7240, 7140, 7040, 6940, 6840, 6740, 6640, 6540, 6440, 6340, 6240, 6140,
        6040, 5940, 5840, 5740, 5640, 5540,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*32*/  7230, 7130, 7030, 6930, 6830, 6730, 6630, 6530, 6430, 6330, 6230, 6130,
        6030, 5930, 5830, 5730, 5630, 5530,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*33*/  7220, 7120, 7020, 6920, 6820, 6720, 6620, 6520, 6420, 6320, 6220, 6120,
        6020, 5920, 5820, 5720, 5620, 5520,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*34*/  7210, 7110, 7010, 6910, 6810, 6710, 6610, 6510, 6410, 6310, 6210, 6110,
        6010, 5910, 5810, 5710, 5610, 5510,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*35*/  5410, 5310, 5210, 5110, 5010, 4910, 4810, 4710, 4610, 4510, 4410, 4310,
        4210, 4110, 4010, 3910, 3810, 3710,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*36*/  5420, 5320, 5220, 5120, 5020, 4920, 4820, 4720, 4620, 4520, 4420, 4320,
        4220, 4120, 4020, 3920, 3820, 3720,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*37*/  5430, 5330, 5230, 5130, 5030, 4930, 4830, 4730, 4630, 4530, 4430, 4330,
        4230, 4130, 4030, 3930, 3830, 3730,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*38*/  5440, 5340, 5240, 5140, 5040, 4940, 4840, 4740, 4640, 4540, 4440, 4340,
        4240, 4140, 4040, 3940, 3840, 3740,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
/*39*/  5450, 5350, 5250, 5150, 5050, 4950, 4850, 4750, 4650, 4550, 4450, 4350,
        4250, 4150, 4050, 3950, 3850, 3750,    0,    0,    0,    0,    0,
       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};
