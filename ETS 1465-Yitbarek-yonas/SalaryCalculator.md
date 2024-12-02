# Pseudocode for Salary Calculation

**1. Start**

- Declare variables: `name`, `weeklyHours`, `bonusRate`, `baseSalary`, `bonusPayment`, `grossSalary`, `pensionDeduction`, `taxDeduction`, `netSalary`.

**2. Loop 1 (for Name Input)**

- Display prompt: "Enter the name of the person."
- Read input `name`.
- If input is invalid:
  - Clear input error state.
  - Discard invalid input up to 1000 characters or newline.
  - Display error message: "Please enter a valid name of the person."
  - Go back to **2**.

**3. Loop 2 (for Weekly Hours Input)**

- Display prompt: "Enter weekly working hours."
- Read input `weeklyHours`.
- If input is invalid or `weeklyHours <= 0`:
  - Clear input error state.
  - Discard invalid input up to 1000 characters or newline.
  - Display error message: "Please enter a valid weekly working hours."
  - Go back to **3**.

**4. Loop 3 (for Bonus Rate Input)**

- Display prompt: "Enter bonus rate per hour (0 - 1)."
- Read input `bonusRate`.
- If input is invalid or `bonusRate <= 0` or `bonusRate >= 1`:
  - Clear input error state.
  - Discard invalid input up to 1000 characters or newline.
  - Display error message: "Please enter a valid bonus rate per hour between 0 and 1."
  - Go back to **4**.

**5. Loop 4 (for Base Salary Input)**

- Display prompt: "Enter base salary."
- Read input `baseSalary`.
- If input is invalid or `baseSalary <= 0`:
  - Clear input error state.
  - Discard invalid input up to 1000 characters or newline.
  - Display error message: "Please enter a valid base salary."
  - Go back to **5**.

**6. Calculations**

- Calculate `bonusPayment = weeklyHours * bonusRate`.
- Calculate `grossSalary = baseSalary + bonusPayment`.
- Calculate `pensionDeduction = 0.05 * grossSalary`.
- Calculate `taxDeduction = 0.15 * grossSalary`.
- Calculate `netSalary = grossSalary - (pensionDeduction + taxDeduction)`.

**7. Output**

- Display `bonusPayment` with name: "Bonus Payment of [name] is: $[bonusPayment]".
- Display `grossSalary` with name: "Gross Salary of [name] is: $[grossSalary]".
- Display `netSalary` with name: "Net Salary of [name] is: $[netSalary]".

**8. End**



## Flowchart of SalaryCalculator
```mermaid
graph TD;
    A[Start] --> B[Initialize variables]
    B --> C{Prompt for name}
    C -->|Valid| D[Prompt for weekly hours]
    C -->|Invalid| E[Clear input error and print message]
    E --> C
    D --> F{Prompt for weekly hours}
    F -->|Valid| G[Prompt for bonus rate]
    F -->|Invalid| H[Clear input error and print message]
    H --> F
    G --> I{Prompt for bonus rate}
    I -->|Valid| J[Prompt for base salary]
    I -->|Invalid| K[Clear input error and print message]
    K --> I
    J --> L{Prompt for base salary}
    L -->|Valid| M[Calculate bonus payment]
    L -->|Invalid| N[Clear input error and print message]
    N --> L
    M --> O[Calculate gross salary]
    O --> P[Calculate deductions]
    P --> Q[Calculate net salary]
    Q --> R[Display results]
    R --> S[End]
