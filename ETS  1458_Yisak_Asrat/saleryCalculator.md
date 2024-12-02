**Algorithm:**

- **Step 1:** Start
- **Step 2:** Declare variables: `workingHour`, `bonusRate`, `baseSalary`, `bonusPayment`, `grossSalary`, `tax`, `pension`, `netSalary`, and `name`
- **Step 3:** Display prompt: "Please enter your name"
- **Step 4:** Read input for `name`
- **Step 5:** Display prompt: "Please enter the weekly working hours"
- **Step 6:** Read input for `workingHour`
- **Step 7:** Check if the input for `workingHour` is valid:
  - If input is not a number, display an error message and go back to **Step 5**
  - If `workingHour < 0`, display an error message and go back to **Step 5**
- **Step 8:** Display prompt: "Please enter the bonus rate per hour"
- **Step 9:** Read input for `bonusRate`
- **Step 10:** Check if the input for `bonusRate` is valid:
  - If input is not a number, display an error message and go back to **Step 8**
  - If `bonusRate < 0`, display an error message and go back to **Step 8**
- **Step 11:** Display prompt: "Please enter the base salary"
- **Step 12:** Read input for `baseSalary`
- **Step 13:** Check if the input for `baseSalary` is valid:
  - If input is not a number, display an error message and go back to **Step 11**
  - If `baseSalary < 0`, display an error message and go back to **Step 11**
- **Step 14:** Calculate:
  - `bonusPayment = workingHour * bonusRate`
  - `grossSalary = baseSalary + bonusPayment`
  - `tax = grossSalary * 0.15`
  - `pension = grossSalary * 0.05`
  - `netSalary = grossSalary - (tax + pension)`
- **Step 15:** Display the results:
  - "The tax is [tax]"
  - "The bonus payment is [bonusPayment]"
  - "The pension is [pension]"
  - "The gross salary is [grossSalary]"
  - "The net salary is [netSalary]"
- **Step 16:** End

  Flowchart
  ```
```mermaid
flowchart TD
    Start[Start] --> InputName["Input: Enter your name"]
    InputName --> InputHours["Input: Enter weekly working hours"]
    
    InputHours --> CheckHoursValid{Is hours valid?}
    CheckHoursValid -->|No| InvalidHours["Prompt: Enter a valid number"] --> InputHours
    CheckHoursValid -->|Yes| CheckHoursPositive{Are hours >= 0?}
    CheckHoursPositive -->|No| NegativeHours["Prompt: Enter a non-negative number"] --> InputHours
    CheckHoursPositive -->|Yes| InputRate["Input: Enter bonus rate per hour"]

    InputRate --> CheckRateValid{Is rate valid?}
    CheckRateValid -->|No| InvalidRate["Prompt: Enter a valid number"] --> InputRate
    CheckRateValid -->|Yes| CheckRatePositive{Is rate >= 0?}
    CheckRatePositive -->|No| NegativeRate["Prompt: Enter a non-negative number"] --> InputRate
    CheckRatePositive -->|Yes| InputSalary["Input: Enter base salary"]

    InputSalary --> CheckSalaryValid{Is salary valid?}
    CheckSalaryValid -->|No| InvalidSalary["Prompt: Enter a valid number"] --> InputSalary
    CheckSalaryValid -->|Yes| CheckSalaryPositive{Is salary >= 0?}
    CheckSalaryPositive -->|No| NegativeSalary["Prompt: Enter a non-negative number"] --> InputSalary
    CheckSalaryPositive -->|Yes| Calculation["Calculate bonus payment, gross salary, tax, pension, net salary"]

    Calculation --> DisplayResults["Display results: tax, bonus payment, pension, gross salary, net salary"]
    DisplayResults --> End[End]

