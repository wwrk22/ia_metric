#include "IA_MetricConfig.h"

#include <IA_Metric/revenue.h>
#include <IA_Metric/cost_of_goods_sold.h>

#include <iostream>


int main(int argc, char* argv[]) {
	std::cout << argv[0] << " Version "
		<< IA_Metric_VERSION_MAJOR << "."
		<< IA_Metric_VERSION_MINOR << "."
		<< IA_Metric_VERSION_MINOR << '\n';

	ia::Revenue r(2023, 100, 5);
	std::cout << r.year_ << ", " << r.value_ << ", " << r.annual_growth_ << '\n';

	ia::CostOfGoodsSold c(2023, 20, 3);
	std::cout << c.year_ << ", " << c.value_ << ", " << c.annual_growth_ << '\n';

	return 0;
}
