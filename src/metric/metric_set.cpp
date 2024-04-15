#include <IA_Metric/metric_set.h>


namespace ia {

void MetricSet::initMetrics(const std::vector<std::pair<int, int>>& years_and_values) {
	for (const std::pair<int, int>& year_and_value : years_and_values) {
		std::unique_ptr<Metric> metric{ createMetric(year_and_value.first, year_and_value.second) };
		metrics_.emplace_back(std::move(metric));
	}

	// Compute and set the annual growth for all years except the oldest.
	Computer::computeSetGrowth(metrics_);
}

int MetricSet::avgAnnualGrowth() {
	double sum{};
	for (const std::unique_ptr<Metric>& metric : metrics_) sum += metric->annual_growth_;
	return round(sum / metrics_.size());
}

}
