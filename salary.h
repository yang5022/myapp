#ifndef _SALARY_H_
#define _SALARY_H_

#include <string>

class Salary{
public:
	Salary(double base,double rate,double sales);
	~Salary();

	void setSalary(double rate,double sales);
	void setSalary(double base,double rate,double sales);

	double getBase_salary() const
	{
		return base_salary;
	}
	
	double getCommission_rate() const
	{
		return commission_rate;
	}
	double getGross_salary() const
	{
		return gross_salary;
	}
	
	double getEarnings() const
	{
		return earnings;
	}

private:
	double base_salary;
	double commission_rate;
	double gross_sales;
	double earnings;
};

class Employee : public Salary{
public:
	Employee(double base,double rate,double sales,string n,string number);
	~Employee();

	void setName(string n)
	{
		name=n;
	}
	string getName() const
	{
		return name;
	}
	
	void setSecurity_number(string number)
	{
		security_number=number;
	}
	string getSecurity_number() const
	{
		return security_number;
	}

	void display();
	void showone(double rate,double sales);
	void showtwo(double base,double rate,double sales);

private:
	string name;
	string security_number;
	
};
#endif
