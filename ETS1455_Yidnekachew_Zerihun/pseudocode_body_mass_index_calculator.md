# Pseudocode for Calculating BMI and Determining Weight Category

## Loop for multiple persons
- Repeat until user decides to stop:
  - Declare variables `weight`, `height`, `bmi`

  ## Read input values
  - Prompt user to enter `weight` in kilograms
  - Read `weight` from input
  - Prompt user to enter `height` in meters
  - Read `height` from input

  ## Calculate BMI
  - Calculate `bmi` as `weight / (height * height)`

  ## Output BMI
  - Print "BMI: `bmi`"

  ## Determine weight category
  - If `bmi` is less than 18 then
    - Print "Category: Underweight"
  - Else if `bmi` is between 18 and 25 (inclusive) then
    - Print "Category: Normal weight"
  - Else
    - Print "Category: Overweight"

  ## Ask if the user wants to process another person
  - Prompt "Do you want to calculate BMI for another person? (0/any char)"
  - Read user choice
  - If choice is not '0'  then
    - Exit loop
