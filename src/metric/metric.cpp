#include <IA_Metric/metric.h>

namespace ia {

Metric::Metric(int year, int value, int annual_growth)
	: year_(year), value_(value), annual_growth_(annual_growth) {}

} // namespace ia
