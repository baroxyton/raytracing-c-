#include <vector>
namespace vectorOps{
    double dotProduct(std::vector<double> vector1, std::vector<double> vector2);
    std::vector<double> vectorAddition(std::vector<double> vector1, std::vector<double> vector2);
    std::vector<double> vectorSubtraction(std::vector<double> vector1, std::vector<double> vector2);
    std::vector<double> crossProduct(std::vector<double> vector1, std::vector<double> vector2);
    std::vector<double> getUnitVector(std::vector<double> vector1);
    std::vector<double> scalarMultiplication(std::vector<double>, double scalar);

}