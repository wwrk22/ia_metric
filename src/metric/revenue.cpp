#include <IA_Metric/revenue.h>


ia::Revenue::Revenue(int year, int value, int annual_growth)
	: Metric(year, value, annual_growth) {}

ia::Revenue::~Revenue() {}
