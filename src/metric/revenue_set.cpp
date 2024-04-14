#include <IA_Metric/revenue_set.h>


namespace ia {

std::unique_ptr<Metric> RevenueSet::createMetric(int year, int value) {
	return std::make_unique<Revenue>(year, value);
}

} // namespace ia
