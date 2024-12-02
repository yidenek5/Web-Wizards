```mermaid
graph TD
    A[Start] --> B[Input Weight in kilograms]
    B --> C[Input Height in meters]
    C --> D[Calculate BMI = weight / height / height]
    D --> E{Is BMI < 18?}
    E --> F[Category: Underweight]
    E --> G{Is BMI <= 25?}
    G --> H[Category: Normal weight]
    G --> I[Category: Overweight]
    F --> J[Output BMI and Category]
    H --> J[Output BMI and Category]
    I --> J[Output BMI and Category]
    J --> K[Another Person?]
    K --> L{0}
    K --> M{other char}
    L --> B
    M --> N[End]
