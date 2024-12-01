**Problem:** Calculating the number of miles an automobile can be driven without refueling.

**Inputs to the algorithm:**
- Capacity of the fuel tank in Liters
- Mileage (distance that can be driven per liter) in meters per liter

**Expected Output:**
- The number of miles that can be driven without refueling.

**Algorithm:**

- **Step 1:** Start
- **Step 2:** Declare variables: `capacity`, `mileage`, `change`, `distance`
- **Step 3:** Display prompt: "Please enter the capacity of an automobile fuel tank in Liters"
- **Step 4:** Read the input for `capacity`
- **Step 5:** Check if the input is valid:
  - If the input is not a number, display an error message and go back to **Step 3**
  - If `capacity <= 0`, display an error message and go back to **Step 3**
- **Step 6:** Display prompt: "Please enter the speed that the automobile can be driven in meters per liter"
- **Step 7:** Read the input for `mileage`
- **Step 8:** Check if the input is valid:
  - If the input is not a number, display an error message and go back to **Step 6**
  - If `mileage <= 0`, display an error message and go back to **Step 6**
- **Step 9:** Calculate the `distance = mileage * capacity`
- **Step 10:** Calculate `change = distance / 1609.34` (to convert meters to miles)
- **Step 11:** Display the result: "The number of miles that the automobile can be driven without refueling is [change] miles."
- **Step 12:** End

  
**Flowchart**
  ```
    +----------------------------+
  |            Start            |
  +----------------------------+
             |
             v
  +-------------------------------------------+
  | Declare variables: capacity, mileage,    |
  | change, distance                        |
  +-------------------------------------------+
             |
             v
  +-------------------------------------------------+
  | Display prompt: "Enter capacity of fuel tank"  |
  +-------------------------------------------------+
             |
             v
  +-------------------------------+
  | Read input for capacity       |
  +-------------------------------+
             |
             v
  +----------------------------------------------+
  | Is the input valid (numeric and > 0)?       |
  +-------------------------------+--------------+
             | No                             | Yes
             v                                  v
  +----------------------------------+    +----------------------------+
  | Display error: "Enter a valid   |    | Display prompt: "Enter     |
  | number greater than 0"          |    | mileage in meters per liter"|
  +----------------------------------+    +----------------------------+
             |                                  |
             v                                  v
   +-------------------------------+     +-----------------------------+
   | Go back to capacity input      |     | Read input for mileage      |
   +-------------------------------+     +-----------------------------+
             |                                  |
             v                                  v
  +-----------------------------------------------+
  | Is the input valid (numeric and > 0)?        |
  +-------------------------------+--------------+
             | No                             | Yes
             v                                  v
  +----------------------------------+    +----------------------------+
  | Display error: "Enter a valid   |    | Calculate distance =        |
  | number greater than 0"          |    | mileage * capacity          |
  +----------------------------------+    +----------------------------+
             |                                  |
             v                                  v
   +-------------------------------+     +----------------------------+
   | Go back to mileage input       |     | Calculate change = distance |
   +-------------------------------+     | / 1609.34 (meters to miles) |
             |                                  |
             v                                  v
  +-----------------------------------------------+
  | Display result: "The number of miles that    |
  | the automobile can be driven without refueling|
  | is [change] miles"                           |
  +-----------------------------------------------+
             |
             v
      +---------------------+
      |         End          |
      +---------------------+
