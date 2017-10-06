#include <stdio.h>
int input();
double method(int choice);
double add();
double subtract();
double multiply();
double divide();


int main(int argc, char const *argv[]) {
  int choice = 0;
  do {
    choice = input();
    double sum = 0;
    sum = method(choice);
    if (choice != -1) {
    printf("%.2lf\n \n",sum );
    }

  } while(choice != -1);
return 0;
}
int input() {
  printf("Calculator\n" );
  printf("----------\n" );
  printf("Choose one of the following operations:\n  Add (1)\n  Subtract (2)\n  Multiply (3)\n  Divide (4)\n  Stop program (-1)\n  Enter your choice: " );
  int input;
  scanf("%d", &input);
  return input;
}

double method (int choice) {
  double sum = 0;
  switch (choice) {
    case 1: sum = add();
      break;
    case 2: sum = subtract();
      break;
    case 3: sum = multiply();
      break;
    case 4: sum = divide();
      break;
    case -1: ;
      break;
    default: printf("Falsche eingabe!\n" );
      break;
  }
  return sum;
}

double add() {
  double first_operand;
  double second_operand;
  printf("Type in you first operand: " );
  scanf("%lf",&first_operand );
  printf("Now your second: " );
  scanf("%lf",&second_operand );
  printf("%.2lf + %.2lf = ",first_operand, second_operand );
  return first_operand + second_operand;

}
double subtract() {
  double first_operand;
  double second_operand;
  printf("Type in you first operand: " );
  scanf("%lf",&first_operand );
  printf("Now your second: " );
  scanf("%lf",&second_operand );
  printf("%.2lf - %.2lf = ",first_operand, second_operand );
  return first_operand - second_operand;
}
double multiply() {
  double first_operand;
  double second_operand;
  printf("Type in you first operand: " );
  scanf("%lf",&first_operand );
  printf("Now your second: " );
  scanf("%lf",&second_operand );
  printf("%.2lf * %.2lf = ",first_operand, second_operand );
  return first_operand * second_operand;
}
double divide() {
  double first_operand;
  double second_operand;
  printf("Type in you first operand: " );
  scanf("%lf",&first_operand );
  printf("Now your second: " );
  scanf("%lf",&second_operand );
  if (second_operand != 0) {
  printf("%.2lf / %.2lf = ",first_operand, second_operand );
  return first_operand / second_operand;
  }
  printf("0 ist keine gültige Eingabe als zweiter Operand!\n" );
  return 0;
}
