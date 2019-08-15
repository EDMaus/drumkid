#ifndef closedhat_H_
#define closedhat_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define closedhat_NUM_CELLS 1527
#define closedhat_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) closedhat_DATA [] = {-1, 2, -2, 5, -2, -3, 1, -3, -2,
6, -7, 3, 5, -4, -4, 9, -6, 3, -4, -10, 23, -16, 1, 5, -13, 18, -19, 9, 3, -20,
24, -19, 9, -5, 2, 3, -1, -1, -3, 7, -7, 3, 0, -4, 1, 4, -8, 12, -6, -2, 6, -5,
4, -1, -5, 8, -7, 0, 0, 12, -19, 9, -3, -1, 7, -11, 14, -20, 17, -7, -10, 15,
-4, -14, 24, -24, 18, -14, -10, 47, -41, 20, -11, -2, 15, -14, -6, 10, 1, -19,
36, -50, 42, -18, -18, 36, -60, 46, -39, 13, 8, -22, -4, 14, 2, -28, 45, -37,
17, -10, 6, 5, -42, 47, -44, 21, -3, -5, -3, 14, 9, -31, 32, -34, 38, -43, 0,
-3, -35, 37, -30, 14, -11, 21, -16, -2, 32, -49, 29, -19, 14, -22, 25, 5, -30,
24, -9, -4, -2, 23, -38, 46, -30, 8, 10, -4, 0, -16, 25, -29, 19, -5, 2, 12,
-23, 25, -11, -9, 30, -17, -9, 14, 7, -14, 8, 7, -12, 2, 17, -29, 23, -11, -2,
18, -23, 24, -48, 23, -12, -25, 42, -39, 25, -17, 7, -11, -3, 7, -13, 6, -7, 21,
-25, 19, -2, 11, -27, 30, -3, -23, 26, -11, 8, -30, 14, -11, -24, 36, -43, 30,
-4, -19, 25, -33, 26, -30, 12, 1, -5, -4, 8, 13, -25, 31, -7, -17, 24, -30, 26,
-16, -4, 25, -30, 24, 1, -29, 18, -3, -28, 34, -37, 33, -21, 3, 10, -23, 31,
-30, 4, 17, -15, -4, 17, 8, -15, 7, 11, -14, 12, -15, 25, -27, 5, 11, -31, 36,
-23, -3, 19, -18, 13, -16, 6, 9, -28, 34, -11, -13, 29, -29, 17, -2, -2, -1,
-20, 30, -30, 9, 14, -22, 18, -2, 7, -7, -6, 22, -21, 17, 2, 0, -8, -3, 15, -30,
29, -14, -10, 28, -25, 19, -11, -2, 12, -21, 21, -13, -1, 15, -13, 15, -8, 8,
-3, -14, 26, -32, 20, -4, -5, 13, -14, 12, 11, -23, 20, -11, -8, 17, -31, 26,
-20, 14, -10, 11, 4, -15, 16, -16, 21, -19, 10, 0, -16, 28, -32, 18, -6, -6, 16,
-19, 11, -2, -8, 8, 4, -19, 20, -18, 10, -1, -5, 19, -27, 19, -4, -10, 18, -15,
5, 5, 3, -14, 17, -2, -16, 18, -17, 11, -9, 3, 6, -9, 2, 6, -9, 11, -1, -4, 5,
2, 1, -11, 19, -6, -8, 7, 3, -1, -4, 9, -6, -2, 9, -15, 5, 5, -5, -2, 7, -2, -7,
8, 4, -13, 12, -2, -10, 12, -4, 2, -1, -10, 10, -11, 9, -7, -1, 5, -6, 12, -16,
18, -14, 1, 7, -5, -6, 3, 7, -17, 17, -6, -10, 13, -7, 5, -5, 8, -5, -5, 11, -2,
-6, 2, 8, -15, 21, -16, 6, 5, -9, 7, 0, -4, -1, 5, -5, 2, 2, -6, 6, -4, -3, 7,
-9, 7, -2, 4, -9, 9, -9, 8, -2, -1, 6, -11, 16, -13, 4, 4, -9, 9, -2, -6, 8, -6,
1, 6, -8, 4, -3, 0, 7, -9, 7, -5, 1, 4, -9, 6, 3, -12, 6, 2, -11, 13, -5, -8,
15, -13, 4, 3, -10, 13, -13, 9, 2, -11, 14, -10, 1, 7, -8, 4, -6, 7, 0, -6, 8,
-6, 1, -1, 6, -7, -4, 12, -13, 7, -2, 4, -6, 4, 4, -13, 17, -11, 1, 6, -3, -3,
5, -5, 1, 1, -1, 1, -8, 13, -8, 0, 5, -12, 10, -8, 4, -4, -2, 10, -16, 14, -6,
4, -5, 2, 5, -12, 13, -11, 5, 2, -4, -1, -2, 10, -9, 1, 4, -2, -8, 9, -2, -4, 3,
-4, 7, -9, 9, -11, 8, -1, -4, 8, -10, 9, -9, 3, 5, -12, 9, -1, -5, 10, -7, 3,
-1, -3, 4, -7, 8, -5, -3, 6, -2, -1, -2, 6, -6, 1, 1, -5, 6, -5, 4, 1, -6, 8,
-9, 7, -2, -5, 6, -5, 1, 1, -5, 3, -1, -2, 4, -7, 7, -7, 4, -2, 3, -5, -1, 9,
-12, 8, -3, -3, 7, -11, 8, -2, -5, 7, -10, 8, -5, 2, 0, -4, 7, -5, -2, 4, -3,
-2, 3, -2, -1, 0, 3, -4, -2, 7, -8, 3, 0, 1, -2, -1, 6, -9, 9, -9, 6, -3, -2, 4,
-8, 8, -3, -4, 6, -5, 2, -2, 0, 3, -8, 8, -6, 0, 5, -4, -2, 7, -4, -1, 1, -2,
-1, -2, 7, -7, 3, 0, 0, -2, 0, 5, -8, 7, -5, 2, 2, -3, 3, -4, 5, -1, -3, 4, 0,
-3, 4, -2, -1, 0, 5, -5, 2, 4, -5, 3, 1, -3, 2, -1, 1, -1, -1, 7, -7, 4, 1, -3,
2, -1, -1, 1, 0, 0, 0, -4, 5, 0, -3, 4, -3, -2, 1, 1, -1, 0, 1, 1, -5, 3, -1,
-4, 6, -6, 4, -3, -1, 3, -4, 2, -1, 2, -4, 3, -2, 2, 0, -2, 4, -5, 6, -4, 4, -2,
-2, 4, -5, 4, -3, 3, -3, 2, 2, -4, 4, -2, 1, -3, 4, -3, 0, 3, -3, 1, -2, 4, -5,
1, 0, -1, 0, -1, 6, -6, 3, -1, -1, 4, -3, 0, 0, 5, -4, 1, 2, -1, 0, -2, 5, -4,
1, 2, -4, 3, 0, -2, 1, 1, -3, 0, 1, -1, -1, 0, 0, -2, 1, 0, -3, 3, -1, 1, -3, 2,
0, -2, 2, -2, -1, 1, 2, -3, 2, 2, -1, -1, 2, -4, 5, -3, 0, 2, -3, 2, -3, 3, -1,
-2, 1, 2, -1, -2, 2, -3, 2, 1, -2, 3, -3, 2, 1, 0, 1, 0, -2, 2, -1, -1, 3, -1,
2, -1, 0, -1, 0, 3, -3, 2, -2, 0, 2, -2, 2, -3, 1, -2, 2, -1, 1, 2, -3, 2, -1,
0, 0, 0, 1, -2, -1, 2, -1, -1, 2, -3, 4, -3, 0, 2, -1, 2, -1, 1, 1, -2, 2, -3,
0, 2, -3, 2, -2, 1, -1, 0, 1, 0, -2, 0, 1, -2, 2, 0, -3, 3, 0, -3, 3, -1, 2, -1,
0, 1, -2, 2, -1, -1, 2, -2, 1, 0, 0, 0, -1, 2, -2, 1, 0, -1, 1, -1, 2, -1, -2,
3, -2, 1, -1, 0, 0, 0, 1, -3, 1, 1, -1, 1, 1, 0, 1, -1, 0, -1, 2, -3, 0, 1, -1,
2, -2, 2, 0, -1, 2, -1, 0, 1, -2, 2, -1, 0, 2, -1, 2, -1, 1, 1, -1, 1, -1, 1,
-1, 2, 0, -1, 3, -2, 0, 2, 0, 0, -1, 2, -2, 0, 1, -1, 1, -1, 1, 0, -1, 1, -1, 0,
1, -2, 1, 0, -1, 1, -2, 3, -1, 0, 1, 0, 1, -1, 2, -1, 1, -1, -1, 1, -1, 2, 0, 1,
0, 0, 1, 1, -1, 1, -1, 1, 0, 0, 2, -2, 0, 0, -2, 1, 0, -1, 1, 0, -1, 0, 0, 0, 2,
0, 0, 0, -1, 1, -1, 1, 1, -1, 1, 0, -1, 1, 0, 0, -1, 0, 1, 0, 1, 0, 1, 0, 0, 0,
-1, 1, -1, 0, 1, 0, 0, 1, 1, -1, 1, 0, 0, -1, 1, -1, -1, 1, 0, 1, -1, 1, -1, 0,
1, -1, 1, -1, 0, 0, 1, 0, 0, 1, -1, 1, 0, 0, 1, -1, 1, 0, 1, 1, 0, 0, 1, 0, 0,
1, -1, 1, -1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, -1, 0, 1, 1, 1, 0, 2, -1, 0, 1, -1,
0, -1, -1, 1, 0, 1, 0, 0, 1, -1, 0, 0, -1, -1, 1, 0, 1, 1, 0, 0, -1, 1, 0, 0, 1,
0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 1, 0, -1, 0, 0, -1, 1, 0, 0, 0, 0, 0, -1,
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, -1, 1, 0, 1, -1, 0, 0, 0, 0, 0, 0,
1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0,
1, 0, 0, 0, 0, 1, -1, 1, 0, 0, 1, -1, 1, 1, 1, 0, 1, 0, -1, 1, -1, 1, 0, 0, 0,
0, -1, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 1, 0, 1, 0, 1, 1, 0, 1, -1, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, -1, 1, -1, 0, 0, -1, 0, 0, 0, 0, 1,
0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 1,
0, 0, -1, 0, 0, 0, 0, -1, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0, 0, -1,
-1, 1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, -1, 0, 0, 0, -1, 0, 1, 0, };

#endif /* closedhat_H_ */
