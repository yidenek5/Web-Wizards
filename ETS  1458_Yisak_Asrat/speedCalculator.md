 Calculating the Time to Send a File**

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

 ```mermaid
flowchart TD
    Start[Start] --> InputFileSize["Input: Enter file size (Bytes)"]
    InputFileSize --> CheckFileSizeValid{Is file size valid?}
    CheckFileSizeValid -->|No| InvalidFileSize["Prompt: Enter a valid number"] --> InputFileSize
    CheckFileSizeValid -->|Yes| CheckFileSizePositive{Is file size >= 0?}
    CheckFileSizePositive -->|No| NegativeFileSize["Prompt: Enter a number ≥ 0"] --> InputFileSize
    CheckFileSizePositive -->|Yes| CalculateTime["Calculate: Time = fileSize / 960"]

    CalculateTime --> DisplayResult["Display: Time required to send file (seconds)"]
    DisplayResult --> End[End]
