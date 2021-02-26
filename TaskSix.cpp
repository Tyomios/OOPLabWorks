#include "TaskSix.h"


double GetSumOfPositive(double* data)
{
    int size;
    std::cout << "\nEnter array's size" << std::endl;
    std::cout << ">" ;
    std::cin >> size;
	
    double answer = 0.0;
	
    for (int i = 0; i < size; i++)
    {
        if (data[i] > 0.0)
        {
            answer += data[i];
        }
    }
    return answer;
}