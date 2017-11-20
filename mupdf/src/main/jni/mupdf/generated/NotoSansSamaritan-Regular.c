#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_font_NotoSansSamaritan_Regular_ttf_size = 10060;
asm(".section .rodata");
asm(".global fz_font_NotoSansSamaritan_Regular_ttf");
asm(".type fz_font_NotoSansSamaritan_Regular_ttf STT_OBJECT");
asm(".size fz_font_NotoSansSamaritan_Regular_ttf, 10060");
asm(".balign 64");
asm("fz_font_NotoSansSamaritan_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansSamaritan-Regular.ttf\"");
#else
const int fz_font_NotoSansSamaritan_Regular_ttf_size = 10060;
const char fz_font_NotoSansSamaritan_Regular_ttf[] = {
0,1,0,0,0,14,0,128,0,3,0,96,71,68,69,70,2,46,1,252,0,0,31,64,0,0,0,90,71,
80,79,83,121,10,223,253,0,0,31,156,0,0,6,220,71,83,85,66,132,112,145,163,
0,0,38,120,0,0,0,212,79,83,47,50,117,77,103,68,0,0,1,104,0,0,0,96,99,109,
97,112,217,222,101,164,0,0,2,212,0,0,0,100,103,97,115,112,0,7,0,7,0,0,31,
52,0,0,0,12,103,108,121,102,21,31,145,101,0,0,3,192,0,0,21,62,104,101,97,
100,4,108,163,27,0,0,0,236,0,0,0,54,104,104,101,97,14,242,3,44,0,0,1,36,0,
0,0,36,104,109,116,120,2,6,252,64,0,0,1,200,0,0,1,12,108,111,99,97,197,244,
203,72,0,0,3,56,0,0,0,136,109,97,120,112,0,72,0,59,0,0,1,72,0,0,0,32,110,
97,109,101,142,170,186,190,0,0,25,0,0,0,6,18,112,111,115,116,255,105,0,102,
0,0,31,20,0,0,0,32,0,1,0,0,0,1,7,174,204,230,102,28,95,15,60,245,0,11,8,0,
0,0,0,0,204,194,130,90,0,0,0,0,210,40,203,254,252,177,255,147,9,177,8,132,
0,0,0,9,0,2,0,0,0,0,0,0,0,1,0,0,8,141,253,168,0,0,10,121,252,177,250,199,
9,177,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,1,0,0,0,67,0,58,0,4,0,0,0,0,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,220,1,144,0,5,0,0,5,154,5,51,0,
0,1,31,5,154,5,51,0,0,3,209,0,102,2,0,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,71,79,79,71,0,64,0,0,254,255,8,141,253,168,0,0,8,141,
2,88,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,32,0,2,4,0,0,102,0,0,0,0,4,20,0,0,2,20,
0,0,7,106,0,180,6,53,0,100,6,84,0,80,5,68,0,130,6,222,0,130,7,105,0,130,7,
7,0,130,7,144,0,30,7,159,0,180,8,192,0,100,5,227,0,180,4,219,0,40,7,75,0,
160,5,209,0,160,6,43,0,160,7,47,0,180,6,8,0,160,8,147,0,40,5,211,0,140,5,
180,0,130,6,187,0,130,7,126,0,180,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,9,3,62,0,
30,0,0,0,0,0,0,253,137,0,0,253,216,0,0,255,13,0,0,255,44,0,0,255,68,0,0,252,
177,0,0,253,75,0,0,253,183,1,213,0,24,0,0,254,105,0,0,253,140,0,0,253,196,
1,250,0,27,0,0,253,192,0,0,254,18,0,0,253,98,0,0,0,6,0,0,0,0,2,223,0,200,
2,223,0,200,4,187,0,200,6,255,0,200,6,255,0,200,4,161,0,200,5,93,0,200,10,
121,0,200,8,153,0,200,8,131,0,200,8,131,0,200,4,5,0,200,4,238,0,200,6,115,
0,200,3,103,0,200,0,0,0,0,3,103,1,33,0,0,0,1,0,3,0,1,0,0,0,12,0,4,0,88,0,
0,0,18,0,16,0,3,0,2,0,0,0,13,0,32,0,160,8,45,8,62,46,49,254,255,255,255,0,
0,0,0,0,13,0,32,0,160,8,0,8,48,46,49,254,255,255,255,0,1,255,245,255,227,
255,99,248,4,248,2,210,17,1,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,20,0,20,0,20,0,20,0,84,0,155,0,199,1,13,1,80,1,137,1,211,2,39,2,114,2,191,
2,253,3,48,3,132,3,195,4,12,4,66,4,120,4,196,4,247,5,52,5,104,5,157,5,213,
6,8,6,22,6,55,6,89,6,123,6,154,6,185,6,211,6,237,7,6,7,20,7,34,7,48,7,69,
7,90,7,121,7,152,7,184,7,216,7,248,8,34,8,72,8,86,8,100,8,122,8,144,8,201,
9,9,9,58,9,115,9,172,9,193,9,223,10,4,10,32,10,47,10,85,10,122,10,136,10,
159,0,2,0,102,0,0,3,154,5,182,0,3,0,7,0,0,51,17,33,17,37,33,17,33,102,3,52,
253,47,2,110,253,146,5,182,250,74,98,4,242,0,1,0,180,255,166,6,222,5,94,0,
34,0,0,23,38,53,52,18,19,38,39,55,22,0,23,18,55,23,4,7,22,23,54,0,55,23,6,
0,7,39,2,2,39,6,2,21,20,23,224,44,175,173,72,80,64,172,1,9,102,255,215,121,
254,207,222,52,49,74,1,40,120,124,171,254,205,121,113,74,198,141,97,111,37,
90,85,180,174,1,208,1,16,37,16,236,35,254,250,231,1,91,130,202,184,252,143,
192,132,1,66,70,214,104,254,230,155,22,1,65,1,180,117,169,254,92,187,158,
81,0,2,0,100,255,177,5,169,5,73,0,35,0,45,0,0,36,54,53,52,3,38,35,33,34,38,
38,53,52,62,3,51,50,0,0,21,20,6,35,34,36,35,34,7,55,54,51,50,4,51,3,38,38,
39,6,2,21,20,51,51,4,104,76,198,191,156,254,199,61,63,73,112,182,140,58,43,
41,1,106,1,106,219,201,148,253,232,130,66,49,39,40,38,120,2,23,138,100,95,
153,26,34,208,22,221,79,50,61,80,1,110,17,18,78,35,36,160,208,130,35,254,
3,253,163,61,106,151,86,12,235,8,159,2,215,164,216,9,18,254,211,49,15,0,0,
1,0,80,255,162,5,180,5,70,0,23,0,0,1,7,35,18,18,21,20,7,39,54,53,52,2,39,
4,6,7,39,54,36,33,50,5,51,5,35,83,229,207,250,73,239,67,216,191,254,246,243,
76,143,56,1,82,1,14,131,1,97,62,4,167,1,254,250,253,234,191,157,140,94,126,
140,180,1,233,251,12,113,123,176,115,121,23,0,0,2,0,130,255,162,4,164,5,70,
0,34,0,44,0,0,33,54,54,53,52,39,39,33,34,38,38,53,52,18,54,54,51,50,23,54,
51,50,23,7,38,35,34,7,22,18,22,21,20,6,7,1,38,38,39,6,2,21,20,51,51,3,102,
31,42,69,187,254,152,61,63,73,219,146,105,67,23,43,114,112,118,105,60,118,
85,46,41,95,220,41,41,38,254,227,65,111,32,34,208,22,221,60,166,78,151,191,
7,18,78,35,54,1,27,146,83,49,39,35,188,41,7,168,254,1,156,95,78,166,71,3,
134,177,206,4,18,254,211,49,15,0,0,1,0,130,255,162,6,62,5,71,0,38,0,0,5,39,
54,53,52,39,0,7,39,54,54,55,55,38,39,6,0,7,39,54,54,55,55,39,34,4,7,39,54,
36,51,50,22,23,23,18,0,21,20,5,245,239,67,60,254,89,39,206,32,252,244,93,
68,104,192,254,248,23,205,31,233,255,94,63,241,254,177,91,143,52,1,90,237,
64,167,26,94,222,1,4,94,94,124,142,150,161,254,255,235,83,118,230,128,51,
150,160,92,254,241,137,82,111,224,137,51,84,101,150,176,107,125,9,5,115,254,
240,253,216,195,161,0,1,0,130,255,162,6,201,5,84,0,30,0,0,1,23,18,0,21,20,
7,39,54,53,52,2,39,6,4,7,39,54,36,37,38,39,4,4,7,39,54,36,36,51,50,4,174,
20,244,1,19,73,238,66,101,93,242,254,233,32,193,41,1,59,1,61,78,93,254,145,
254,200,76,169,54,1,55,1,254,123,28,5,25,28,254,181,253,199,174,161,136,94,
124,142,118,1,46,165,122,243,112,112,107,238,141,121,122,55,175,180,153,139,
180,87,0,2,0,130,255,147,6,103,5,221,0,32,0,43,0,0,19,22,22,23,54,36,51,50,
18,18,21,20,6,4,7,39,54,54,51,50,54,54,53,52,39,6,4,35,34,38,2,38,39,1,54,
36,55,2,35,34,4,7,23,22,214,123,154,50,168,1,161,147,69,161,136,177,253,138,
156,110,56,176,154,209,156,77,59,201,254,162,127,103,47,122,144,111,2,27,
130,1,64,157,84,36,108,254,205,155,37,19,5,221,15,182,205,111,150,254,155,
253,221,116,104,125,111,109,207,41,44,39,78,70,71,241,144,159,184,1,254,195,
7,253,13,3,200,179,1,29,157,140,182,93,0,3,0,30,255,162,6,240,5,106,0,26,
0,37,0,46,0,0,5,39,54,53,52,39,4,6,7,39,2,0,39,55,22,23,54,36,51,50,22,23,
23,18,0,21,20,1,6,4,7,22,23,54,54,55,55,38,5,54,55,55,39,6,4,7,22,6,167,238,
66,74,254,240,223,17,236,105,254,185,247,64,156,147,87,1,24,170,62,182,22,
94,217,1,9,253,254,174,254,242,47,24,10,60,233,220,84,56,253,113,136,255,
106,89,205,254,239,83,88,94,94,123,142,153,181,167,227,100,59,1,207,1,218,
49,236,21,140,60,65,14,4,111,255,0,253,206,201,161,3,155,106,255,106,104,
102,83,178,121,46,116,77,126,132,56,121,3,68,68,130,0,0,1,0,180,255,176,6,
235,5,85,0,46,0,0,1,14,2,21,20,18,18,51,50,0,18,53,52,35,34,6,21,20,22,23,
7,38,38,53,52,54,36,51,50,22,23,6,2,14,2,7,6,35,34,0,2,53,54,36,55,3,183,
71,186,254,167,219,96,142,1,22,184,53,95,168,21,16,176,58,43,226,1,2,85,86,
134,12,8,106,108,146,154,79,143,130,183,254,196,218,24,2,62,111,4,215,38,
58,55,39,146,254,41,254,200,1,54,1,230,212,38,108,57,29,39,19,176,61,108,
72,49,192,130,116,71,175,254,229,225,224,174,57,105,1,124,2,153,208,33,92,
67,0,0,1,0,100,255,190,8,92,5,191,0,45,0,0,19,18,0,51,50,23,54,51,50,23,54,
55,23,14,2,7,23,20,2,7,7,2,7,39,54,54,0,54,53,52,38,35,34,2,2,7,5,54,18,55,
38,35,34,2,3,100,81,1,150,236,184,75,195,195,176,88,125,229,50,157,91,71,
24,1,80,110,71,125,7,251,10,105,1,4,105,97,84,119,249,209,4,254,250,5,205,
136,16,135,128,226,83,1,170,1,100,2,21,140,204,126,150,68,222,54,49,62,44,
10,97,254,253,226,145,255,0,113,66,68,210,1,158,248,92,88,105,254,188,253,
210,106,29,95,2,5,197,144,254,162,254,181,0,1,0,180,255,170,5,47,5,68,0,41,
0,0,1,6,17,23,20,6,35,34,36,35,34,7,55,54,51,50,4,51,50,54,53,52,2,53,53,
55,6,35,34,38,53,52,55,23,6,21,20,22,51,50,54,55,5,47,68,1,202,160,224,254,
226,73,87,48,39,40,66,91,1,60,166,93,106,46,1,147,224,228,251,16,233,9,134,
141,145,180,43,5,8,245,253,46,147,113,147,86,12,235,8,159,84,77,70,1,163,
157,47,47,112,189,177,61,60,63,41,40,100,84,152,169,0,1,0,40,255,199,4,59,
7,13,0,29,0,0,1,55,22,22,21,20,2,3,7,22,51,50,36,51,50,23,23,38,35,34,4,35,
34,39,55,18,0,53,52,38,1,157,102,133,148,197,253,137,44,54,133,1,110,131,
67,40,39,48,96,115,254,94,127,143,96,46,211,1,56,104,6,37,232,71,240,135,
191,254,50,254,136,207,22,130,8,235,12,57,47,181,1,13,2,126,210,103,151,0,
0,1,0,160,255,167,6,151,5,75,0,57,0,0,1,6,21,20,22,51,50,62,2,55,23,6,17,
23,20,6,35,32,36,35,34,7,55,54,51,50,4,4,51,50,54,53,52,2,39,6,35,34,39,6,
35,34,38,53,52,55,23,6,21,20,22,51,50,62,2,55,4,17,32,83,82,67,107,76,6,15,
242,68,1,202,160,254,226,254,30,160,117,48,40,40,94,126,1,42,1,47,192,93,
106,40,4,102,151,235,89,116,189,179,192,37,215,32,84,82,61,104,84,9,22,5,
12,122,89,119,108,107,233,63,91,53,240,253,31,147,113,147,105,12,235,8,126,
52,84,77,62,1,135,119,106,170,170,203,186,141,129,63,122,89,119,108,97,224,
99,81,0,1,0,160,255,187,5,29,7,178,0,39,0,0,1,54,51,50,22,18,17,16,2,6,35,
34,36,35,34,7,55,54,51,50,22,51,50,18,17,52,38,38,35,34,7,39,38,2,53,52,55,
23,2,21,1,114,180,217,208,233,101,103,215,167,141,254,244,126,73,43,40,40,
38,127,255,132,133,131,67,156,128,255,123,101,33,46,32,247,73,4,254,72,129,
254,224,254,222,254,212,254,232,132,57,12,235,8,130,1,11,1,62,224,197,96,
105,29,96,1,56,114,177,156,51,254,227,248,0,2,0,160,255,178,5,179,8,2,0,31,
0,41,0,0,1,22,22,21,20,7,22,0,0,21,20,0,7,22,21,7,38,2,2,38,53,52,54,54,55,
38,39,54,53,52,38,39,19,22,18,23,36,55,38,38,39,6,1,73,132,148,54,173,1,197,
1,22,253,192,206,16,245,20,97,162,9,211,162,50,108,84,31,117,88,114,101,161,
50,1,158,152,62,234,154,113,8,2,71,227,131,112,146,63,254,210,254,222,86,
97,254,181,66,86,75,45,230,1,65,1,16,35,10,41,137,152,77,59,32,174,92,91,
168,29,251,217,93,254,243,156,168,198,114,240,106,137,0,2,0,180,0,154,6,123,
5,80,0,14,0,28,0,0,19,54,36,33,50,4,23,23,20,2,0,35,34,0,2,0,54,18,53,52,
36,35,34,4,21,20,18,22,51,180,49,1,178,1,15,251,1,115,100,3,231,254,180,168,
188,254,183,231,3,110,253,170,254,184,219,202,254,220,174,241,98,4,186,64,
86,78,71,46,208,254,3,254,218,1,54,2,40,253,106,243,1,87,137,52,72,70,54,
122,254,155,244,0,0,1,0,160,255,197,5,84,5,80,0,32,0,0,19,54,36,51,50,22,
18,17,16,2,6,35,34,36,35,34,7,55,54,51,50,4,51,50,54,17,52,38,38,35,34,4,
7,160,142,1,15,249,206,233,103,101,211,172,145,254,178,124,74,41,39,40,38,
124,1,72,129,134,130,69,155,127,106,254,230,96,4,160,89,87,136,254,216,254,
214,254,214,254,249,128,57,12,235,8,130,251,1,55,230,209,101,123,82,0,0,1,
0,40,255,181,7,223,5,80,0,46,0,0,1,38,38,35,34,7,39,54,51,50,23,18,0,51,50,
23,54,51,50,22,21,20,2,7,7,6,7,39,54,18,18,53,52,38,35,34,2,2,7,5,54,18,55,
38,35,34,2,2,73,108,168,77,91,63,38,58,64,110,146,115,1,74,177,179,75,195,
200,152,174,80,110,71,125,7,252,15,241,225,97,84,119,249,209,4,254,250,5,
206,133,20,129,131,226,1,205,49,52,25,215,16,54,1,10,1,47,132,209,189,160,
97,254,253,226,145,246,113,75,103,1,115,1,146,137,88,105,254,188,253,210,
106,29,94,2,10,191,133,254,161,0,2,0,140,255,174,5,31,5,108,0,17,0,29,0,0,
19,36,33,50,0,21,20,5,7,22,21,20,7,39,54,53,52,2,39,22,18,23,55,54,53,52,
38,35,34,6,140,1,45,1,52,243,1,63,254,230,222,57,46,233,34,244,4,122,192,
60,185,141,192,151,91,186,4,141,223,254,229,181,78,246,192,156,128,120,86,
82,78,100,204,1,245,216,136,254,222,124,162,125,73,147,184,70,0,2,0,130,255,
163,5,20,5,95,0,25,0,37,0,0,33,54,53,52,39,38,35,33,34,38,38,53,52,62,4,51,
50,22,0,18,21,20,7,1,38,2,39,6,0,21,20,22,51,51,23,4,7,24,65,223,147,254,
219,61,63,73,100,166,129,89,58,39,22,54,1,41,216,31,254,173,53,151,52,33,
254,246,10,12,201,143,69,87,191,220,19,18,78,35,31,152,212,139,82,42,53,253,
240,253,207,172,94,60,3,62,134,1,21,59,17,254,129,47,10,5,2,0,0,1,0,130,2,
244,6,57,5,135,0,32,0,0,1,6,21,20,22,51,50,62,2,55,23,6,21,20,22,51,50,18,
55,23,2,33,34,38,39,6,35,34,38,53,52,55,1,137,32,83,82,61,104,85,10,20,235,
31,83,82,118,131,5,164,11,254,81,118,173,43,116,189,181,201,38,5,72,122,89,
119,108,95,225,105,76,63,118,93,119,108,1,2,243,51,253,160,88,82,170,206,
183,137,133,0,0,1,0,180,255,166,6,222,5,94,0,27,0,0,23,38,53,52,18,55,38,
39,55,22,0,19,54,0,55,23,6,0,7,39,2,2,39,6,2,21,20,23,224,44,179,155,63,75,
64,247,1,96,117,81,1,29,112,124,171,254,205,121,113,73,195,138,98,117,37,
90,85,180,188,1,231,242,31,15,236,49,254,32,254,49,122,1,48,66,214,104,254,
230,155,22,1,61,1,177,118,169,254,91,180,158,81,0,0,1,0,1,6,84,2,96,8,128,
0,35,0,0,1,6,6,35,34,38,53,55,38,38,53,52,54,55,23,6,6,7,21,20,22,51,50,54,
55,23,6,6,7,21,20,22,51,50,54,55,2,96,46,95,60,89,121,2,95,103,55,44,90,21,
45,2,44,40,26,42,36,74,18,40,2,51,33,39,58,29,6,199,54,61,100,81,16,8,101,
72,50,93,35,78,12,71,22,5,33,41,29,32,77,13,30,46,6,31,37,46,30,0,0,1,0,0,
6,84,1,185,8,132,0,32,0,0,1,6,6,21,20,22,51,55,23,6,6,35,34,38,53,52,54,55,
23,7,6,6,21,20,22,51,51,38,38,53,52,54,55,1,128,29,32,33,42,21,22,53,105,
53,114,116,15,14,128,13,11,14,54,54,4,14,14,75,75,7,82,9,45,20,24,40,2,68,
24,26,147,135,59,165,54,22,67,59,116,46,87,76,23,41,26,60,87,27,0,1,0,0,6,
84,5,57,6,214,0,3,0,0,19,33,7,33,22,5,35,22,250,221,6,214,130,0,0,1,0,9,6,
69,1,202,8,34,0,15,0,0,1,6,4,7,55,55,54,54,55,38,38,39,55,22,4,23,1,178,96,
254,253,70,10,61,42,108,80,65,161,67,57,54,1,13,61,6,243,29,106,39,132,33,
22,39,21,20,74,41,95,44,130,17,0,1,0,30,5,240,3,28,6,226,0,19,0,0,1,6,6,35,
34,38,35,34,6,7,39,54,54,51,50,22,51,50,54,55,3,28,24,120,79,56,181,66,44,
43,13,140,20,109,87,59,186,62,42,44,14,6,166,91,91,105,51,54,60,86,94,104,
52,54,0,1,0,0,6,84,2,254,7,70,0,19,0,0,1,6,6,35,34,38,35,34,6,7,39,54,54,
51,50,22,51,50,54,55,2,254,24,120,79,56,181,66,44,43,13,140,20,109,87,59,
186,62,42,44,14,7,10,91,91,105,51,54,60,86,94,104,52,54,0,1,253,137,6,63,
255,253,8,94,0,14,0,0,1,38,38,39,55,22,22,23,54,54,55,23,6,6,7,254,114,46,
118,69,166,61,62,30,40,103,60,106,89,142,42,6,94,125,230,87,70,103,152,100,
92,163,71,78,100,229,107,0,0,1,253,216,6,69,255,206,7,246,0,14,0,0,1,38,38,
39,55,22,22,23,54,54,55,23,6,6,7,254,146,36,95,55,132,44,51,28,35,90,37,85,
66,116,37,6,94,100,184,69,55,76,110,98,82,137,43,63,74,179,95,0,0,1,255,13,
6,75,255,226,8,119,0,12,0,0,3,22,22,21,20,6,7,7,54,53,52,2,39,37,4,3,24,21,
119,3,32,20,8,119,29,63,34,93,220,108,9,31,43,117,1,2,72,0,0,1,255,44,6,76,
255,226,8,48,0,13,0,0,3,22,22,21,20,6,7,7,52,54,53,52,38,39,36,4,2,20,18,
102,2,27,17,8,48,26,54,29,88,186,93,8,14,33,17,96,233,60,0,1,255,68,6,77,
255,226,7,238,0,12,0,0,3,22,22,21,20,6,7,7,54,53,52,38,39,35,3,2,17,16,89,
3,24,15,7,238,23,47,25,64,168,83,7,25,31,84,199,51,0,1,252,177,6,84,255,255,
6,214,0,3,0,0,1,33,7,33,252,199,3,56,22,252,200,6,214,130,0,1,253,75,6,84,
0,0,6,200,0,3,0,0,1,33,7,33,253,94,2,162,19,253,94,6,200,116,0,1,253,183,
6,84,255,226,6,184,0,3,0,0,1,33,7,33,253,199,2,27,17,253,230,6,184,100,0,
1,0,24,5,241,1,175,8,43,0,7,0,0,19,54,18,55,55,6,2,7,24,64,122,26,195,35,
189,117,6,12,105,1,37,117,28,129,254,190,119,0,0,1,254,105,6,67,0,0,8,125,
0,7,0,0,1,54,18,55,55,6,2,7,254,105,64,122,26,195,35,189,117,6,94,105,1,37,
117,28,129,254,190,119,0,1,253,140,6,62,0,0,8,93,0,14,0,0,1,22,22,23,7,38,
38,39,6,6,7,39,54,54,55,254,239,42,142,89,106,60,103,40,28,64,61,166,69,118,
46,8,93,107,229,100,78,71,163,92,96,156,103,70,87,230,125,0,0,1,253,196,6,
71,255,186,7,248,0,14,0,0,1,22,22,23,7,38,38,39,6,6,7,39,54,54,55,254,224,
34,112,72,85,43,92,27,21,49,52,133,55,95,36,7,248,90,175,83,63,50,146,66,
74,120,90,56,69,184,100,0,0,1,0,27,5,242,1,223,7,180,0,15,0,0,19,54,54,55,
23,6,6,7,7,22,22,23,7,38,38,39,54,140,186,44,43,36,121,72,66,62,153,92,67,
55,173,157,7,9,51,87,33,81,27,53,24,22,5,61,57,120,43,82,48,0,0,1,253,192,
6,58,255,230,8,107,0,15,0,0,1,54,54,55,23,6,6,7,7,22,22,23,7,38,38,39,253,
226,187,210,51,57,44,149,93,83,78,192,110,84,82,239,145,7,155,68,101,39,102,
33,65,31,29,5,73,69,154,65,111,43,0,1,254,18,6,84,255,214,8,22,0,15,0,0,1,
54,54,55,23,6,6,7,7,22,22,23,7,38,38,39,254,45,140,186,44,43,36,121,72,66,
62,153,92,67,55,173,157,7,107,51,87,33,81,27,53,24,22,5,61,57,120,43,82,48,
0,2,253,98,6,38,0,2,8,127,0,11,0,19,0,0,3,38,39,39,37,54,18,55,55,22,18,23,
1,6,6,7,5,39,38,38,82,9,15,153,254,101,110,147,42,71,48,175,79,254,191,25,
87,30,1,49,45,42,58,6,38,3,2,12,27,158,1,10,113,20,123,254,227,89,1,70,74,
177,52,14,82,75,115,0,0,2,0,6,6,139,1,207,8,78,0,11,0,23,0,0,18,38,53,52,
54,51,50,22,21,20,6,35,55,52,38,35,34,6,21,20,22,51,50,54,121,115,136,108,
93,120,142,105,130,57,47,54,69,52,52,50,68,6,139,110,94,110,137,112,89,103,
147,227,59,59,71,63,49,53,61,0,0,1,0,0,6,84,1,79,7,169,0,3,0,0,1,7,39,55,
1,79,132,203,138,7,33,205,138,203,0,1,0,200,2,65,2,23,3,150,0,3,0,0,1,7,39,
55,2,23,131,204,138,3,14,205,138,203,0,2,0,200,0,155,2,23,4,239,0,3,0,7,0,
0,1,7,39,55,19,7,39,55,2,23,131,204,138,197,131,204,138,4,104,205,138,202,
252,121,205,138,202,0,0,2,0,200,4,39,3,243,5,124,0,3,0,7,0,0,1,7,39,55,5,
7,39,55,2,23,132,203,138,2,161,132,203,138,4,244,205,138,203,136,205,138,
203,0,0,2,0,200,0,121,6,55,4,249,0,3,0,33,0,0,1,7,39,55,1,54,54,53,52,38,
38,39,39,54,51,50,4,51,50,55,7,6,35,34,36,35,34,7,22,0,21,20,6,7,6,55,131,
204,138,252,122,80,63,138,236,26,35,96,143,138,1,77,109,106,48,39,40,77,134,
254,183,86,67,31,22,1,174,91,93,4,104,205,138,202,252,92,46,101,75,81,205,
224,33,130,47,29,12,225,8,96,16,23,254,79,165,139,157,65,0,3,0,200,0,121,
6,55,4,249,0,3,0,7,0,37,0,0,1,7,39,55,19,7,39,55,5,54,54,53,52,38,38,39,39,
54,51,50,4,51,50,55,7,6,35,34,36,35,34,7,22,0,21,20,6,7,6,55,131,204,138,
197,131,204,138,252,122,80,63,138,236,26,35,96,143,138,1,77,109,106,48,39,
40,77,134,254,183,86,67,31,22,1,174,91,93,4,104,205,138,202,252,121,205,138,
202,164,46,101,75,81,205,224,33,130,47,29,12,225,8,96,16,23,254,79,165,139,
157,65,0,3,0,200,0,69,3,217,4,206,0,3,0,7,0,24,0,0,1,7,39,55,5,7,39,55,19,
6,4,21,20,4,23,23,38,36,38,53,52,54,54,36,55,2,32,106,162,110,1,233,106,162,
110,207,250,254,249,1,61,242,15,118,254,73,228,47,158,1,38,208,4,97,164,111,
162,109,164,111,162,253,237,16,84,62,57,146,53,212,14,154,170,83,32,128,101,
73,8,0,0,2,0,200,255,237,4,149,5,124,0,29,0,33,0,0,1,22,22,21,20,6,6,7,22,
51,50,36,51,50,23,23,38,35,34,4,35,34,39,55,54,0,53,52,38,39,1,7,39,55,2,
65,75,81,99,194,70,31,67,86,1,73,134,77,40,39,48,106,117,254,177,128,143,
96,35,10,1,45,46,69,1,48,132,203,138,3,209,57,132,110,101,166,186,74,16,96,
8,225,12,29,47,130,12,1,40,124,61,78,42,1,241,205,138,203,0,2,0,200,0,121,
9,177,4,249,0,29,0,33,0,0,1,54,54,53,52,38,38,39,39,54,51,50,4,51,50,55,7,
6,35,34,36,35,34,7,22,0,21,20,6,7,1,33,7,33,7,8,80,63,138,236,26,35,96,143,
138,1,77,109,106,48,39,40,77,134,254,183,86,67,31,22,1,174,91,93,249,75,5,
52,29,250,204,1,75,46,101,75,81,205,224,33,130,47,29,12,225,8,96,16,23,254,
79,165,139,157,65,2,201,178,0,2,0,200,2,65,7,209,3,150,0,3,0,7,0,0,19,33,
7,33,37,7,39,55,229,5,52,29,250,204,7,9,131,204,138,3,66,178,126,205,138,
203,0,3,0,200,0,155,7,187,4,239,0,3,0,7,0,11,0,0,1,7,39,55,19,7,39,55,1,33,
7,33,7,187,131,204,138,197,131,204,138,249,239,5,52,29,250,204,4,104,205,
138,202,252,121,205,138,202,1,83,178,0,0,4,0,200,0,155,7,187,4,239,0,3,0,
7,0,11,0,15,0,0,1,7,39,55,19,7,39,55,1,33,7,33,19,33,7,33,7,187,131,204,138,
197,131,204,138,249,239,5,52,29,250,204,29,5,52,29,250,204,4,104,205,138,
202,252,121,205,138,202,2,27,178,254,240,178,0,3,0,200,0,155,3,61,4,239,0,
3,0,7,0,11,0,0,19,51,17,35,1,7,39,55,19,7,39,55,200,173,173,2,117,131,204,
138,197,131,204,138,4,224,251,205,3,187,205,138,202,252,121,205,138,202,0,
1,0,200,1,46,4,38,5,73,0,3,0,0,1,23,1,39,3,158,136,253,43,137,5,73,107,252,
80,107,0,4,0,200,1,46,5,171,5,73,0,3,0,7,0,11,0,15,0,0,1,23,1,39,1,7,39,55,
3,7,39,55,5,7,39,55,3,158,136,253,43,137,4,4,131,204,139,14,131,205,138,2,
119,132,204,137,5,73,107,252,80,107,1,178,205,138,203,254,44,205,136,205,
121,206,138,203,0,2,0,200,2,6,2,159,3,215,0,11,0,22,0,0,0,38,53,52,54,51,
50,22,21,20,6,35,55,52,38,35,34,6,21,20,51,50,54,1,61,117,143,108,97,123,
147,108,134,59,48,56,71,108,52,69,2,6,114,96,116,139,115,92,107,151,234,60,
62,74,64,106,64,0,0,1,0,0,6,84,3,19,6,214,0,3,0,0,19,33,7,33,22,2,253,22,
253,3,6,214,130,0,0,1,1,33,2,86,2,69,3,134,0,11,0,0,1,6,6,35,34,38,53,52,
54,51,50,22,2,69,6,87,64,67,68,89,70,60,73,2,238,72,80,69,63,80,92,77,0,0,
0,0,0,15,0,186,0,3,0,1,4,9,0,0,0,94,0,0,0,3,0,1,4,9,0,1,0,38,0,94,0,3,0,1,
4,9,0,2,0,14,0,132,0,3,0,1,4,9,0,3,0,76,0,146,0,3,0,1,4,9,0,4,0,38,0,94,0,
3,0,1,4,9,0,5,0,30,0,222,0,3,0,1,4,9,0,6,0,34,0,252,0,3,0,1,4,9,0,7,0,68,
1,30,0,3,0,1,4,9,0,8,0,42,1,98,0,3,0,1,4,9,0,9,0,40,1,140,0,3,0,1,4,9,0,10,
0,96,1,180,0,3,0,1,4,9,0,11,0,62,2,20,0,3,0,1,4,9,0,12,0,60,2,82,0,3,0,1,
4,9,0,13,2,150,2,142,0,3,0,1,4,9,0,14,0,52,5,36,0,67,0,111,0,112,0,121,0,
114,0,105,0,103,0,104,0,116,0,32,0,50,0,48,0,49,0,51,0,32,0,71,0,111,0,111,
0,103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,32,0,65,0,108,0,108,0,32,0,
82,0,105,0,103,0,104,0,116,0,115,0,32,0,82,0,101,0,115,0,101,0,114,0,118,
0,101,0,100,0,46,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,110,0,115,0,32,0,
83,0,97,0,109,0,97,0,114,0,105,0,116,0,97,0,110,0,82,0,101,0,103,0,117,0,
108,0,97,0,114,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,73,0,
109,0,97,0,103,0,105,0,110,0,103,0,32,0,45,0,32,0,78,0,111,0,116,0,111,0,
32,0,83,0,97,0,110,0,115,0,32,0,83,0,97,0,109,0,97,0,114,0,105,0,116,0,97,
0,110,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,48,0,51,0,
32,0,117,0,104,0,78,0,111,0,116,0,111,0,83,0,97,0,110,0,115,0,83,0,97,0,109,
0,97,0,114,0,105,0,116,0,97,0,110,0,78,0,111,0,116,0,111,0,32,0,105,0,115,
0,32,0,97,0,32,0,116,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,32,0,
111,0,102,0,32,0,71,0,111,0,111,0,103,0,108,0,101,0,32,0,73,0,110,0,99,0,
46,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,73,0,109,0,97,0,
103,0,105,0,110,0,103,0,32,0,73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,0,
116,0,121,0,112,0,101,0,32,0,68,0,101,0,115,0,105,0,103,0,110,0,32,0,84,0,
101,0,97,0,109,0,68,0,97,0,116,0,97,0,32,0,117,0,110,0,104,0,105,0,110,0,
116,0,101,0,100,0,46,0,32,0,68,0,101,0,115,0,105,0,103,0,110,0,101,0,100,
0,32,0,98,0,121,0,32,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,
0,100,0,101,0,115,0,105,0,103,0,110,0,32,0,116,0,101,0,97,0,109,0,46,0,104,
0,116,0,116,0,112,0,58,0,47,0,47,0,119,0,119,0,119,0,46,0,103,0,111,0,111,
0,103,0,108,0,101,0,46,0,99,0,111,0,109,0,47,0,103,0,101,0,116,0,47,0,110,
0,111,0,116,0,111,0,47,0,104,0,116,0,116,0,112,0,58,0,47,0,47,0,119,0,119,
0,119,0,46,0,109,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,46,0,99,0,111,
0,109,0,47,0,115,0,116,0,117,0,100,0,105,0,111,0,84,0,104,0,105,0,115,0,32,
0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,
0,32,0,105,0,115,0,32,0,108,0,105,0,99,0,101,0,110,0,115,0,101,0,100,0,32,
0,117,0,110,0,100,0,101,0,114,0,32,0,116,0,104,0,101,0,32,0,83,0,73,0,76,
0,32,0,79,0,112,0,101,0,110,0,32,0,70,0,111,0,110,0,116,0,32,0,76,0,105,0,
99,0,101,0,110,0,115,0,101,0,44,0,32,0,86,0,101,0,114,0,115,0,105,0,111,0,
110,0,32,0,49,0,46,0,49,0,46,0,32,0,84,0,104,0,105,0,115,0,32,0,70,0,111,
0,110,0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,
0,115,0,32,0,100,0,105,0,115,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,100,
0,32,0,111,0,110,0,32,0,97,0,110,0,32,0,34,0,65,0,83,0,32,0,73,0,83,0,34,
0,32,0,66,0,65,0,83,0,73,0,83,0,44,0,32,0,87,0,73,0,84,0,72,0,79,0,85,0,84,
0,32,0,87,0,65,0,82,0,82,0,65,0,78,0,84,0,73,0,69,0,83,0,32,0,79,0,82,0,32,
0,67,0,79,0,78,0,68,0,73,0,84,0,73,0,79,0,78,0,83,0,32,0,79,0,70,0,32,0,65,
0,78,0,89,0,32,0,75,0,73,0,78,0,68,0,44,0,32,0,101,0,105,0,116,0,104,0,101,
0,114,0,32,0,101,0,120,0,112,0,114,0,101,0,115,0,115,0,32,0,111,0,114,0,32,
0,105,0,109,0,112,0,108,0,105,0,101,0,100,0,46,0,32,0,83,0,101,0,101,0,32,
0,116,0,104,0,101,0,32,0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,32,0,
70,0,111,0,110,0,116,0,32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,32,0,
102,0,111,0,114,0,32,0,116,0,104,0,101,0,32,0,115,0,112,0,101,0,99,0,105,
0,102,0,105,0,99,0,32,0,108,0,97,0,110,0,103,0,117,0,97,0,103,0,101,0,44,
0,32,0,112,0,101,0,114,0,109,0,105,0,115,0,115,0,105,0,111,0,110,0,115,0,
32,0,97,0,110,0,100,0,32,0,108,0,105,0,109,0,105,0,116,0,97,0,116,0,105,0,
111,0,110,0,115,0,32,0,103,0,111,0,118,0,101,0,114,0,110,0,105,0,110,0,103,
0,32,0,121,0,111,0,117,0,114,0,32,0,117,0,115,0,101,0,32,0,111,0,102,0,32,
0,116,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,
0,116,0,119,0,97,0,114,0,101,0,46,0,104,0,116,0,116,0,112,0,58,0,47,0,47,
0,115,0,99,0,114,0,105,0,112,0,116,0,115,0,46,0,115,0,105,0,108,0,46,0,111,
0,114,0,103,0,47,0,79,0,70,0,76,0,0,0,3,0,0,0,0,0,0,255,102,0,102,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,8,0,2,255,255,0,3,0,1,0,0,0,12,
0,0,0,82,0,0,0,2,0,11,0,0,0,25,0,1,0,26,0,29,0,3,0,30,0,30,0,1,0,31,0,39,
0,3,0,40,0,40,0,1,0,41,0,43,0,3,0,44,0,44,0,1,0,45,0,49,0,3,0,50,0,64,0,1,
0,65,0,65,0,3,0,66,0,66,0,1,0,4,0,0,0,1,0,0,0,0,0,1,0,0,0,10,0,56,0,150,0,
2,68,70,76,84,0,30,115,97,109,114,0,14,0,4,0,0,0,0,255,255,0,3,0,0,0,2,0,
4,0,4,0,0,0,0,255,255,0,3,0,1,0,3,0,5,0,6,100,105,115,116,0,38,100,105,115,
116,0,46,109,97,114,107,0,54,109,97,114,107,0,62,109,107,109,107,0,70,109,
107,109,107,0,82,0,0,0,2,0,0,0,1,0,0,0,2,0,0,0,1,0,0,0,2,0,2,0,3,0,0,0,2,
0,2,0,3,0,0,0,4,0,4,0,5,0,6,0,7,0,0,0,4,0,4,0,5,0,6,0,7,0,10,0,22,0,30,0,
38,0,46,0,54,0,62,0,70,0,78,0,86,0,94,0,8,0,0,0,1,0,80,0,8,0,0,0,1,0,134,
0,4,0,0,0,1,0,188,0,4,0,0,0,1,1,98,0,6,0,0,0,1,2,6,0,6,0,0,0,1,2,54,0,6,0,
0,0,1,2,126,0,6,0,0,0,1,2,252,0,1,0,0,0,1,3,132,0,1,0,0,0,1,3,156,0,3,0,0,
0,1,0,18,0,1,0,40,0,1,0,0,0,8,0,2,0,3,0,32,0,39,0,0,0,41,0,43,0,8,0,45,0,
47,0,11,0,2,0,3,0,32,0,39,0,0,0,41,0,43,0,8,0,45,0,47,0,11,0,3,0,0,0,1,0,
18,0,1,0,40,0,1,0,0,0,9,0,2,0,3,0,30,0,30,0,0,0,40,0,40,0,1,0,44,0,44,0,2,
0,2,0,3,0,32,0,39,0,0,0,41,0,43,0,8,0,45,0,47,0,11,0,1,0,136,0,164,0,2,0,
12,0,46,0,8,0,1,3,198,0,1,3,204,0,0,3,60,0,0,3,66,0,0,3,72,0,0,3,78,0,0,3,
84,0,0,4,200,0,22,3,20,3,158,3,56,3,92,3,62,3,176,3,68,3,182,3,62,3,176,3,
62,3,188,3,74,3,194,3,80,3,188,3,86,3,200,3,92,3,206,3,98,3,176,3,104,3,212,
3,110,3,218,3,116,3,224,3,122,3,230,3,20,3,158,3,128,3,236,3,134,3,242,3,
140,3,248,3,62,3,254,3,146,4,4,3,152,3,200,0,2,0,4,0,26,0,29,0,0,0,31,0,31,
0,4,0,48,0,49,0,5,0,65,0,65,0,7,0,2,0,1,0,4,0,25,0,0,0,1,0,122,0,144,0,1,
0,12,0,70,0,14,0,0,3,132,0,0,3,138,0,0,3,144,0,0,3,150,0,0,3,150,0,0,3,156,
0,0,3,162,0,0,3,168,0,0,3,168,0,0,3,132,0,0,3,132,0,0,3,174,0,0,3,180,0,0,
3,168,0,25,3,68,3,68,3,68,3,68,3,68,3,68,3,128,3,134,3,68,3,68,3,68,3,140,
3,68,3,146,3,152,3,68,3,68,3,68,3,68,3,68,3,134,3,68,3,230,4,106,4,106,0,
2,0,3,0,32,0,39,0,0,0,41,0,43,0,8,0,45,0,47,0,11,0,2,0,4,0,4,0,25,0,0,0,30,
0,30,0,22,0,40,0,40,0,23,0,44,0,44,0,24,0,1,0,32,0,48,0,1,0,12,0,26,0,3,0,
0,3,230,0,0,3,242,0,0,1,250,0,2,3,210,3,222,0,2,0,2,0,29,0,29,0,0,0,48,0,
49,0,1,0,1,0,2,0,28,0,65,0,1,0,44,0,72,0,1,0,12,0,38,0,6,0,0,3,24,0,0,3,30,
0,0,3,36,0,0,3,42,0,0,3,48,0,0,3,36,0,2,2,248,2,248,0,2,0,4,0,28,0,29,0,0,
0,31,0,31,0,2,0,48,0,49,0,3,0,65,0,65,0,5,0,1,0,2,0,26,0,27,0,1,0,84,0,106,
0,1,0,12,0,70,0,14,0,0,2,170,0,0,2,176,0,0,2,182,0,0,2,182,0,0,2,182,0,0,
2,182,0,0,2,182,0,0,2,182,0,0,2,176,0,0,2,182,0,0,2,188,0,0,2,182,0,0,2,182,
0,0,2,182,0,6,2,106,2,106,2,106,2,106,2,106,2,106,0,2,0,3,0,32,0,39,0,0,0,
41,0,43,0,8,0,45,0,47,0,11,0,2,0,4,0,28,0,29,0,0,0,31,0,31,0,2,0,48,0,49,
0,3,0,65,0,65,0,5,0,1,0,100,0,122,0,1,0,12,0,70,0,14,0,0,2,114,0,0,2,120,
0,0,2,126,0,0,2,126,0,0,2,126,0,0,2,126,0,0,2,126,0,0,2,126,0,0,2,132,0,0,
2,126,0,0,2,138,0,0,2,126,0,0,2,126,0,0,2,126,0,14,2,50,2,50,2,86,2,92,2,
98,2,104,2,110,2,116,2,122,2,128,2,134,2,50,2,140,2,146,0,2,0,3,0,32,0,39,
0,0,0,41,0,43,0,8,0,45,0,47,0,11,0,2,0,3,0,32,0,39,0,0,0,41,0,43,0,8,0,45,
0,47,0,11,0,1,0,10,0,5,2,88,2,88,0,2,0,3,0,32,0,39,0,0,0,41,0,43,0,8,0,45,
0,47,0,11,0,2,0,20,0,5,0,3,2,88,2,88,2,88,2,88,2,88,2,88,0,2,0,3,0,30,0,30,
0,0,0,40,0,40,0,1,0,44,0,44,0,2,0,1,3,172,5,220,0,1,2,158,6,104,0,1,0,180,
6,144,0,1,1,104,6,104,0,1,0,220,6,164,0,1,0,180,6,104,0,1,2,148,5,220,0,1,
2,188,5,220,0,1,2,128,5,220,0,1,3,72,6,84,0,1,2,228,6,4,0,1,3,232,5,240,0,
1,4,76,5,220,0,1,2,228,5,220,0,1,2,113,7,148,0,1,3,132,5,220,0,1,3,32,5,220,
0,1,4,6,5,220,0,1,3,12,5,220,0,1,5,0,5,220,0,1,2,228,5,240,0,1,3,112,6,4,
0,1,4,16,5,220,0,1,5,215,5,220,0,1,1,24,6,104,0,1,0,200,6,104,0,1,4,176,5,
220,0,1,4,36,5,220,0,1,5,20,5,220,0,1,5,120,5,220,0,1,6,64,5,220,0,1,7,28,
6,4,0,1,3,232,5,220,0,1,6,4,5,220,0,1,4,106,5,220,0,1,4,216,5,220,0,1,4,111,
5,220,0,1,7,63,5,220,0,1,4,126,5,220,0,1,4,66,5,220,0,1,5,170,6,4,0,1,0,100,
5,220,0,1,254,197,6,104,0,1,254,247,6,104,0,1,255,136,6,104,0,1,255,156,6,
104,0,1,254,92,6,104,0,1,254,182,6,104,0,1,254,212,6,104,0,1,254,252,6,104,
0,1,255,1,6,104,0,1,0,100,6,84,0,1,0,100,6,4,0,1,255,176,5,220,0,1,254,232,
5,220,0,1,255,136,5,220,0,1,255,176,0,0,0,1,255,196,0,0,0,1,255,156,0,0,0,
1,0,0,0,0,0,1,255,206,0,0,0,1,255,106,6,99,0,1,5,20,6,99,0,1,1,194,6,99,0,
1,2,238,6,99,0,1,1,244,6,99,0,1,1,44,6,99,0,1,1,124,6,104,0,1,254,162,5,220,
0,1,253,148,6,99,0,1,0,40,6,99,0,1,255,226,6,99,0,1,0,0,6,99,0,1,0,20,6,99,
0,1,255,206,6,99,0,1,254,212,6,99,0,1,254,232,6,99,0,1,254,252,6,99,0,1,252,
124,6,99,0,1,252,224,6,99,0,1,253,88,6,99,0,1,254,12,6,99,0,1,253,68,6,99,
0,1,253,128,6,99,0,1,253,188,6,99,0,1,253,58,6,99,0,1,2,138,7,38,0,1,0,220,
6,104,0,1,1,124,7,38,0,1,0,220,6,144,0,1,254,212,5,220,0,1,0,0,0,10,0,48,
0,74,0,2,68,70,76,84,0,26,115,97,109,114,0,14,0,4,0,0,0,0,255,255,0,1,0,0,
0,4,0,0,0,0,255,255,0,1,0,1,0,2,99,97,108,116,0,14,99,97,108,116,0,20,0,0,
0,1,0,0,0,0,0,1,0,0,0,2,0,6,0,18,0,6,0,0,0,3,0,20,0,38,0,56,0,1,0,0,0,1,0,
106,0,3,0,1,0,60,0,1,0,54,0,0,0,1,0,0,0,1,0,3,0,0,0,1,0,36,0,1,0,50,0,1,0,
0,0,1,0,3,0,1,0,54,0,1,0,18,0,0,0,1,0,0,0,1,0,1,0,1,0,28,0,1,0,2,0,26,0,27,
0,2,0,3,0,32,0,39,0,0,0,41,0,43,0,8,0,45,0,47,0,11,0,1,0,2,0,17,0,18,0,2,
0,8,0,1,0,65,0,1,0,1,0,28,};
#endif
