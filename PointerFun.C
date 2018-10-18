/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Pointer Fun
 * Author:			Bastian Haider
 * ----------------------------------------------------------
 * Description:
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_integers(int value,int* pointer){
  printf("Got an integer value %d and an address to an integer with value %d\n",int value,int* pointer );
}

int int main(int argc, char const *argv[]) {
  int value=187;
  int* pointer= &value;
  print_integers(int value,int* pointer);
  return 0;
}
