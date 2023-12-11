#include <stdio.h>
#include <stdbool.h>

int main() { //declarations 
  float netPay, hours, rate, salary, overtime, overtimePay;
  float taxRate = .125;
  //loop for entering the numbe of hours worked 
  while (true) {
    printf( "\nEnter number of hours worked (-1 to end): " );
    scanf( "%f", &hours );
    if ( hours == -1 ) {
      return 0;
    }
    //propt the user for hourly rate of the worker 
    printf( "Enter hourly rate of the worker ($00.00): ");
    scanf( "%f", &rate );
    
    //formula for salary 
    salary = hours * rate;
    
    //if statement for printing regular salary
    if ( hours <= 40 ) {
      printf( "Salary is %.2f\n", salary );
    }
    
    //if statement for calculating the overtime pay 
    if ( hours > 40 ) {
      overtime = hours - 40;
      overtimePay = overtime * rate / 2;
      salary = salary + overtimePay;
      printf( "Salary is %.2f\n", salary );
    }
    
    //formula for the netpay 
    netPay = salary * taxRate;
    printf ( "Net pay is %.2f" , netPay);

  }
  
  

  return 0;
}
