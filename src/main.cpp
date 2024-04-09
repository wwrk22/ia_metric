#include "IA_MetricConfig.h"

#include <IA_Metric/revenue_set.h>
#include <IA_Metric/revenue.h>
#include <IA_Metric/metric.h>

#include <memory>
#include <vector>
#include <iostream>


int main(int argc, char* argv[]) {
	std::cout << argv[0] << " Version "
		<< IA_Metric_VERSION_MAJOR << "."
		<< IA_Metric_VERSION_MINOR << "."
		<< IA_Metric_VERSION_MINOR << '\n';

	using namespace ia;

	std::vector<std::pair<int, int>> years_and_values{ { 2022, 100 }, { 2023, 130 }, { 2024, 195 } };
	RevenueSet revenue_set;
	revenue_set.initMetrics(years_and_values);

	for (const std::unique_ptr<Metric>& m : revenue_set.metrics_)
		std::cout << m->year_ << ", " << m->value_ << ", " << m->annual_growth_ << '\n';
	std::cout << "avg annual growth = " << revenue_set.avgAnnualGrowth();

	return 0;
}
