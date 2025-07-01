# Homework №3: [RAII та smart pointers]

## Task description
Create a FileManager class that:

Opens a file in its constructor (for example, using std::fopen).

Closes a file in its destructor (for example, using std::fclose).

Add a write(const std::string&) method to write text to a file.

Handle edge cases:

Throw an exception if the file cannot be opened.

Ensure that the file is automatically closed even if an exception occurs.
Write a test program that uses FileManager to write text to a file.

Write a Sensor class that:

Stores sensor readings in a std::shared_ptr<std::vector<int>>.
Provides functions for adding and outputting readings.
Simulate simultaneous use of shared sensor data in main():
Create two Sensor instances that share the same std::vector<int> via a std::shared_ptr.

## Files
- `Main.cpp` - main program file
- `FileManager.hpp`
- `FileManager.cpp`
- `Sensor.hpp`
- `Sensor.cpp`

## Compilation and launch
```bash
g++ -o program Main.cpp
./program