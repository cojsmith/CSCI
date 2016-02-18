
// This progam calculates the user's pay. 
#include <iostream>
using namespace std;
 
int main() { 
//setting up variables
double hours,
       rate,
       pay,
       yearlyIncome,
       federalTax,
       pay_after_tax;
 
//Get the number of hours worked. 
cout << "How many hours did you work? "; 
cin >> hours; 
 
// Get the hourly pay rate. 
cout << "How much do you get paid per hour? "; 
cin >> rate; 
  
// Find out fed. income tax bracket
cout << "About how much do you make a year? ";
cin >> yearlyIncome;
  
if (yearlyIncome <= 9225)
{
    federalTax = 0.10;
}
 else
  {
 if (yearlyIncome <= 37450)
     {
      federalTax = 0.15;
     }
 else
  {
 if (yearlyIncome <= 90750)
     {
     federalTax = 0.25;
     }
 else
  {
 if (yearlyIncome <= 189300)
     {
     federalTax = 0.28;
     }
 else
  {
 if (yearlyIncome <= 411500)
     {  
     federalTax = 0.33;
     }
 else
  {  
 if (yearlyIncome <= 413200)
    {
    federalTax = 0.35;
    }
 else
  {  
 if (yearlyIncome >= 413201)
    {   
    federalTax = 0.396;
      }
     }
    }
   }
  }
 }
}   
cout << "Your tax bracket is " << federalTax << " percent.\n"; 
  
// Calculate the pay. 
pay = hours * rate; 
pay_after_tax = pay - (pay * federalTax);
  
// Display the pay. 
cout << "You earned $" << pay << " before tax." << endl; 
cout << "You earned $" << pay_after_tax << " after tax.";
return 0; 
}