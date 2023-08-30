#include <tudio.h>

int main() {
  char caracter;// 'abc...;'-128 a 127'-> 1 byte

  unsigned char caracter_sem_sinal;//0 a 255
  
  char string[10];// "um texto"
  
  int inteiro; // '-2147483648 a 2147483647 -> 4byte

  unsigned int inteiro_sem_sinal;//0 a 4294967295 ->

  short int inteiro_curto;// -32768 e 32768

  long int inteiro_curto;// -2147483648 a 2147483647 -> 

  
  float flutuante;// '0.123456f' -> byte 
  
  double duplo;// '0.123456789012345' -> 8 byte
  
  void nada;// 1 byte
}