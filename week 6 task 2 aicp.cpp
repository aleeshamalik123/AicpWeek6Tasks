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
    // Variables to store order information
    int numCementSacks, numGravelSacks, numSandSacks;
    double totalOrderWeight = 0.0;
    int numRejectedSacks = 0;

    // Input prompt for the number of sacks for each type
    std::cout << "Enter the number of sacks of Cement: ";
    std::cin >> numCementSacks;

    std::cout << "Enter the number of sacks of Gravel: ";
    std::cin >> numGravelSacks;

    std::cout << "Enter the number of sacks of Sand: ";
    std::cin >> numSandSacks;

    // Check and process each sack in the order
    for (int i = 0; i < numCementSacks; ++i) {
        std::string contents;
        double weight;

        // Input prompt for contents
        std::cout << "\nEnter details for Cement Sack #" << i + 1 << ":\n";
        std::cout << "Enter the contents of the sack (C for Cement): ";
        std::cin >> contents;

        // Input prompt for weight
        std::cout << "Enter the weight of the sack in kilograms: ";
        std::cin >> weight;

        // Check contents and weight using TASK 1 logic
        if (contents == "C" && weight >= MIN_CEMENT_WEIGHT && weight <= MAX_CEMENT_WEIGHT) {
            // Accepted sack
            totalOrderWeight += weight;
        } else {
            // Rejected sack
            std::cout << "\nRejected Sack in the order! Reasons:\n";
            if (contents != "C") {
                std::cout << "Invalid contents. Must be C.\n";
            }
            if (contents == "C" && (weight < MIN_CEMENT_WEIGHT || weight > MAX_CEMENT_WEIGHT)) {
                std::cout << "Invalid weight for Cement. Must be between 24.9 and 25.1 kilograms.\n";
            }
            numRejectedSacks++;
        }
    }

    // Repeat the process for Gravel and Sand
    

    // Output the total weight and number of rejected sacks
    std::cout << "\nOrder Summary:\n";
    std::cout << "Total Order Weight: " << std::fixed << std::setprecision(2) << totalOrderWeight << " kilograms\n";
    std::cout << "Number of Rejected Sacks: " << numRejectedSacks << "\n";

    return 0;
}

