#include <cstddef>
#include <iterator>
#include <cmath>
#include <vector>
#include <algorithm>


template<class Iter>
constexpr void yuki_sort(Iter first, Iter last) {
	size_t n = std::distance(first, last);
	Iter ma_it = std::max_element(first, last);
	size_t b = sqrt(*ma_it), bb = *ma_it / b;
	std::vector<std::vector<int>> Y(bb + 1);
	for (Iter it = first; it != last; ++it)
		Y[*it / b].push_back(*it % b);
	int* cnt = new int[b];
	Iter it = first;
	for (size_t i = 0; i <= bb; ++i) {
		for (auto val: Y[i])
			++cnt[val];
		for (size_t j = 0; j < b; ++j)
			for (; cnt[j]; --cnt[j])
				*it++ = i * b + j;
	}
	delete[] cnt;
}