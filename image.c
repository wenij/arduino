/* eForth image */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>

const PROGMEM uint8_t embed_default_block[] = {
20,0,0,0,255,127,0,36,77,3,0,128,0,0,20,0,0,0,255,127,0,36,137,70,84,
72,13,10,26,10,38,21,237,86,1,0,132,25,0/* 1 = enable CRC check*/,0,72,9,141,98,28,96,141,98,28,99,
222,16,28,21,0,0,3,112,97,100,23,64,0,65,54,0,4,99,101,108,108,0,23,64,2,0,
64,0,5,98,47,98,117,102,23,64,0,4,38,21,92,20,232,15,76,0,3,62,105,110,21,
64,0,0,94,0,5,115,116,97,116,101,21,64,0,0,104,0,3,104,108,100,21,64,0,0,
116,0,4,98,97,115,101,0,21,64,10,0,126,0,4,115,112,97,110,0,21,64,0,0,138,
0,3,98,108,107,21,64,0,0,150,0,3,100,112,108,21,64,255,255,160,0,7,99,
117,114,114,101,110,116,21,64,90,0,0,0,9,60,108,105,116,101,114,97,108,62,
21,64,2,12,184,0,6,60,98,111,111,116,62,0,21,64,218,18,200,0,4,60,111,107,
62,0,21,64,0,0,170,0,3,100,117,112,157,96,226,0,4,111,118,101,114,0,157,
97,234,0,6,105,110,118,101,114,116,0,28,106,214,0,3,117,109,43,28,101,0,1,
3,117,109,42,28,102,244,0,1,43,63,101,16,1,1,42,63,102,22,1,4,115,119,97,
112,0,156,97,28,1,3,110,105,112,31,96,38,1,4,100,114,111,112,0,31,97,46,1,
1,64,28,99,56,1,1,33,31,100,62,1,6,114,115,104,105,102,116,0,31,112,68,1,
6,108,115,104,105,102,116,0,31,113,80,1,1,61,31,109,92,1,2,117,60,0,31,
110,98,1,1,60,31,111,106,1,3,97,110,100,31,103,112,1,3,120,111,114,31,105,
120,1,2,111,114,0,31,104,128,1,2,49,45,0,28,107,136,1,2,48,61,0,28,108,8,1,
3,114,120,63,189,120,152,1,3,116,120,33,63,119,160,1,6,40,115,97,118,101,
41,0,31,118,168,1,2,118,109,0,28,124,144,1,6,117,109,47,109,111,100,0,156,
121,188,1,4,47,109,111,100,0,156,122,200,1,1,47,31,122,210,1,3,109,111,100,
63,122,216,1,36,101,120,105,116,0,28,96,224,1,34,62,114,0,71,97,234,1,34,
114,62,0,141,98,242,1,34,114,64,0,129,98,250,1,37,114,100,114,111,112,12,
96,0,128,28,106,255,255,28,106,3,97,3,97,0,128,28,96,114,128,28,99,1,128,
31,103,102,128,28,99,136,128,28,99,71,97,0,123,12,96,28,96,0,128,0,125,
129,96,63,125,33,33,12,96,28,96,28,96,2,2,5,50,100,114,111,112,3,97,31,97,
68,2,2,49,43,0,1,128,63,101,80,2,6,110,101,103,97,116,101,0,0,107,28,106,
90,2,1,45,50,65,63,101,129,97,54,1,129,97,63,101,104,2,7,97,108,105,103,
110,101,100,129,96,16,65,63,101,120,2,3,98,121,101,0,128,6,65,22,1,2,128,
54,1,136,2,5,99,101,108,108,43,2,128,63,101,152,2,5,99,101,108,108,115,1,
128,31,113,164,2,5,99,104,97,114,115,1,128,31,112,176,2,4,63,100,117,112,0,
129,96,101,33,157,96,28,96,188,2,1,62,128,97,31,111,204,2,2,117,62,0,128,
97,31,110,212,2,2,60,62,0,3,109,28,106,222,2,3,48,60,62,0,108,28,106,232,
2,2,48,62,0,0,128,104,1,242,2,2,48,60,0,0,128,31,111,252,2,4,50,100,117,
112,0,129,97,157,97,6,3,4,116,117,99,107,0,128,97,157,97,18,3,2,43,33,0,
141,65,0,99,35,101,128,97,31,100,0,128,149,1,30,3,3,49,43,33,1,128,128,97,
146,1,50,3,3,49,45,33,6,65,157,1,62,3,2,50,33,0,141,65,3,100,80,65,31,100,
72,3,2,50,64,0,129,96,80,65,0,99,128,97,28,99,182,128,28,99,182,128,31,
100,86,3,2,98,108,0,32,128,28,96,110,3,6,119,105,116,104,105,110,0,56,65,
71,97,54,65,141,98,31,110,129,96,129,1,120,3,3,97,98,115,198,65,206,33,50,
1,28,96,144,3,6,115,111,117,114,99,101,0,42,192,174,1,212,65,31,97,158,3,
9,115,111,117,114,99,101,45,105,100,6,192,28,99,176,3,3,114,111,116,71,
97,128,97,141,98,156,97,192,3,4,45,114,111,116,0,227,65,227,1,227,65,31,
97,3,104,28,108,0,106,71,97,0,106,1,128,0,101,141,98,63,101,71,97,128,97,
71,97,0,101,141,98,35,101,141,98,63,101,206,3,7,101,120,101,99,117,116,
101,71,97,28,96,0,99,98,65,11,34,5,2,28,96,0,4,2,99,64,0,129,99,128,97,16,
65,3,128,3,113,3,112,255,128,31,103,24,4,2,99,33,0,141,65,16,65,3,128,3,
113,68,96,128,97,21,66,128,97,3,113,129,97,0,99,255,128,141,98,8,128,3,105,
3,113,3,103,3,104,149,1,46,4,4,104,101,114,101,0,88,128,28,99,90,4,5,97,
108,105,103,110,49,66,65,65,88,128,31,100,102,4,5,97,108,108,111,116,88,
128,146,1,64,98,128,97,71,97,71,97,28,96,141,98,141,98,128,97,64,98,28,96,
70,66,98,65,83,34,0,107,71,97,0,99,71,97,28,96,80,65,71,97,28,96,118,4,3,
109,105,110,129,111,92,34,31,97,31,96,172,4,3,109,97,120,135,65,104,65,90,
2,186,4,3,107,101,121,16,192,7,66,129,96,110,34,3,96,1,128,6,65,22,65,0,
108,102,34,129,96,6,65,114,65,30,65,3,97,71,65,102,2,198,4,7,47,115,116,
114,105,110,103,129,97,89,66,227,65,58,65,235,65,54,1,1,128,124,2,238,4,5,
99,111,117,110,116,129,96,43,65,128,97,15,2,129,97,15,2,129,97,8,128,3,
112,3,105,129,96,4,128,3,112,3,105,129,96,5,128,3,113,3,105,129,96,12,128,
3,113,3,105,128,97,8,128,3,113,31,105,180,1,3,99,114,99,6,65,71,97,98,65,
176,34,140,66,141,98,128,97,142,66,71,97,130,66,167,2,141,98,31,96,179,65,
28,99,24,192,7,2,8,5,4,101,109,105,116,0,18,192,7,2,108,5,2,99,114,0,13,
128,186,66,10,128,186,2,120,5,5,115,112,97,99,101,1,128,32,128,128,97,0,
128,96,66,71,97,208,2,129,96,186,66,75,66,156,5,31,97,58,128,186,66,199,2,
129,114,128,97,54,1,134,5,5,100,101,112,116,104,0,200,214,66,74,65,92,1,
178,5,4,112,105,99,107,0,86,65,214,66,28,99,86,65,214,66,0,116,31,97,129,
96,127,128,32,128,193,65,243,34,3,97,95,128,28,96,194,5,4,116,121,112,101,
0,0,128,71,97,129,96,5,35,128,97,136,66,129,98,1,35,236,66,186,66,128,97,
0,107,250,2,12,96,38,1,136,66,248,2,6,65,249,2,232,5,5,99,109,111,118,
101,71,97,25,3,71,97,129,96,15,66,129,98,26,66,43,65,141,98,43,65,75,66,34,
6,38,1,22,6,4,102,105,108,108,0,128,97,71,97,128,97,39,3,135,65,26,66,43,
65,75,66,72,6,38,1,56,6,5,99,97,116,99,104,129,114,71,97,10,192,0,99,71,
97,129,115,10,192,3,100,5,66,141,98,10,192,3,100,141,98,11,1,84,6,5,116,
104,114,111,119,98,65,76,35,10,192,0,99,3,117,141,98,10,192,3,100,64,98,0,
116,3,97,141,98,28,96,50,65,64,3,1,128,221,66,3,111,30,65,4,128,77,3,120,6,
7,100,101,99,105,109,97,108,10,128,136,128,31,100,170,6,3,104,101,120,16,
128,91,3,20,65,129,96,2,128,54,65,35,128,3,110,30,65,90,67,40,128,77,3,186,
6,4,104,111,108,100,0,124,128,0,99,0,107,129,96,124,128,3,100,26,66,124,
128,0,99,0,193,128,128,54,65,109,65,30,65,17,128,77,3,68,96,128,121,64,98,
128,121,141,98,227,1,9,128,129,97,3,111,7,128,3,103,35,101,48,128,63,101,
216,6,2,35,62,0,38,65,124,128,0,99,0,193,56,1,28,7,1,35,2,128,80,67,0,128,
20,65,128,67,134,67,112,3,44,7,2,35,115,0,152,67,135,65,239,65,162,35,28,
96,62,7,2,60,35,0,0,193,124,128,31,100,78,7,4,115,105,103,110,0,129,65,0,
108,30,65,45,128,112,3,68,96,203,65,0,128,170,67,162,67,141,98,177,67,145,
3,0,128,170,67,162,67,145,3,90,7,3,117,46,114,71,97,190,67,141,98,56,65,
200,66,248,2,129,96,199,66,5,128,197,3,132,7,2,117,46,0,190,67,199,66,248,
2,158,7,1,46,182,67,211,3,2,128,50,65,31,103,68,5,5,112,97,99,107,36,65,
65,68,96,129,97,129,96,217,67,54,65,58,65,151,65,135,65,26,66,43,65,128,
97,15,67,141,98,28,96,170,7,7,99,111,109,112,97,114,101,227,65,56,65,98,
65,252,35,71,97,38,65,141,98,31,96,71,97,8,4,136,66,227,65,136,66,227,65,
54,65,98,65,8,36,12,96,3,96,31,96,75,66,252,7,10,1,71,97,129,97,129,98,3,
111,129,96,23,36,8,128,129,96,180,66,32,128,180,66,180,66,141,98,63,101,
129,96,180,66,129,97,26,66,43,1,129,96,8,128,3,109,128,97,127,128,3,109,3,
104,28,108,129,96,13,128,3,105,47,36,30,68,46,36,32,128,25,4,11,4,3,97,3,
96,157,96,129,96,32,128,54,65,149,128,3,110,128,97,127,128,114,65,31,103,
26,65,2,128,3,103,119,1,222,7,6,97,99,99,101,112,116,0,58,65,129,97,129,
105,96,36,71,97,65,66,102,66,70,66,227,65,141,98,128,97,129,96,59,68,89,36,
50,68,86,36,25,68,88,4,22,192,7,66,95,4,10,128,3,105,94,36,25,68,95,4,47,
68,70,4,3,97,56,1,126,8,6,101,120,112,101,99,116,0,20,192,7,66,148,128,3,
100,31,97,196,8,5,113,117,101,114,121,214,65,80,128,20,192,7,66,42,192,3,
100,11,65,102,128,31,100,136,66,31,128,31,103,184,7,3,110,102,97,80,1,248,
8,3,99,102,97,127,68,129,96,15,66,122,68,35,101,80,65,217,3,127,68,121,
68,248,66,199,2,127,68,64,128,128,97,0,99,3,103,119,1,127,68,32,128,144,4,
224,129,12,130,193,1,128,97,71,97,129,96,129,96,178,36,129,96,127,68,136,
66,159,128,3,103,129,98,136,66,244,67,0,108,175,36,12,96,129,96,142,68,1,
128,3,104,50,1,3,96,129,99,157,4,12,96,10,1,71,97,26,192,129,99,198,36,129,
99,0,99,129,98,128,97,154,68,98,65,196,36,71,97,237,65,141,98,12,96,28,96,
80,65,182,4,11,65,141,98,12,1,216,8,15,115,101,97,114,99,104,45,119,111,
114,100,108,105,115,116,154,68,237,1,146,9,4,102,105,110,100,0,180,68,237,
1,71,97,48,128,54,65,9,128,129,97,3,111,231,36,7,128,54,65,129,96,10,128,
3,111,3,104,129,96,141,98,31,110,168,9,7,62,110,117,109,98,101,114,135,
65,65,66,3,97,15,66,20,65,218,68,0,108,250,36,3,97,70,66,28,96,128,97,20,
65,0,102,3,97,227,65,20,65,0,102,248,65,70,66,130,66,129,108,239,36,28,96,
6,65,168,128,3,100,20,65,71,97,140,66,45,128,3,109,68,96,18,37,130,66,
140,66,36,128,3,109,24,37,96,67,130,66,65,66,0,128,129,96,70,66,239,68,129,
96,48,37,140,66,46,128,3,105,41,37,237,65,227,65,141,98,10,65,141,98,91,3,
0,107,168,128,3,100,43,65,168,128,0,99,28,5,38,65,141,98,52,37,241,65,
141,98,91,67,6,1,71,97,66,5,32,128,129,97,129,98,35,101,15,66,3,111,66,37,
141,98,43,1,75,66,114,10,12,1,128,97,71,97,235,65,129,96,88,37,140,66,129,
98,54,65,129,98,32,128,3,109,4,128,229,66,5,66,86,37,12,96,237,1,130,66,
72,5,12,96,237,1,92,37,124,1,119,1,90,69,28,106,71,97,129,97,141,98,128,
97,65,66,129,98,180,138,69,69,135,65,141,98,186,138,69,69,128,97,141,98,
54,65,71,97,54,65,141,98,43,1,212,9,5,112,97,114,115,101,71,97,214,65,18,
65,35,101,42,192,0,99,18,65,54,65,129,98,95,69,102,128,146,65,141,98,32,
128,3,109,135,37,55,69,0,128,96,2,228,10,65,41,28,96,18,11,65,40,41,128,
118,69,38,1,24,11,2,46,40,0,41,128,118,69,248,2,34,11,65,92,42,192,0,99,
119,4,129,96,64,128,3,110,30,65,19,128,77,3,46,11,4,119,111,114,100,0,79,
67,118,69,156,69,49,66,224,3,32,128,166,5,68,11,4,99,104,97,114,0,171,69,
136,66,3,97,15,2,129,96,255,191,3,110,30,65,8,128,77,3,90,11,1,44,49,66,
129,96,80,65,181,69,56,66,31,100,118,11,2,99,44,0,49,66,181,69,26,66,88,
128,156,1,8,65,3,104,189,5,134,11,103,108,105,116,101,114,97,108,129,96,8,
65,3,103,219,37,0,106,203,69,0,234,189,5,203,5,92,65,0,192,31,104,156,11,
8,99,111,109,112,105,108,101,44,0,220,69,189,5,129,96,151,68,237,37,131,
68,0,99,189,5,131,68,229,5,212,65,248,66,13,128,77,3,129,96,148,68,0,108,
30,65,212,65,248,66,14,128,77,3,0,9,9,40,108,105,116,101,114,97,108,41,14,
65,0,108,30,65,211,5,190,11,9,105,110,116,101,114,112,114,101,116,216,68,
98,65,25,38,14,65,21,38,124,65,20,38,131,68,5,2,231,5,3,97,243,69,131,68,
5,2,68,96,136,66,7,69,43,38,12,96,168,128,0,99,129,65,36,38,3,97,41,6,14,
65,39,38,128,97,198,128,7,66,198,128,7,2,141,98,239,5,10,12,39,99,111,109,
112,105,108,101,141,98,129,99,189,69,80,65,71,97,28,96,90,12,9,105,109,109,
101,100,105,97,116,101,64,128,178,66,127,68,141,65,0,99,3,105,149,1,127,68,
128,128,128,97,65,6,136,66,63,101,70,66,129,96,73,70,65,65,71,97,128,97,71,
97,28,96,75,70,28,96,75,70,7,3,112,12,98,36,34,0,50,70,83,70,34,128,166,
69,73,70,56,2,174,12,98,46,34,0,50,70,85,70,92,6,192,12,5,97,98,111,114,
116,6,65,6,65,22,1,128,97,114,38,7,67,191,66,106,6,31,97,75,70,109,6,204,
12,102,97,98,111,114,116,34,0,50,70,115,70,92,6,14,65,30,65,85,70,3,32,
111,107,191,2,46,192,42,192,80,65,3,100,0,128,119,68,6,192,151,1,4,128,26,
65,3,103,119,1,246,11,3,105,111,33,131,70,158,129,16,192,3,100,166,129,18,
192,3,100,139,70,0,108,250,140,3,103,54,129,50,136,59,68,164,38,38,65,116,
133,76,136,136,136,20,192,3,100,22,192,3,100,24,192,3,100,224,128,31,100,
17,128,186,2,30,13,4,102,105,108,101,0,90,141,54,129,76,136,164,6,234,12,
1,93,6,65,114,128,31,100,110,13,65,91,114,128,151,1,0,200,28,116,98,65,0,
108,30,65,215,67,63,128,186,66,191,66,192,70,131,70,190,6,171,69,129,96,15,
66,212,38,11,70,0,128,80,67,204,6,3,97,224,128,7,2,120,13,4,113,117,105,
116,0,202,70,112,68,152,141,46,67,194,70,220,6,28,96,212,65,18,65,222,65,
224,128,28,99,224,128,3,100,6,192,3,100,119,68,42,192,167,1,174,13,8,101,
118,97,108,117,97,116,101,0,226,70,65,66,65,66,71,97,0,128,6,65,0,128,231,
70,152,141,46,67,141,98,70,66,70,66,231,70,64,3,173,171,3,109,30,65,22,
128,77,3,129,96,179,65,154,68,0,108,30,65,199,66,38,65,2,192,0,99,138,68,
85,70,9,114,101,100,101,102,105,110,101,100,191,2,129,96,15,66,30,65,10,
128,77,3,171,69,216,68,30,65,239,5,30,71,131,4,220,13,65,39,34,71,14,65,42,
39,211,5,28,96,72,14,105,91,99,111,109,112,105,108,101,93,34,71,229,5,86,
14,102,91,99,104,97,114,93,0,177,69,211,5,102,14,97,59,3,71,28,224,189,69,
190,70,98,65,68,39,179,65,31,100,28,96,116,14,1,58,55,66,49,66,129,96,2,
192,3,100,178,66,189,69,171,69,25,71,8,71,73,70,56,66,173,171,185,6,138,14,
101,98,101,103,105,110,49,2,170,14,101,97,103,97,105,110,92,65,189,5,180,
14,101,117,110,116,105,108,0,192,3,104,94,7,49,66,12,1,103,71,94,7,192,14,
98,105,102,0,103,71,100,7,214,14,100,116,104,101,110,0,49,66,92,65,129,97,
0,99,3,104,149,1,224,14,100,101,108,115,101,0,105,71,128,97,116,7,244,14,
101,119,104,105,108,101,110,7,2,15,102,114,101,112,101,97,116,0,128,97,94,
71,116,7,2,192,0,99,131,4,12,15,103,114,101,99,117,114,115,101,142,71,229,
5,34,15,6,99,114,101,97,116,101,0,71,71,3,97,50,70,21,64,179,65,3,100,
190,6,48,15,5,62,98,111,100,121,80,1,141,98,92,65,49,66,92,65,142,71,129,
96,80,65,203,69,3,100,189,5,72,15,101,100,111,101,115,62,50,70,169,71,28,
96,102,15,8,118,97,114,105,97,98,108,101,0,157,71,0,128,189,5,116,15,8,99,
111,110,115,116,97,110,116,0,157,71,46,128,220,69,49,66,74,65,177,7,134,15,
7,58,110,111,110,97,109,101,103,71,173,171,185,6,158,15,99,102,111,114,
71,225,189,69,49,2,174,15,100,110,101,120,116,0,50,70,75,66,189,5,186,15,
99,97,102,116,3,97,105,71,89,71,156,97,94,13,4,104,105,100,101,0,30,71,69,
6,35,125,71,97,28,96,214,15,5,116,114,97,99,101,34,71,26,65,68,96,1,128,
3,104,241,71,141,98,63,125,0,128,71,97,129,99,129,98,114,65,8,40,80,65,2,
8,12,96,28,96,200,15,9,103,101,116,45,111,114,100,101,114,26,192,0,72,
129,96,74,65,128,97,26,192,54,65,92,65,68,96,0,107,198,65,30,40,50,128,77,
3,71,97,35,8,129,99,128,97,74,65,75,66,64,16,0,99,141,98,28,96,0,0,14,
102,111,114,116,104,45,119,111,114,100,108,105,115,116,0,90,128,28,96,80,
16,6,115,121,115,116,101,109,0,92,128,28,96,102,16,9,115,101,116,45,111,
114,100,101,114,129,96,6,65,3,109,72,40,3,97,50,128,1,128,64,8,129,96,8,
128,104,65,78,40,49,128,77,3,26,192,128,97,71,97,85,8,141,65,3,100,80,65,
75,66,164,16,151,1,116,16,5,102,111,114,116,104,50,128,49,72,2,128,64,8,
127,68,15,66,128,128,3,103,28,108,98,65,110,40,129,96,96,72,108,40,129,96,
138,68,0,99,101,8,191,2,176,16,5,119,111,114,100,115,16,72,98,65,127,40,
128,97,129,96,191,66,210,67,211,66,0,99,101,72,0,107,116,8,28,96,20,16,4,
111,110,108,121,0,6,65,64,8,0,17,11,100,101,102,105,110,105,116,105,111,
110,115,26,192,0,99,181,1,129,96,158,40,0,107,128,97,71,97,144,72,129,97,
129,98,3,105,157,40,43,65,141,98,235,1,12,96,28,96,12,17,6,45,111,114,100,
101,114,0,16,72,144,72,3,96,64,8,62,17,6,43,111,114,100,101,114,0,68,96,
164,72,16,72,141,98,128,97,43,65,64,8,80,17,6,101,100,105,116,111,114,0,52,
128,173,8,104,17,6,117,112,100,97,116,101,0,6,65,12,192,31,100,158,128,28,
99,195,72,63,101,118,17,4,115,97,118,101,0,0,128,49,66,3,118,64,3,142,17,
5,102,108,117,115,104,12,192,0,99,0,108,30,65,0,128,6,65,205,8,158,17,5,
98,108,111,99,107,79,67,129,96,63,128,109,65,229,40,35,128,77,3,129,96,
158,128,3,100,10,128,31,113,6,128,31,113,6,128,31,112,234,72,128,97,222,72,
35,101,64,128,28,96,238,72,244,6,180,17,4,108,111,97,100,0,0,128,15,128,
71,97,135,65,65,66,244,72,70,66,43,65,75,66,250,17,38,1,124,128,186,2,3,
128,200,66,64,128,45,128,201,66,191,2,129,96,2,128,197,3,222,72,31,97,236,
17,4,108,105,115,116,0,129,96,16,73,191,66,7,73,0,128,129,96,16,128,3,111,
40,41,135,65,13,73,5,73,238,72,9,67,5,73,191,66,43,65,27,9,7,73,38,1,38,
128,0,99,16,65,28,108,1,128,38,128,65,6,42,73,52,41,12,1,30,128,0,99,49,66,
3,105,59,41,2,128,28,96,32,128,0,99,32,128,151,65,0,128,49,66,165,66,3,
105,70,41,3,128,28,96,46,73,12,1,49,73,98,65,78,41,50,65,129,96,22,1,18,
128,16,73,146,70,92,72,192,70,1,128,0,106,3,117,212,128,7,2,139,70,30,65,
96,67,85,70,8,101,70,79,82,84,72,32,118,0,132,153,0,128,197,67,191,66,90,
67,49,66,215,67,0,192,49,66,54,65,210,67,191,2,88,73,219,6,129,97,131,68,
114,65,116,41,11,1,127,4,255,159,31,103,86,65,117,73,71,97,129,96,139,41,
129,99,129,97,129,98,235,65,193,65,137,41,129,99,129,98,111,73,98,65,137,
41,12,96,31,96,0,99,122,9,12,96,28,96,71,97,16,72,129,96,158,41,128,97,
129,98,119,73,98,65,156,41,71,97,0,107,232,66,141,98,12,96,28,96,0,107,143,
9,12,96,28,96,71,97,0,103,141,98,31,109,129,96,117,73,86,65,204,67,199,
66,141,73,98,65,174,41,121,68,248,66,28,96,8,65,8,65,160,73,184,41,76,128,
186,66,255,255,3,103,204,3,0,224,0,224,160,73,191,41,65,128,186,66,31,97,0,
224,0,192,160,73,198,41,67,128,186,66,164,9,0,224,0,160,160,73,205,41,90,
128,186,66,164,9,66,128,186,66,164,9,71,97,129,96,129,98,3,110,222,41,203,
67,211,66,129,99,203,67,199,66,175,73,191,66,80,65,209,9,12,96,31,97,36,
18,3,115,101,101,171,69,180,68,32,71,128,97,129,109,235,41,3,97,49,66,71,
97,191,66,211,66,129,96,138,68,129,96,191,66,131,68,141,98,208,73,199,66,
59,128,186,66,129,96,148,68,3,42,85,70,13,32,99,111,109,112,105,108,101,
45,111,110,108,121,129,96,151,68,11,42,85,70,7,32,105,110,108,105,110,101,
142,68,20,42,85,70,10,32,105,109,109,101,100,105,97,116,101,0,191,2,192,19,
2,46,115,0,221,66,98,65,32,42,129,96,229,66,215,67,0,107,25,10,85,70,4,
32,60,115,112,0,191,2,92,65,71,97,43,10,129,99,204,67,80,65,75,66,80,20,
28,96,42,20,4,100,117,109,112,0,16,128,35,101,4,128,3,112,71,97,67,10,191,
66,16,128,135,65,129,97,204,67,211,66,37,74,235,65,2,128,200,66,9,67,75,
66,112,20,31,97,195,72,222,8,129,96,0,132,236,72,3,110,30,65,24,128,77,3,
72,74,234,72,70,74,63,101,0,0,1,108,16,9,166,20,1,118,195,72,22,9,172,20,
1,110,1,128,197,72,85,74,88,10,180,20,1,112,6,65,93,10,192,20,1,122,70,
74,0,132,32,128,32,3,200,20,1,107,79,74,64,128,104,10,212,20,1,115,192,72,
211,8,222,20,1,113,52,128,164,8,230,20,1,120,117,74,195,72,250,72,185,8,
238,20,2,105,97,0,234,72,35,101,70,74,35,101,214,65,18,65,35,101,128,97,
212,65,3,96,18,65,54,65,15,67,153,5,250,20,1,105,0,128,128,97,128,10,
};

const size_t embed_default_block_size =  5414;

