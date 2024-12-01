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

  **Flowchart
  ```
    +---------------------------+
  |            Start           |
  +---------------------------+
             |
             v
  +-------------------------------+
  | Declare variables: workingHour, |
  | bonusRate, baseSalary, bonusPayment, |
  | grossSalary, tax, pension, netSalary, name |
  +-------------------------------+
             |
             v
  +-------------------------------+
  | Display prompt: "Enter your   |
  | name"                         |
  +-------------------------------+
             |
             v
  +-------------------------------+
  | Read input for name           |
  +-------------------------------+
             |
             v
  +-----------------------------------------------+
  | Display prompt: "Enter weekly working hours" |
  +-----------------------------------------------+
             |
             v
  +-------------------------------+
  | Read input for workingHour    |
  +-------------------------------+
             |
             v
  +----------------------------------------------+
  | Is input for workingHour valid (numeric)?   |
  +-------------------------------+--------------+
             | No                             | Yes
             v                                  v
  +-------------------------------+    +-------------------------------+
  | Display error: "Enter a valid  |    | Is workingHour >= 0?          |
  | number"                        |    +-------------------------------+
  +-------------------------------+             |
             |                               v
             v                       +-----------------------------+
   +----------------------------+    | Display error: "Enter number |
   | Go back to workingHour input|    | greater than or equal to 0"  |
   +----------------------------+    +-----------------------------+
             |                               |
             v                               v
  +-------------------------------+     +-----------------------------+
  | Display prompt: "Enter bonus   |     | Read input for bonusRate    |
  | rate per hour"                 |     +-----------------------------+
  +-------------------------------+             |
             |                               v
             v                       +-----------------------------+
  +-------------------------------+    | Is input for bonusRate valid |
  | Read input for bonusRate       |    | (numeric and >= 0)?          |
  +-------------------------------+    +-----------------------------+
             |                               |
             v                               v
  +----------------------------------------------+
  | Is input for bonusRate valid?               |
  +-------------------------------+--------------+
             | No                             | Yes
             v                                  v
  +-------------------------------+     +-----------------------------+
  | Display error: "Enter a valid  |     | Display prompt: "Enter base |
  | number"                        |     | salary"                     |
  +-------------------------------+     +-----------------------------+
             |                               |
             v                               v
   +-------------------------------+     +-----------------------------+
   | Go back to bonusRate input     |     | Read input for baseSalary   |
   +-------------------------------+     +-----------------------------+
             |                               |
             v                               v
  +-----------------------------------------------+
  | Is input for baseSalary valid (numeric)?     |
  +-------------------------------+--------------+
             | No                             | Yes
             v                                  v
  +-------------------------------+    +-------------------------------+
  | Display error: "Enter a valid  |    | Calculate bonusPayment, grossSalary, tax, |
  | number"                        |    | pension, and netSalary          |
  +-------------------------------+    +-------------------------------+
             |                               |
             v                               v
   +-------------------------------+     +-----------------------------+
   | Go back to baseSalary input    |     | Display result: tax, bonus,  |
   +-------------------------------+     | pension, gross, and net salary|
             |                               |
             v                               v
     +----------------------------+   +-----------------------------+
     |          End                |   |         End                 |
     +----------------------------+   +-----------------------------+
