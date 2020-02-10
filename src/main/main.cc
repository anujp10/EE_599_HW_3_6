#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    int input = 0, curr_item = 0, i = 0;

    std::vector <int> :: iterator it;
    std::vector <int> input_vector = {1, 4, 5, 23, 100, 12, 18, 175};
    do {
        solution.PrintMenu(input_vector);
        std::cin >> input;
        std::cout << input << std::endl;
        switch (input) {
            case 1:
                curr_item = input_vector[0];
                it = input_vector.begin();
                std::cout << "Output: " << curr_item << std::endl;
                break;
            case 2:
                curr_item = input_vector[input_vector.size() -1];
                it = input_vector.begin() + input_vector.size() -1;
                std::cout << "Output: " << curr_item << std::endl;
                break;
            case 3:
                std::cout << "Output: " << curr_item << std::endl;
                break;
            case 4:
                std::cout << "Enter the value of i::" << std::endl;
                std::cin >> i;
                std::cout << i << std::endl;
                std::cout << "Output: " << curr_item << std::endl;
                if ((it + i) >= input_vector.end())
                    std::cout << "Sorry! You cannot traverse " << i << "elements from your current location." << std::endl;
                else {
                    advance(it, i);
                    curr_item = *it;
                    std::cout << "Output: " << curr_item << std::endl;
                }
                break;
            case 5:
                std::cout << "Exit !" << std::endl;
                break;
            default:
                std::cout << "Wrong input. Please check the available options in the menu!" << std::endl;
        }
        if (input == 5)
            break;
    } while (1);

    return EXIT_SUCCESS;
}