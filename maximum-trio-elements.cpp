#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int list_element;
    std::vector<int> list1;

    std::cout << "Please enter the first element: ";
    std::cin >> list_element;
    list1.push_back(list_element);

    while (list_element != 0) {
        std::cout << "Please enter the other elements (0 to stop): ";
        std::cin >> list_element;
        list1.push_back(list_element);
    }

    std::vector<int> list2;

    for (int element : list1) {
        if (std::find(list2.begin(), list2.end(), element) == list2.end()) {
            list2.push_back(element);
        }
    }

    int n = list2.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (list2[j] < list2[j + 1]) {
                int temp = list2[j];
                list2[j] = list2[j + 1];
                list2[j + 1] = temp;
            }
        }
    }

    std::cout << list2[0] << std::endl;
    std::cout << list2[1] << std::endl;
    std::cout << list2[2] << std::endl;

    return 0;
}
