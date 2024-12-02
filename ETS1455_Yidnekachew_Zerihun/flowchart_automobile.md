```mermaid
graph TD
    A[Start] --> B[Input Tank Capacity in gallons]
    B --> C[Input Miles per gallon]
    C --> D[Calculate Total Miles = Tank Capacity * Miles per gallon]
    D --> E[Output Total Miles]
    E --> F[Another Calculation?]
    F --> G{Yes}
    F --> H{No}
    G --> B
    H --> I[End]
