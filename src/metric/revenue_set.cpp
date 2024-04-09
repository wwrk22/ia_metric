#include <IA_Metric/revenue_set.h>
#include <iostream>


namespace ia {

void RevenueSet::initMetrics(const std::vector<std::pair<int, int>>& metrics) {
	for (const auto& metric : metrics) {
		metrics_.push_back(std::make_unique<Revenue>(metric.first, metric.second, 0));
	}
}

} // namespace ia
