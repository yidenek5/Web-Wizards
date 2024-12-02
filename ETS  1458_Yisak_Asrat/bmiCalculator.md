# BMI Calculator 

This document provides a detailed explanation of the Body
 Mass Index (BMI) calculator program written in C++. 

## **Algorithm (Pseudocode)**

```

Step 1: Start the program.
Step 2: Initialize BMI = 0.
Step 3: Prompt the user to enter their height in meters.
Step 4: Check if the height is valid:
        - If invalid (not a number or <= 0), display an error and go back to Step 3.
        - If valid, proceed to Step 5.
Step 5: Prompt the user to enter their weight in kilograms.
Step 6: Check if the weight is valid:
        - If invalid (not a number or <= 0), display an error and go back to Step 5.
        - If valid, proceed to Step 7.
Step 7: Calculate BMI using the formula:
        BMI = weight / (height^2).
Step 8: Determine the BMI category:
        - If BMI > 29.9, display "Obesity."
        - If 25 ≤ BMI ≤ 29.9, display "Overweight."
        - If 18.5 ≤ BMI < 25, display "Normal weight."
        - If BMI < 18.5, display "Underweight."
Step 9: End the program.
```
Flowchart
```mermaid
flowchart TD
    Start[Start] --> InputHeight["Input: Enter height (Meters)"]
    InputHeight --> CheckHeightValid{Is height valid?}
    CheckHeightValid -->|No| InvalidHeight["Prompt: Enter a valid number"] --> InputHeight
    CheckHeightValid -->|Yes| CheckHeightPositive{Is height > 0?}
    CheckHeightPositive -->|No| NegativeHeight["Prompt: Enter a number greater than 0"] --> InputHeight
    CheckHeightPositive -->|Yes| InputWeight["Input: Enter weight (Kilograms)"]

    InputWeight --> CheckWeightValid{Is weight valid?}
    CheckWeightValid -->|No| InvalidWeight["Prompt: Enter a valid number"] --> InputWeight
    CheckWeightValid -->|Yes| CheckWeightPositive{Is weight > 0?}
    CheckWeightPositive -->|No| NegativeWeight["Prompt: Enter a number greater than 0"] --> InputWeight
    CheckWeightPositive -->|Yes| CalculateBMI["Calculate: BMI = weight / (height^2)"]

    CalculateBMI --> CheckBMICategory{Evaluate BMI Category}
    CheckBMICategory -->|BMI > 29.9| Obesity["Display: Person is at Obesity"]
    CheckBMICategory -->|25 ≤ BMI ≤ 29.9| Overweight["Display: Person is Overweight"]
    CheckBMICategory -->|18.5 ≤ BMI < 25| NormalWeight["Display: Person is at Normal Weight"]
    CheckBMICategory -->|BMI < 18.5| Underweight["Display: Person is Underweight"]

    Obesity --> End[End]
    Overweight --> End
    NormalWeight --> End
    Underweight --> End
