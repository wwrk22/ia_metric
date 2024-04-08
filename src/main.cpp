#include "IA_MetricConfig.h"

#include <IA_Metric/revenue.h>
#include <IA_Metric/cost_of_goods_sold.h>
#include <IA_Metric/computer.h>

#include <memory>
#include <vector>
#include <iostream>


int main(int argc, char* argv[]) {
	std::cout << argv[0] << " Version "
		<< IA_Metric_VERSION_MAJOR << "."
		<< IA_Metric_VERSION_MINOR << "."
		<< IA_Metric_VERSION_MINOR << '\n';

	using namespace ia;

	std::vector<std::shared_ptr<Metric>> revenues;
	revenues.emplace_back(std::make_shared<Revenue>(2022, 100, 0));
	revenues.emplace_back(std::make_shared<Revenue>(2023, 130, 0));
	revenues.emplace_back(std::make_shared<Revenue>(2024, 195, 0));

	Computer::computeGrowth(revenues);

	for (std::shared_ptr<Metric> m : revenues) {
		std::cout << m->year_ << ", " << m->value_ << ", " << m->annual_growth_ << '\n';
	}

	return 0;
}
