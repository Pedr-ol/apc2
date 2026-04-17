// Online C compiler to run C program online
#include <stdio.h>
typedef unsigned char uchar;
typedef struct rgba_char {
    uchar a;
    uchar b;
    uchar g;
    uchar r;
} RGBAChar;

typedef union upixel {
    int pixel;
    RGBAChar canais; // struct rgba_char canais;
    uchar rgba[4];
} UPixel;

typedef struct spixel {
    int pixel;
    RGBAChar canais; // struct rgba_char canais;
} SPixel;

int main() {
    printf("sizeof(RGBAChar): %d + ", 
                (int)sizeof(RGBAChar));
    printf("sizeof(int): %d\n", 
                (int)sizeof(int));
    printf("sizeof(SPixel): %d\n", 
                (int)sizeof(SPixel));
                
                
    printf("sizeof(UPixel): %d\n", 
                (int)sizeof(UPixel));
    UPixel p1; // union pixel p1;
    
    printf("sizeof(p1): %d\n", 
                (int)sizeof(p1));
    printf("sizeof(p1.pixel): %d\n", 
                (int)sizeof(p1.pixel));
    printf("sizeof(p1.canais): %d\n", 
                (int)sizeof(p1.canais));
    printf("sizeof(p1.canais.b): %d\n\n", 
                (int)sizeof(p1.canais.b));
    printf("sizeof(p1.rgba): %d\n\n", 
                (int)sizeof(p1.rgba));
    //return 0;
    // Write C code here
    p1.pixel = 0xAABBCCDD;
    printf("(int) pixel: %X\n", p1.pixel);
    printf("R: %X | rgba[3]: %X\n", 
        p1.canais.r, p1.rgba[3]);
    printf("G: %X | rgba[2]: %X\n", 
        p1.canais.g, p1.rgba[2]);
    printf("B: %X | rgba[1]: %X\n", 
        p1.canais.b, p1.rgba[1]);
    printf("A: %X | rgba[0]: %X\n", 
        p1.canais.a, p1.rgba[0]);
    p1.canais.b = 238;
    printf("(int) pixel: %X\n", p1.pixel);
    printf("R: %X | rgba[3]: %X\n", 
        p1.canais.r, p1.rgba[3]);
    printf("G: %X | rgba[2]: %X\n", 
        p1.canais.g, p1.rgba[2]);
    printf("B: %X | rgba[1]: %X\n", 
        p1.canais.b, p1.rgba[1]);
    printf("A: %X | rgba[0]: %X\n\n", 
        p1.canais.a, p1.rgba[0]);
                       
    int pixel = 0xAABBCCDD;
    UPixel *pupixel; 
    pupixel = (UPixel *) &pixel;
    // 0x|AA|BB|CC|DD| int pixel;
    //   |-----------| pupixel->pixel
    //     r  g  b  a  pupixel->canais
    //     3  2  1  0  pupixel->rgba
    printf("utilizando ponteiro para int pixel;\n");
    printf("pixel: %X\n", pixel);
    printf("pupixel->pixel: %X\n", pupixel->pixel);
    printf("R: %X | rgba[3]: %X\n", 
        pupixel->canais.r, pupixel->rgba[3]);
    printf("G: %X | rgba[2]: %X\n", 
        pupixel->canais.g, pupixel->rgba[2]);
    printf("B: %X | rgba[1]: %X\n", 
        pupixel->canais.b, pupixel->rgba[1]);
    printf("A: %X | rgba[0]: %X\n", 
        pupixel->canais.a, pupixel->rgba[0]);
    
    pupixel->canais.b = 238;    
        
    printf("pixel: %X\n", pixel);
    printf("pupixel->pixel: %X\n", pupixel->pixel);
    printf("R: %X | rgba[3]: %X\n", 
        pupixel->canais.r, pupixel->rgba[3]);
    printf("G: %X | rgba[2]: %X\n", 
        pupixel->canais.g, pupixel->rgba[2]);
    printf("B: %X | rgba[1]: %X\n", 
        pupixel->canais.b, pupixel->rgba[1]);
    printf("A: %X | rgba[0]: %X\n", 
        pupixel->canais.a, pupixel->rgba[0]);
    return 0;
}