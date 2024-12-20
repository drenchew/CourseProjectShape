#include <iostream>
#include "RegularHexagon.h"
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

constexpr int BUFFER_SIZE = 50;

std::vector<RegularHexagon> get_hexagons(const int n) {
    std::vector<RegularHexagon> hexagons;  
    hexagons.reserve(n); 

    for (int i = 0; i < n; i++) {
        std::string name;
        bool color = false;
     
        double side;

        std::cout << "Enter the name of the hexagon (" << i+1 << "): ";
        std::getline(std::cin, name);

		std::cout << "Do the Hexagon has a color? :";
		std::string input_color;
		std::getline(std::cin, input_color);

		std::transform(input_color.begin(), input_color.end(), input_color.begin(), ::tolower);
   
		if (input_color == "yes") {
			color = true;
		}

        std::cout << "Enter the side of the hexagon: ";
     
        try {
            std::string input;
            std::getline(std::cin, input);
            side = std::stod(input);
			if (side <= 0) {
				throw std::out_of_range("Number out of range.");
			}
        }
        catch (std::invalid_argument& ex) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            i--;  
            continue;
        }
        catch (std::out_of_range& ex) {
            std::cout << ex.what() << "Please enter a number inside the range.";

            i--; 
            continue;
        }
		catch (...) {
			std::cout << "An unknown error occurred. Please try again.\n";
			i--;
			continue;
		}

        hexagons.emplace_back(name, side,color);
    }

    return hexagons;
}

int get_n() {
    int n;
    while (true) {
        std::cout << "Enter a number (0 to " << BUFFER_SIZE << "): ";
        std::string input;
        std::getline(std::cin, input);

        std::stringstream myStream(input);
        if (!(myStream >> n)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            continue;
        }

        if (n < 0 || n > BUFFER_SIZE) {
            std::cout << "Number out of range. Please enter a number between 0 and " << BUFFER_SIZE << ".\n";
            continue;
        }

        return n;
    }
}

int main() {
    int n = get_n();
    std::vector<RegularHexagon> hexagons = get_hexagons(n); 

    int idx = -1;
    double max_perimeter = 0;
    std::cout << "Hexagons:\n";
    for (int i = 0; i < hexagons.size(); ++i) {
        hexagons[i].display();  
        if (hexagons[i].perimeter() > max_perimeter) {
            idx = i;  
            max_perimeter = hexagons[i].perimeter();
        }
    }

    std::cout << "Hexagons with color:\n";
    for (auto& hex : hexagons) {
		if (hex.getColor()) {
			std::cout << "Name: " << hex.getName() << " Perimeter: " << hex.perimeter() << std::endl;
		}
	}


    std::cout << "Hexagon with the largest perimeter:\n";
    hexagons[idx].display();

    return 0;
}
