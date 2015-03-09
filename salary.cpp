#include <iostream>
using namespace std;

#include "salary.h"

Salary::Salary(double base,double rate,double sales)
	:base_salary(base),commission_rate(rate),gross_sales(sales)
{
	cout << "Constructint salary" << endl;
}
Salary::~Salary()
{
	cout << "Destructing salary" << endl;
}

void setSalary(double rate,double sales)
{
	earnings=sales*rate;	
}
void setSalary(double base,double rate,double sales)
{
	earnings=base+sales*rate;
}


Employee::Employee(double base,double rate,double sales,string n,string number)
	:Salary(base,rate,sales),name(n),security(number)
{
	cout << "Constructing employee" << endl;
}
Employee::~Employee()
{
	cout << "Destructing employee" << endl;
}

void Employee::display()
{
	cout << "员工:" << name << endl;
	cout << "卡号:" << security_number << endl;
}
void Employee::showone(double rate,double sales)
{
	
	setSalary(rate,sales);
	cout << "比例:" << getCommission_rate() << endl;
	cout << "销售总额:" << getGross_salary() << endl;
	cout << "总工资:" << getEarning() << endl;
}
void Employee::showtwo(double base,double rate,double sales)
{
	
	setSalary(base,rate,sales);
	cout << "底薪:" << getBase_salary() << endl;
	cout << "比例:" << getCommission_rate() << endl;
	cout << "销售总额:" << getGross_salary() << endl;
	cout << "总工资:" << getEarning() << endl;
}
