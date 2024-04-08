#include <IA_Metric/computer.h>

void ia::Computer::computeGrowth(std::vector<std::shared_ptr<Metric>>& metrics) {
	// There has to be at least two consecutive metric values to compute a single growth.
	if (metrics.size() < 2) return;

	// Sort the metrics by year in ascending order. 
	// TODO: call function that accepts the metrics vector and sorts it

	std::vector<int> growths;

	for (std::size_t i{ 1 }; i < metrics.size(); i++) {
		std::shared_ptr<Metric> curr_year_metric{ metrics[i] };
		std::shared_ptr<Metric> prev_year_metric{ metrics[i - 1] };
		int value_diff{ curr_year_metric->value_ - prev_year_metric->value_ };

		// Multiply the difference by 100 to prevent the division from giving us a zero.
		curr_year_metric->annual_growth_ = (value_diff * 100) / prev_year_metric->value_;
	}
}
