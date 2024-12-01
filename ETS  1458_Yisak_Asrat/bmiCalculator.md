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
```
+----------------------------+
|           Start             |
+----------------------------+
            |
            v
+----------------------------+
|  Input Height (in meters)  |
+----------------------------+
            |
            v
+----------------------------+
|   Validate Height Input    |
|   (Is input a number?)     |
+----------------------------+
            |
    +-------+-------+
    |               |
   No               Yes
    |               |
    v               v
+--------------------+   +-------------------------+
|  Print Error: "Please|   |  Height > 0?            |
|  enter only a number"|   +-------------------------+
|  (Re-enter Height)   |           |
+--------------------+            v
            |           +------------------------+
            +---------> | Print Error: "Please   |
                        | enter height > 0"      |
                        | (Re-enter Height)      |
                        +------------------------+
                                |
                                v
                        +----------------------------+
                        |   Input Weight (in kg)     |
                        +----------------------------+
                                |
                                v
                        +----------------------------+
                        |   Validate Weight Input    |
                        |   (Is input a number?)     |
                        +----------------------------+
                                |
                        +-------+-------+
                        |               |
                       No               Yes
                        |               |
                        v               v
                +--------------------+   +-------------------------+
                |  Print Error: "Please|   |  Weight > 0?            |
                |  enter only a number"|   +-------------------------+
                |  (Re-enter Weight)   |           |
                +--------------------+            v
                                |           +------------------------+
                                +---------> | Print Error: "Please   |
                                            | enter weight > 0"      |
                                            | (Re-enter Weight)      |
                                            +------------------------+
                                                        |
                                                        v
                                            +----------------------------+
                                            |   Calculate BMI = Weight /  |
                                            |   (Height^2)               |
                                            +----------------------------+
                                                        |
                                                        v
                                            +----------------------------+
                                            |   BMI > 29.9?              |
                                            +----------------------------+
                                                        |
                                            +-------+-------+
                                            |               |
                                           Yes             No
                                            |               |
                                            v               v
                                   +------------------+    +-------------------------+
                                   |  Print "Obesity" |    |   BMI >= 25 && BMI <= 29.9?|
                                   +------------------+    +-------------------------+
                                                        |
                                                        v
                                          +------------------------------+
                                          |  Print "Overweight"          |
                                          +------------------------------+
                                                        |
                                                        v
                                          +------------------------------+
                                          |  BMI >= 18.5 && BMI < 25?    |
                                          +------------------------------+
                                                        |
                                                        v
                                           +--------------------------+
                                           |  Print "Normal Weight"   |
                                           +--------------------------+
                                                        |
                                                        v
                                           +--------------------------+
                                           |  BMI < 18.5?             |
                                           +--------------------------+
                                                        |
                                                       Yes
                                                        |
                                                        v
                                           +--------------------------+
                                           |  Print "Underweight"     |
                                           +--------------------------+
                                                        |
                                                        v
                                           +-------------------------+
                                           |          End             |
                                           +-------------------------+

 ```
