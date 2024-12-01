# Pseudo Code for Fuel Efficiency Calculation

1. **Initialize Variables:**
   - `tankCapacity` (float)
   - `milesPerGallon` (float)
   - `totalMiles` (float)

2. **Prompt user for tank capacity:**
   - Display message: "Enter the capacity of the fuel tank in gallons"
   - Get input for `tankCapacity`
   - **Validation:**
     - If `tankCapacity <= 0` or invalid input, re-prompt user up to 3 attempts.
     - If input is invalid for 3 times, exit program.

3. **Prompt user for miles per gallon:**
   - Display message: "Enter the miles per gallon the automobile can be driven"
   - Get input for `milesPerGallon`
   - **Validation:**
     - If `milesPerGallon <= 0` or invalid input, re-prompt user up to 3 attempts.
     - If input is invalid for 3 times, exit program.

4. **Calculate Total Miles:**
   - `totalMiles = tankCapacity * milesPerGallon`

5. **Display the result:**
   - Print: "The automobile can be driven X miles without refueling" where X is `totalMiles`.

---

**End of Program**
### Flowchart for the Process

We can represent the process in a flowchart using Mermaid syntax:

```mermaid
graph TD
    A[Start] --> B[Prompt for tank capacity]
    B --> C[Input tankCapacity]
    C --> D{Is tankCapacity > 0?}
    D -->|Yes| E[Prompt for miles per gallon]
    D -->|No| F[Display Invalid input for tankCapacity and retry]
    E --> G[Input milesPerGallon]
    G --> H{Is milesPerGallon > 0?}
    H -->|Yes| I[Calculate totalMiles = tankCapacity * milesPerGallon]
    H -->|No| J[Display Invalid input for milesPerGallon and retry]
    I --> K[Display totalMiles result]
    K --> L[End]
    F --> B
    J --> E
