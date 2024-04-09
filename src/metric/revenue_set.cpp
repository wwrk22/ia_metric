#include <IA_Metric/revenue_set.h>
#include <iostream>


namespace ia {

std::unique_ptr<Metric> RevenueSet::createMetric(const std::pair<int, int>& year_and_value) {
	return std::make_unique<Revenue>(year_and_value.first, year_and_value.second, 0);
}

} // namespace ia
