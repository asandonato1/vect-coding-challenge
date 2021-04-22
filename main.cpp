#include <iostream>
#include <vector>

// Define first_three_multiples() here:

std::vector<int> first_three_multiples(int num) {
    std::vector<int> vect; 
    std::vector<int> vect1;
    int i = 0;
        while (i < 4) {
        vect.push_back(num * i);
        i++;
    }
        for (int x = 0; x < vect.size(); x++) {
            if (vect[x] == 0) {
                continue;
            }
            else {
                vect1.push_back(vect[x]);
            }
        }
        return vect1;
}

int main() {

    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }

}
