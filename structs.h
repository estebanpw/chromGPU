#include <CL/cl.h>

#define FIXED_K 12
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) <= (y)) ? (x) : (y))

typedef struct parameters{
    ulong z_value;
    ulong kmer_size;
	ulong seq_length;
	ulong t_work_items;
	ulong kmers_per_work_item;
    ulong offset;
} Parameters;

typedef struct hash_item{
    //unsigned char bitmask[8];
    ulong repeat;
    ulong key;
    ulong pos_in_x;
    ulong pos_in_y;
} Hash_item;