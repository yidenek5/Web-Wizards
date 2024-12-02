```mermaid
graph TD
    A[Start] --> B[Input x]
    B --> C[Input y]
    C --> D{Is y >= 0?}
    D --> E[Calculate x^y] 
    D --> F[Calculate x^(-y)]
    E --> G[Output Result]
    F --> G[Output Result]
    G --> H[End]
