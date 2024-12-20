# CourseProjectShape

This repository contains a C++ project for working with 2D shapes, including calculating the area and perimeter of regular hexagons and other shapes.

## Features

- **Shape2D**: Base class for all 2D shapes.
- **RegularHexagon**: Derived class implementing specific operations for regular hexagons.
- Support perimeter calculation.

## Generalized Block Algorithm of the Developed Software

1. **Initialization**:
   - The program starts by initializing the required shape objects.

2. **Input Handling**:
   - The user provides the necessary input parameters (side ,length, color).

3. **Processing**:
   - The program invokes `RegularHexagon::perimeter` method to compute the perimeter.

4. **Output Generation**:
   - Results are displayed to the user.

## Description of the Used Modules (Classes) and Their Purpose

### 1. **Shape2D** (Abstract Base Class)
   - **Purpose**: Defines the common interface for all 2D shapes.
   - **Key Methods**:
     - `perimeter`: Pure virtual method for computing the perimeter.

### 2. **RegularHexagon** (Derived Class)
   - **Purpose**: Represents a regular hexagon and provides implementations for calculating its properties.
   - **Key Attributes**:
     - `_side` (double): The length of a side of the hexagon.
   - **Key Methods**:
     - `perimeter`: Calculates the perimeter as `6 * sideLength`.

### 3. **Main Program (CourseProject.cpp)**
   - **Purpose**: Serves as the entry point of the application.
   - **Key Operations**:
     - Creates instances of the `RegularHexagon` class.
     - Calls methods to compute and display the perimeter.



## Example Output

```
Enter a number (0 to 50): 3
Enter the name of the hexagon (1): A
Do the Hexagon has a color? :yes
Enter the side of the hexagon: 1
Enter the name of the hexagon (2): B
Do the Hexagon has a color? :no
Enter the side of the hexagon: 2
Enter the name of the hexagon (3): C
Do the Hexagon has a color? :yes
Enter the side of the hexagon: 3
Hexagons:
Name: A
Color: True
Side: 1
Perimeter: 6
Name: B
Color: False
Side: 2
Perimeter: 12
Name: C
Color: True
Side: 3
Perimeter: 18
Hexagons with color:
Name: A Perimeter: 6
Name: C Perimeter: 18
Hexagon with the largest perimeter:
Name: C
Color: True
Side: 3
Perimeter: 18
```



## Requirements

- C++ compiler (e.g., GCC)
- Standard C++ library

## Contributing

Contributions are welcome! Feel free to fork the repository and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
