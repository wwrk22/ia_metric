#include <IA_Metric/cost_of_goods_sold.h>


ia::CostOfGoodsSold::CostOfGoodsSold(int year, int value, int annual_growth)
	: Metric(year, value, annual_growth) {}

ia::CostOfGoodsSold::~CostOfGoodsSold() {}
