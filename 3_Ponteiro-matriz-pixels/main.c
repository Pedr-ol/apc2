#include <math.h>
#include <stdio.h>

// move o cursor para a posição (x,y) do console
void gotoxy(int x, int y) { printf("\033[%d;%df", y, x); }

// limpa a tela do console
void clear() { printf("\033[2J"); }

// função para desenhar um pixel na posição (x,y) do console
void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
  // get console coordinates and draw rgbaPixel
  gotoxy(x, y);
  printf("\033[48;2;%d;%d;%dm  \033[0;00m", r, g, b);
}

#define R 0xff000000
#define G 0x00ff0000
#define B 0x0000ff00
#define A 0x000000ff

#define RGBA(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

int main() {
  // imagem 10x10
  int imagem[10][10] = {{RGBA(255, 0, 0, 255), RGBA(230, 25, 25, 255),
                         RGBA(204, 51, 51, 255), RGBA(179, 76, 76, 255),
                         RGBA(153, 102, 102, 255), RGBA(128, 128, 128, 255),
                         RGBA(102, 153, 153, 255), RGBA(76, 179, 179, 255),
                         RGBA(51, 204, 204, 255), RGBA(25, 230, 230, 255)},
                        {RGBA(255, 25, 0, 255), RGBA(230, 51, 25, 255),
                         RGBA(204, 76, 51, 255), RGBA(179, 102, 76, 255),
                         RGBA(153, 128, 102, 255), RGBA(128, 153, 128, 255),
                         RGBA(102, 179, 153, 255), RGBA(76, 204, 179, 255),
                         RGBA(51, 230, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 51, 0, 255), RGBA(230, 76, 25, 255),
                         RGBA(204, 102, 51, 255), RGBA(179, 128, 76, 255),
                         RGBA(153, 153, 102, 255), RGBA(128, 179, 128, 255),
                         RGBA(102, 204, 153, 255), RGBA(76, 230, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 76, 0, 255), RGBA(230, 102, 25, 255),
                         RGBA(204, 128, 51, 255), RGBA(179, 153, 76, 255),
                         RGBA(153, 179, 102, 255), RGBA(128, 204, 128, 255),
                         RGBA(102, 230, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 102, 0, 255), RGBA(230, 128, 25, 255),
                         RGBA(204, 153, 51, 255), RGBA(179, 179, 76, 255),
                         RGBA(153, 204, 102, 255), RGBA(128, 230, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 128, 0, 255), RGBA(230, 153, 25, 255),
                         RGBA(204, 179, 51, 255), RGBA(179, 204, 76, 255),
                         RGBA(153, 230, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 153, 0, 255), RGBA(230, 179, 25, 255),
                         RGBA(204, 204, 51, 255), RGBA(179, 230, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 179, 0, 255), RGBA(230, 204, 25, 255),
                         RGBA(204, 230, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 204, 0, 255), RGBA(230, 230, 25, 255),
                         RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 230, 0, 255), RGBA(230, 255, 25, 255),
                         RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)}};

  // copia imagem original para imagem 2
  int imagem2[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem2[x][y] = imagem[x][y];
  }

  // copia imagem original para imagem 3
  int imagem3[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem3[x][y] = imagem[x][y];
  }
  
  // copia imagem original para imagem 4
  int imagem4[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem4[x][y] = imagem[x][y];
  }

  // copia imagem original para imagem 5
  int imagem5[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem5[x][y] = imagem[x][y];
  }

  // copia imagem original para imagem 6
  int imagem6[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem6[x][y] = imagem[x][y];
  }
  
  // copia imagem original para imagem 7
  int imagem7[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem7[x][y] = imagem[x][y];
  }

  // copia imagem original para imagem 8
  int imagem8[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem8[x][y] = imagem[x][y];
  }
  
  // copia imagem original para imagem 9
  int imagem9[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem9[x][y] = imagem[x][y];
  }
  

  // Exercício 1
  unsigned char *pchar2 = (unsigned char *)imagem2;
  for (int i = 0; i < 10 * 10 * 4; i += 4) {
    pchar2[i] = 0;
}

  
  // Exercício 3
  unsigned char *pchar3 = (unsigned char *)imagem3;
  for (int i = 0; i < 10 * 10 * 4; i += 4) {
    unsigned char media = (pchar3[i] + pchar3[i+1] + pchar3[i+2]) / 3;
    pchar3[i] = media;
    pchar3[i+1] = media;
    pchar3[i+2] = media;
}
  // Exercício 4
  unsigned char *pchar4 = (unsigned char *)imagem4;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
        if (x == y || x + y == 9) {
            int i = (x * 10 + y) * 4;
            pchar4[i] = 0;
            pchar4[i+1] = 0;
            pchar4[i+2] = 255;
        }
    }
}

  // Exercício 5
  unsigned char *pchar5 = (unsigned char *)imagem5;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
        if (x == 0 || x == 9 || y == 0 || y == 9) {
            int i = (x * 10 + y) * 4;
            pchar5[i] = 0;
            pchar5[i+1] = 0;
            pchar5[i+2] = 255;
        }
    }
}

  // Exercício 6
  unsigned char *pchar6 = (unsigned char *)imagem6;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
        if (x < 5) {
            int i = (x * 10 + y) * 4;
            pchar6[i] = 0;
            pchar6[i+1] = 0;
            pchar6[i+2] = 0;
        }
    }
}

  // Exercício 7
  unsigned char *pchar7 = (unsigned char *)imagem7;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
        if (x >= 5) {
            int i = (x * 10 + y) * 4;
            pchar7[i] = 0;
            pchar7[i+1] = 0;
            pchar7[i+2] = 0;
        }
    }
}

  // Exercício 8
  unsigned char *pchar8 = (unsigned char *)imagem8;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
        if (x >= 3 && x <= 6 && y >= 3 && y <= 6) {
            int i = (x * 10 + y) * 4;
            pchar8[i] = 0;
            pchar8[i+1] = 0;
            pchar8[i+2] = 0;
        }
    }
}


  // Exercício 9
  unsigned char *pchar9 = (unsigned char *)imagem9;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
        if ((x < 3 || x > 6) || (y < 3 || y > 6)) {
            int i = (x * 10 + y) * 4;
            pchar9[i] = 0;
            pchar9[i+1] = 0;
            pchar9[i+2] = 0;
        }
    }
}

  // limpa a tela
  clear();
  gotoxy(1, 1);
  printf("Imagem original\n");
  // desenha a imagem original a partir da posição (0,2)
  int xoffset = 1, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem[x][y] & R) >> 24,
              (imagem[x][y] & G) >> 16, (imagem[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 1);
  printf("Imagem2 sem o vermelho\n");
  xoffset = 25, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem2[x][y] & R) >> 24,
              (imagem2[x][y] & G) >> 16, (imagem2[x][y] & B) >> 8);
    }
  }

  gotoxy(49, 1);
  printf("Imagem3 em escala de cinza\n");
  xoffset = 49, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem3[x][y] & R) >> 24,
              (imagem3[x][y] & G) >> 16, (imagem3[x][y] & B) >> 8);
    }
  }

  gotoxy(1, 14);
  printf("Imagem4 com X azul");
  gotoxy(1, 16);
  xoffset = 1, yoffset = 16;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem4[x][y] & R) >> 24,
              (imagem4[x][y] & G) >> 16, (imagem4[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 14);
  printf("Imagem5 com bordas");
  gotoxy(25, 16);
  xoffset = 25, yoffset = 16;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem5[x][y] & R) >> 24,
              (imagem5[x][y] & G) >> 16, (imagem5[x][y] & B) >> 8);
    }
  }

  gotoxy(49, 14);
  printf("Imagem6 meia árvore");
  gotoxy(49, 16);
  xoffset = 49, yoffset = 16;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem6[x][y] & R) >> 24,
              (imagem6[x][y] & G) >> 16, (imagem6[x][y] & B) >> 8);
    }
  }
  printf("\n");

  gotoxy(1, 27);
  printf("Imagem7 meia árvore inv");
  gotoxy(1, 29);
  xoffset = 1, yoffset = 29;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem7[x][y] & R) >> 24,
              (imagem7[x][y] & G) >> 16, (imagem7[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 27);
  printf("Imagem8 inter. árvores");
  gotoxy(25, 29);
  xoffset = 25, yoffset = 29;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem8[x][y] & R) >> 24,
              (imagem8[x][y] & G) >> 16, (imagem8[x][y] & B) >> 8);
    }
  }

  gotoxy(49, 27);
  printf("Imagem9 união árvores");
  gotoxy(49, 29);
  xoffset = 49, yoffset = 29;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem9[x][y] & R) >> 24,
        (imagem9[x][y] & G) >> 16, (imagem9[x][y] & B) >> 8);
    }
  }
  printf("\n");
  return 0;
}