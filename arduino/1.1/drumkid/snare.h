#ifndef snare_H_
#define snare_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "src/MozziDK/src/mozzi_pgmspace.h"
 
#define snare_NUM_CELLS 2840
#define snare_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) snare_DATA [] = {2, -3, 10, 17, -13, -22, -21, -8, 3,
11, 12, 13, 17, 11, 5, 1, 3, 1, -2, -12, -13, -9, -18, -21, -21, -16, -8, -4, 7,
12, 4, -1, -2, 12, 24, 21, 9, 0, -6, -9, -7, 2, 5, 9, 15, 16, 20, 20, 11, 12,
17, 18, 12, 4, -4, -8, -10, -31, -24, -11, -27, -9, -5, -23, -8, -2, -22, -13,
15, -14, -29, -11, -14, -16, -15, -10, -1, 1, -1, -1, -8, -27, -4, 29, 14, 2, 2,
-20, -17, 19, 42, 35, 21, 28, 40, 36, 25, 22, 16, 13, 11, 6, 6, 5, -16, -25,
-16, -3, 2, -19, -14, -11, -19, -5, 2, 9, 17, 18, 20, 24, 20, 9, 3, 3, 4, -16,
-5, 3, -16, -31, -16, -1, -3, 25, 17, 21, 43, 27, 23, 27, -3, -11, 5, 34, 1,
-14, 16, -23, -37, -56, -64, -55, -41, -15, -22, -11, -25, -62, -75, -54, -54,
-29, 2, -61, -99, -50, -20, -74, -88, -19, 7, -66, -59, 22, 20, -13, -19, 4, 32,
44, 35, 45, 51, 52, 54, 47, 56, 50, 45, 44, 26, 41, 44, 30, 41, 46, 23, 13, 38,
49, 40, 29, 31, 35, 34, 19, 21, 19, 12, 13, 30, 30, 24, 30, 40, 12, -18, -4, 29,
2, -43, 13, 22, 17, 8, -11, 16, 17, -6, 14, 30, -58, -107, -64, -4, 0, -50, 1,
6, -48, -62, -51, -42, -79, -84, -84, -80, -81, -96, -80, -44, -65, -85, -66,
-65, -37, -46, -73, -64, -68, -1, -15, -69, -55, -59, -49, -34, -6, 43, 26, -38,
-17, 24, 54, 9, -14, 45, 59, 48, 52, 38, 44, 72, 64, 55, 46, 57, 64, 58, 51, 63,
61, 50, 44, 46, 59, 46, 37, 53, 59, 47, 32, 43, 51, 36, 26, 22, 25, 34, 44, 24,
24, 23, 9, -20, -2, 28, 0, -23, -14, 14, 44, -7, -62, 6, 24, -24, -63, -55, -4,
18, -39, -55, -16, 13, -45, -103, -26, 25, -48, -98, -53, -22, -33, -60, -57,
-68, -55, -62, -64, -44, -53, -64, -67, -61, -52, 24, 10, -51, -24, 6, 4, -27,
-44, 12, -9, -60, -18, -8, -22, 24, 58, 10, -5, -16, 27, 53, 36, 20, 35, 41, 1,
39, 47, 24, 29, 50, 60, 44, 52, 52, 35, 44, 13, 17, 39, 42, 32, 29, 38, 27, -8,
-20, 44, 19, -2, -20, -8, 22, -23, -8, 7, 5, -40, -31, 40, 53, -1, -34, 23, -22,
-53, -8, -2, 33, 22, -6, -21, -23, 29, 30, -11, 6, 18, -13, -14, -17, 2, 39,
-11, -4, 22, 4, 4, 1, 29, 8, -36, -4, 25, 6, -26, 9, 30, 5, 21, 4, 6, 22, 28,
17, -3, 20, 7, 18, 15, 14, 6, -5, -16, -15, 40, 6, -6, 14, 28, 21, 3, 0, 4, 35,
21, 3, 0, 37, -15, -26, 30, 3, 4, 23, 41, 9, -24, -17, 7, 26, 6, -4, 9, -9, 2,
-5, -24, 15, 9, 11, 7, -26, -10, -11, -7, -1, -21, 3, 1, -42, -17, -10, -23,
-22, -5, -9, -38, -27, 9, -21, -63, -37, -1, 4, -24, -24, -21, -10, -6, -24,
-37, -8, -29, -30, -17, -18, 4, 2, 13, 8, -19, -1, 28, 13, 13, -12, 18, 38, 16,
5, -13, 5, 11, -7, 12, 18, 11, 46, 27, 9, 11, 0, 16, 39, 7, -6, 6, -10, 22, 32,
2, 17, 39, 34, -9, -30, 9, 4, 21, 36, 13, 9, 22, 17, -7, 20, 21, 9, 0, 11, 27,
17, 8, -1, -3, 12, 30, -8, -10, 4, -1, 12, 10, -11, 2, 8, -3, 2, -12, -8, -2, 3,
2, 1, -1, -4, 1, 2, 2, -13, -19, 6, 15, 8, 1, -5, 8, 16, 11, -2, 1, 5, 8, 0, 8,
19, 8, 7, 5, 0, -9, -4, -11, 10, 12, 3, 15, 4, -11, 5, 26, -19, -22, -1, 2, -3,
-7, 5, -1, -19, -14, -2, -5, -7, -10, -8, -4, 1, -5, -4, -4, -21, -25, 5, -1,
-9, -1, -9, -10, -8, 6, -9, -30, -15, 7, 0, -15, -7, 6, 4, -2, -3, -10, -5, -2,
11, 7, -15, -6, -4, 3, -3, -9, -10, -2, 7, 3, -2, 4, 3, -8, 6, 9, 9, 2, 9, 16,
2, 4, 11, 7, 1, 9, 15, 7, 2, 7, 4, 10, 11, 0, 3, 6, 16, 8, -4, 6, 7, 9, 12, 0,
1, 6, 8, 9, 7, 9, 2, -1, 6, 10, 4, -6, -2, 8, 11, 2, 8, 11, 8, 14, 3, 1, 5, 1,
7, 3, -2, 1, 3, 4, -4, -2, 11, 4, -5, -9, 2, 2, -4, 2, -10, -3, 3, -9, -3, 3, 3,
-1, -7, -9, -6, -3, -6, -6, -8, -11, -10, -7, -5, -6, -13, -10, -4, -3, -10, -7,
-8, -9, -1, -4, -9, -1, 5, -3, -13, -7, 3, -6, -9, -15, 2, 4, -3, -4, -5, 1, 0,
3, 3, -6, -5, 11, 9, 8, 4, -3, -2, -1, 1, 1, 0, -1, 6, 7, -2, -8, 0, 5, 4, 2,
-9, -12, 8, 14, 0, -9, 2, 5, 0, 2, -4, -4, 6, 4, -7, -2, 2, 6, 3, -5, 1, 3, 8,
6, 7, 9, 1, -1, -3, 1, 10, -2, -7, 5, 9, 5, -2, 3, 6, 5, 5, 4, 3, -4, 1, 8, -1,
-2, 3, 1, 1, 5, 1, 1, 5, 0, -3, -2, -1, 3, 0, -3, -2, -3, -3, -3, -8, 0, 3, -4,
-9, -7, 0, 3, 7, -7, -10, -1, 1, 1, -6, -5, -4, -5, -8, -4, -1, -9, -8, 0, -3,
-10, -5, 4, 0, -3, -6, -6, 0, -4, -5, -4, -7, -5, -4, -4, -4, -3, 0, -1, -2, -5,
5, 3, -2, -1, -4, 1, 5, 2, -3, 2, 4, -5, -4, 0, -2, -2, -1, 0, -1, 1, 3, -6, -4,
5, -1, -2, 3, 2, 0, 0, 2, 2, 0, 0, 3, 1, -1, 0, 0, 2, -2, 0, 3, 3, -1, 1, 3, 1,
5, 2, 3, 2, 0, -1, -2, -1, 4, 3, 0, 0, 1, 2, 2, 2, 3, 3, -1, -2, -2, 0, -1, 0,
2, -2, 0, 2, 2, -4, -5, 0, 2, 2, -6, -2, 4, -6, -8, 4, 0, -1, 1, -1, -5, -3, -1,
-5, 0, -1, -5, -6, -3, -5, -5, -4, -7, -6, -5, -4, -6, -8, -5, -1, -3, -5, -8,
-2, -1, 1, -2, -6, -4, -2, -1, -1, -3, -3, 0, -4, -2, 0, -2, 0, 0, 0, -3, -5,
-1, 2, -4, -5, 2, -2, -3, 2, 0, -1, -2, -3, -3, 4, 1, -3, 1, 1, 2, 3, -1, 0, 0,
1, 0, -3, 1, -1, -5, -1, 4, 2, -4, -1, 6, 0, -4, 3, 3, -3, -4, 2, 2, -5, -4, 4,
4, 0, 0, 2, 1, 1, 1, 2, 0, 2, 3, -2, 0, 2, -3, -2, 3, 2, -1, 0, 0, -1, -3, -4,
-1, 2, -3, -2, 1, 2, 0, -2, 1, 1, -4, -4, 0, 2, -2, -3, -5, -2, 4, 1, -2, 1, -3,
-3, -1, -5, -5, -2, -2, -6, -2, 0, -1, -2, -5, -3, -2, -3, -1, -5, -5, 1, 1, -1,
-3, -4, -1, 0, 0, -2, -1, -1, -3, 1, -2, -3, -2, -2, -2, -3, -2, -1, -1, 0, 1,
0, -2, -2, 0, -1, -3, -1, -2, 0, -2, -2, 0, -2, 2, -4, -7, -3, 1, 0, -4, -2, -1,
2, -1, -5, -4, 4, 1, -3, 1, -1, -1, -2, -1, -1, 0, 1, -1, -1, -1, 1, 1, -1, 1,
0, -1, -1, -2, -1, -1, -2, 1, 3, 1, -2, 0, 3, 1, 0, -3, 1, 4, 2, 1, 2, 3, 1, 3,
5, 2, 1, 0, 1, 3, 0, 2, 3, 3, 2, 0, 1, 4, 2, 0, 2, 2, 1, 1, 0, 1, 0, 0, 1, 1, 1,
0, 1, 0, -1, -1, 0, -1, -3, -2, 0, -2, -2, 0, -2, -4, -4, -2, -5, -3, -4, -3,
-3, -5, -6, -3, -3, -4, -5, -4, -3, -5, -4, -5, -5, -4, -4, -3, -7, -5, -7, -6,
-1, -1, -5, -5, -2, -3, -1, -2, -5, -3, -3, -2, -1, -2, -2, -1, 0, 1, 0, 0, 1,
2, 1, 0, 2, 1, 1, 1, 2, 1, 3, 0, 2, 2, 2, 2, 0, 2, 4, 2, 0, 2, 3, 3, 1, 2, 2, 2,
2, 3, 2, -1, 1, 1, 1, 2, 1, 1, 2, 2, 1, -1, 2, 2, 1, 0, 0, 1, 3, 1, 0, 1, 1, -1,
0, 0, -1, -1, 1, 0, -1, 1, 0, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, 1, 0, -2,
-2, -1, -2, -3, -2, -1, 0, -1, -2, -3, -1, -2, -1, 0, 0, 0, 0, 0, 0, -1, -2, -1,
0, -1, -2, -1, 1, 1, -1, -2, 2, -1, -1, -1, -1, 0, -2, -2, -1, 2, 0, 0, -1, 1,
-2, -2, 1, -1, -1, -1, 0, 0, -2, -1, -2, -2, 0, -2, -2, 0, -1, -2, -2, -1, -1,
0, -1, -1, -1, -1, 0, 1, 0, -1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 3, 2, -1, 1, 2, 1,
1, 2, 2, 1, 3, 2, 1, 1, 2, 3, 3, 2, 2, 1, 2, 3, 2, 2, 2, 2, 3, 3, 2, 2, 2, 0, 1,
2, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, -2, -1, -1, 0, 0, -2, -1, -1, -1, -1, 0,
-1, -2, -2, -3, -3, -3, -3, -3, -3, -2, -3, -3, -3, -3, -3, -3, -1, -2, -3, -4,
-3, -2, -2, -3, -3, -2, -2, -3, -3, -2, -3, -2, -2, -1, -1, -2, -2, -1, 0, 0,
-2, -1, 0, -1, -1, 1, 0, 0, 0, 2, 1, 1, 1, 2, 1, 1, 4, 1, 0, 3, 1, 1, 2, 2, 2,
2, 3, 1, 2, 2, 2, 1, 2, 3, 1, 1, 2, 1, 2, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 2, 1,
1, 2, 1, 0, 0, 1, 1, 0, 1, 2, 0, 1, 1, 1, 2, 1, 2, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1,
2, 0, 1, 1, 1, 0, 0, 2, 0, -1, -1, 2, 2, -2, -2, 1, -1, 0, -1, -1, -1, 0, 0, -1,
-1, -1, -1, 0, -1, -2, -1, -1, -1, -1, -1, -1, 0, -1, -1, -2, 0, -1, -2, -2, -1,
-1, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -2, -1, 0, -1, 0, 1, 1,
0, -1, 1, -1, -1, 0, -1, -1, 0, -1, -1, 0, 0, -1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1,
1, 2, 1, 1, 1, 1, 0, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 4, 4, 2,
2, 3, 3, 3, 2, 1, 2, 3, 2, 2, 2, 3, 3, 1, 1, 2, 1, 0, 1, 2, 0, 1, 1, 0, -1, 0,
0, 0, -2, -1, 0, -2, -1, -1, -1, -1, -1, -2, -2, -3, -2, -2, -3, -1, -2, -2, -3,
-3, -2, -2, -2, -3, -3, -3, -2, -3, -4, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2,
-1, -2, -1, -2, 0, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0,
1, 1, 1, 2, 1, 0, 2, 1, 0, 2, 0, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2,
2, 2, 2, 2, 1, 2, 3, 1, 2, 2, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2,
2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 0, 1, 1, 0, 0, 0, -1, 0, 0, -1, -1, -1, -2, -1,
-1, -1, -1, -1, -2, -1, -1, -1, -1, -2, -1, -1, -2, -1, -2, -2, -2, -1, -1, -2,
-2, -1, -1, -1, -1, 0, -2, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, -1,
-1, -1, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0,
-1, 0, -1, 0, 1, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1,
1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 0,
1, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0,
-1, 0, -1, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0,
0, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0,
0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0,
1, 1, 2, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, -1,
0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1,
1, 0, 0, 1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0,
1, 1, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1,
0, 0, 1, 0, 2, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1,
1, 0, 0, 1, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, 1, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1,
0, -1, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, -1,
-1, 0, 0, -1, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0,
0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, -1, 1, 0, 0, 1, 0, 1, -1, 0, 0, 1, 0, 0, 1,
1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0,
0, -1, 0, 1, 0, -1, 0, 0, 0, 1, -1, 0, -1, 0, -1, -1, 0, 0, 0, -1, -1, -1, -1,
0, -1, 0, -1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, -1, 0,
0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 1,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, -1, -1, 0, 0, -1, -1, 0, 0, -1,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 1, 0,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 1,
0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0,
0, 0, 0, -1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, };

#endif /* snare_H_ */
