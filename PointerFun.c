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
  printf("Got an integer value %d and an address to an integer with value %d\n", value, *pointer );
}
void change_integers(int value, int* pointer) {
  value=361;
  *pointer=value;
}

int main(int argc, char const *argv[]) {
  int value=187;
  int* pointer= &value; /*Ich nehme die Adresse von "Value", weil wen ich z.B die Zahl 25 nehmnen würde wäre die Gefahr sehr groß das ich einen anderen Wert bekomme*/
  print_integers(value, pointer);
  change_integers(value, pointer);
  print_integers(value, pointer);
  return 0;
}
