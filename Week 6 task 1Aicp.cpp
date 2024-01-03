#include <iostream>
#include <iomanip>
#include <string>

// Constants for weight limits
const double MIN_GRAVEL_WEIGHT = 49.9;
const double MAX_GRAVEL_WEIGHT = 50.1;
const double MIN_SAND_WEIGHT = 49.9;
const double MAX_SAND_WEIGHT = 50.1;
const double MIN_CEMENT_WEIGHT = 24.9;
const double MAX_CEMENT_WEIGHT = 25.1;

int main() {
    // Variables to store sack information
    std::string contents;
    double weight;

    // Input prompt for contents
    std::cout << "Enter the contents of the sack (C for Cement, G for Gravel, S for Sand): ";
    std::cin >> contents;

    // Input prompt for weight
    std::cout << "Enter the weight of the sack in kilograms: ";
    std::cin >> weight;

    // Check contents and weight
    if ((contents == "C" && weight >= MIN_CEMENT_WEIGHT && weight <= MAX_CEMENT_WEIGHT) ||
        (contents == "G" && weight >= MIN_GRAVEL_WEIGHT && weight <= MAX_GRAVEL_WEIGHT) ||
        (contents == "S" && weight >= MIN_SAND_WEIGHT && weight <= MAX_SAND_WEIGHT)) {
        // Accepted sack
        std::cout << "\nAccepted Sack Details:\n";
        std::cout << "Contents: " << contents << std::endl;
        std::cout << "Weight: " << std::fixed << std::setprecision(2) << weight << " kilograms\n";
    } else {
        // Rejected sack
        std::cout << "\nRejected Sack! Reasons:\n";
        if (contents != "C" && contents != "G" && contents != "S") {
            std::cout << "Invalid contents. Must be C, G, or S.\n";
        }
        if (contents == "C" && (weight < MIN_CEMENT_WEIGHT || weight > MAX_CEMENT_WEIGHT)) {
            std::cout << "Invalid weight for Cement. Must be between 24.9 and 25.1 kilograms.\n";
        }
        if (contents == "G" && (weight < MIN_GRAVEL_WEIGHT || weight > MAX_GRAVEL_WEIGHT)) {
            std::cout << "Invalid weight for Gravel. Must be between 49.9 and 50.1 kilograms.\n";
        }
        if (contents == "S" && (weight < MIN_SAND_WEIGHT || weight > MAX_SAND_WEIGHT)) {
            std::cout << "Invalid weight for Sand. Must be between 49.9 and 50.1 kilograms.\n";
        }
    }

    return 0;
}

