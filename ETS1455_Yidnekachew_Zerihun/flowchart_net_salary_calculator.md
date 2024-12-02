```mermaid
graph TD
    A[Start] --> B[Input Employee Name]
    B --> C[Input Weekly Working Hours]
    C --> D[Input Bonus Rate Per Hour]
    D --> E[Input Base Salary]
    E --> F[Calculate Bonus Payment = Weekly Working Hours * Bonus Rate Per Hour]
    F --> G[Calculate Gross Salary = Base Salary + Bonus Payment]
    G --> H[Calculate Pension = 5% of Gross Salary]
    H --> I[Calculate Tax = 15% of Gross Salary]
    I --> J[Calculate Net Salary = Gross Salary - Pension - Tax]
    J --> K[Output Employee Name]
    K --> L[Output Gross Salary]
    L --> M[Output Net Salary]
    M --> N[Output Bonus Payment]
    N --> O[Output Pension and Tax Deductions]
    O --> P[Another Employee?]
    P --> Q{Yes}
    P --> R{No}
    Q --> B
    R --> S[End]
