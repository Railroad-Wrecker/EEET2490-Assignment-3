// Constants for a Linear Congruential Generator
// Constants for a simple linear congruential generator (LCG)
#define LCG_A 1664525  // Multiplier
#define LCG_C 1013904223 // Increment
#define LCG_M 4294967296 // Modulus (2^32)

#define MAX_COL 768
#define MAX_ROW 1024

#define GREEN_PIXEL 0x00cd600
#define LIGHT_GREEN_PIXEL 0x00109400

extern int obstacle_ctr;
extern int obstacle_width;
extern int obstacle_height;

unsigned int lcg_random();
void convert1DTo2D(int *one_d_array, int rows, int cols, int two_d_array[rows][cols]);
void deleteColumns(unsigned long original[][6], unsigned long edited[][3], int rows, int cols, int colStart, int colEnd);
int getNumberOfColumns(unsigned long array[][5], int rows);
int abs(int x);
int detect_obstacles(const unsigned long *image, int width, int height);