#include <iostream>
#include <vector>

int sum(std::vector<int> &input) {
    int amout = 0;

    for (int i = 0; i < input.size(); i++) {
        amout += input[i];
    }
    return amout;
}

int main()
{    
    int n;
    std::vector<int> input;

    while (std::cin >> n) input.push_back(n);
        for (int i = 0; i < input.size(); i++) std::cout << input[i] << " ";
    std::cout << sum(input);

    return 0;
}
