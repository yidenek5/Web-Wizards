**Problem: Calculating the Time to Send a File**

**Inputs to the algorithm:**
- File size in bytes

**Expected output:**
- Time required to send the file in seconds

**Algorithm:**

- **Step 1:** Start
- **Step 2:** Declare two variables: `fileSize` (float) and `time` (float)
- **Step 3:** Display prompt "Please enter the file size that you want to get how long it will take to send a file in bytes"
- **Step 4:** Read the file size input into the variable `fileSize`
- **Step 5:** Check if the input is a valid number:
  - If input is not a number, display the message "Please enter only a number" and go back to **Step 3**
- **Step 6:** If the file size is less than 0, display the message "Please enter a number greater than or equal to 0" and go back to **Step 3**
- **Step 7:** If the input is valid and the file size is non-negative, calculate the time to send the file:
  - `time = fileSize / 960`
- **Step 8:** Display the message "To send [fileSize] byte file size, it requires [time] seconds"
- **Step 9:** End
  
  **Flowchart**
  ```
  +-------------------------+
  |          Start           |
  +-------------------------+
            |
            v
  +-----------------------------+
  | Declare fileSize and time   |
  | variables                   |
  +-----------------------------+
            |
            v
  +--------------------------------------------+
  | Display prompt: "Enter file size in bytes" |
  +--------------------------------------------+
            |
            v
  +-----------------------------+
  | Read file size input        |
  +-----------------------------+
            |
            v
  +-------------------------------------------+
  | Is input a valid number? (Check if valid) |
  +-----------------------------+-------------+
            | No                         | Yes
            v                             v
  +----------------------------+     +-------------------------------+
  | Display error: "Please enter|     | Is fileSize >= 0?             |
  | only a number"              |     +-------------------------------+
  +----------------------------+             |
            |                               v
            v                  +-------------------------------+
  +----------------------------+| Display error: "Enter a number |
  | Go back to input prompt    | | greater than or equal to 0"   |
  +----------------------------+ +-------------------------------+
            |                               |
            v                               v
     +---------------------------+   +-----------------------------+
     | Calculate time = fileSize  |   | Display result: time to send|
     | / 960                      |   | the file in seconds         |
     +---------------------------+   +-----------------------------+
            |
            v
      +---------------------+
      |        End           |
      +---------------------+




