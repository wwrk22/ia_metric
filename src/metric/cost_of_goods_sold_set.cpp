#include <IA_Metric/cost_of_goods_sold_set.h>


namespace ia {

std::unique_ptr<Metric> CostOfGoodsSoldSet::createMetric(int year, int value) {
	return std::make_unique<CostOfGoodsSold>(year, value);
}

}
