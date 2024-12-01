# Pseudo-Code for BMI Calculator

**Start**

1. **Prompt user** for weight input.
   - If the weight is valid (greater than 0), proceed to step 2.
   - If invalid, re-prompt the user for weight input (maximum of 3 attempts).

2. **Prompt user** for height input.
   - If the height is valid (greater than 0), proceed to step 3.
   - If invalid, re-prompt the user for height input (maximum of 3 attempts).

3. **Calculate BMI** using the formula:  
   `BMI = weight / (height * height)`

4. **Display the calculated BMI**.

5. **Determine BMI category**:
   - If BMI < 18.5 → Output: "Underweight"
   - If 18.5 <= BMI <= 24.9 → Output: "Normal weight"
   - If BMI > 24.9 → Output: "Overweight"

6. **Ask the user** if they want to calculate BMI for another person:
   - If the answer is 'c', repeat the process.
   - If the answer is any other character, terminate the program.

**End**


### Flowchart for the Process

We can represent the process in a flowchart using Mermaid syntax:

```mermaid
flowchart TD
    A[Start] --> B[Input weight]
    B --> C{Is weight valid?}
    C -- No --> D[Re-prompt weight]
    D --> B
    C -- Yes --> E[Input height]
    E --> F{Is height valid?}
    F -- No --> G[Re-prompt height]
    G --> E
    F -- Yes --> H[Calculate BMI]
    H --> I[Display BMI]
    I --> J{BMI Category}
    J -- Underweight --> K[Display Underweight]
    J -- Normal weight --> L[Display Normal weight]
    J -- Overweight --> M[Display Overweight]
    M --> N[Ask if continue]
    N -- Yes --> B
    N -- No --> O[End]
