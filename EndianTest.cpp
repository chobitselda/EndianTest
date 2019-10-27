#include<iostream>
typedef union {
  unsigned long number;
  unsigned char byte[4];
} endiantest;

void EndianTest (){
    endiantest et;
    et.number = 0x12345678;
    printf("System endian is ");
    if(et.byte[0]==0x78)
        printf("Little Endian.\n");
    else if(et.byte[0]==0x12)
        printf("Big Endian.\n");
    else 
        printf("Unknown Endian.\n");     
}
int main() {
  EndianTest();
  system("pause");
  return 0;
}
