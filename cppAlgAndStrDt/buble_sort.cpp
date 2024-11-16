#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& array) {
	int n = array.size();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				std::swap(array[j], array[j + 1]);
			}
		}
	}
};

void printArray(const std::vector<int>& array) 
{
	for (int num : array)
	{
		std::cout << num << " ";
	}
	std::cout << "\n";

}

int main() {
	std::vector<int> nums = { 64, 34, 25, 12, 22, 11, 90 };

	std::cout << "Start array: ";
	printArray(nums);

	bubbleSort(nums);

	std::cout << "Sorted array: ";
	printArray(nums);

	return 0;
}