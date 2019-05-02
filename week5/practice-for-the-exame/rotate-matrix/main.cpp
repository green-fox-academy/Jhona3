#include <iostream>
#include <vector>


void rotateMatrix(std::vector<std::vector<int>> matrix);

int main()
{
    std::vector<std::vector<int>> matrix{


            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}


    };

    rotateMatrix(matrix);


    return 0;
}


void rotateMatrix(std::vector<std::vector<int>> matrix)
{

    std::vector<std::vector<int>> finalMatrix = matrix;
    int tempValue = 0;


    for (int i = 0; i < matrix.size(); ++i) {
        int counter = 0;
        for (int j = matrix.size() - 1; j >= 0; --j) {
            tempValue = matrix.at(j).at(i);
            finalMatrix[i][counter] = tempValue;
            ++counter;


        }


    }

    for (int k = 0; k < finalMatrix.size(); ++k) {
        for (int i = 0; i < finalMatrix.size(); ++i) {
            std::cout << finalMatrix.at(k).at(i) << " ";
        }
        std::cout << std::endl;
    }

}
