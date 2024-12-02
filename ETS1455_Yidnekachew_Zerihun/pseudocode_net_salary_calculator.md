# Pseudocode for Calculating Employee Salary

## Declare variables
- Declare `employee_name` as string
- Declare `weekly_working_hours`, `bonus_rate_per_hour`, `base_salary`, `bonus_payment`, `gross_salary`, `net_salary` as double
- Declare `pension`, `tax` as double

## Read input values from the user
- Prompt user to enter `employee_name`
- Read `employee_name` from input
- Prompt user to enter `weekly_hours`
- Read `weekly_hours` from input
- Prompt user to enter `bonus_rate_per_hour`
- Read `bonus_rate_per_hour` from input
- Prompt user to enter `base_salary`
- Read `base_salary` from input

## Calculate bonus payment
- Set `bonus_payment` to `weekly_working_hours` multiplied by `bonus_rate_per_hour` multiplied by `base_salary`

## Calculate gross salary
- Set `gross_salary` to `base_salary` plus `bonus_payment`

## Calculate deductions
- Set `pension` to 5% of `gross_salary`
- Set `tax` to 15% of `gross_salary`

## Calculate net salary
- Set `net_salary` to `gross_salary` minus (`pension` plus `tax`)

## Output the results
- Print `employee_name`
- Print `gross_salary`
- Print `bonus payment`
- Print `tax deduction`
- Print `pension`
- Print `net salary`
