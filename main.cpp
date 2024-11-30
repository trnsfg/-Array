#include <iostream>
#include "Array.h"

int main()
{
    try {
        Array<int> arr = { 1, 2, 3, 4, 5 };

        try {
            std::cout << arr[10] << std::endl;
        }
        catch (const std::out_of_range& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        try {
            for (int i = 6; i <= 50; ++i) {
                arr.push_back(i);
            }
        }
        catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        try {
            arr.erase(100);
        }
        catch (const std::out_of_range& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        arr.print();

    }
    catch (const std::exception& e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }

}

