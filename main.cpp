#include <array>
#include <algorithm>
#include <iterator>
#include <functional>
int main()
{
	std::array<int, 5> arr = {10, 5, 7, 6, 3, 4, 1, 4, 7, 6};
	std::sort(std::begin(arr), std::end(arr));
	std::sort(std::begin(arr), std::end(arr),
	          std::greater<int>{});
}