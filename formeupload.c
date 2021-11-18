#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>


struct db{
    int r;
    int* b_bits;
};

struct mb{
    int m;
    int* m_bits;
};

struct FusionTree{
    int n;
    int *key;
    bool leaf;
    struct db* difbit;
    struct mb* masbit;
    int gap;
    int node_sketch;
    int mask_sketch;
    int mask_q;
    int mask_b;
    int mask_bm;
    struct FusionTree** next;
};

struct root{
    struct FusionTree* r;
    int wor_len;
    float c;
    float w;
    int keys_max;
    int keys_min;
};

int main(){
    return 0;
}