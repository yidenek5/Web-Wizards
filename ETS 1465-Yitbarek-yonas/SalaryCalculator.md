# Pseudocode for Salary Calculation

1. **Start**

2. **Prompt for weekly working hours:**
   - Input: `weeklyHours`
   - Validate input: Ensure `weeklyHours > 0`
   - If invalid, display error message and prompt again.

3. **Prompt for bonus rate per hour (0 - 1):**
   - Input: `bonusRate`
   - Validate input: Ensure `0 < bonusRate < 1`
   - If invalid, display error message and prompt again.

4. **Prompt for base salary:**
   - Input: `baseSalary`
   - Validate input: Ensure `baseSalary > 0`
   - If invalid, display error message and prompt again.

5. **Calculate Bonus Payment:**
   - `bonusPayment = weeklyHours * bonusRate`

6. **Calculate Gross Salary:**
   - `grossSalary = baseSalary + bonusPayment`

7. **Calculate Deductions:**
   - `pensionDeduction = 0.05 * grossSalary`
   - `taxDeduction = 0.15 * grossSalary`

8. **Calculate Net Salary:**
   - `netSalary = grossSalary - (pensionDeduction + taxDeduction)`

9. **Display Results:**
   - Show `Bonus Payment`
   - Show `Gross Salary`
   - Show `Net Salary`

10. **End**
```mermaid
graph TD;
    A[Start] --> B[Initialize variables]
    B --> C{Weekly working hours}
    C -->|Valid| D[Proceed]
    C -->|Invalid| E[Clear input]
    E --> F[Ignore input]
    F --> G[Print valid hours required]
    G --> C
    D --> H{Bonus rate per hour 0-1}
    H -->|Valid| I[Proceed]
    H -->|Invalid| J[Clear input]
    J --> K[Ignore input]
    K --> L[Print valid rate required]
    L --> H
    I --> M[Initialize counter2]
    M --> N{Base salary}
    N -->|Valid| O[Proceed]
    N -->|Invalid| P[Clear input]
    P --> Q[Ignore input]
    Q --> R[Print valid salary required]
    R --> N
    O --> S[Calculate Bonus Payment]
    S --> T[Calculate Gross Salary]
    T --> U[Calculate Deductions]
    U --> V[Calculate Net Salary]
    V --> W[Display Results]
    W --> X[End]

