#ifndef IA_METRIC_H
#define IA_METRIC_H

class Metric {

public:
	virtual ~Metric() {};

	int year_;
	int value_;
	int annual_growth_;

protected:
	Metric(int year, int value, int annual_growth);
};

#endif
