#ifndef IA_METRIC_H
#define IA_METRIC_H

class Metric {

public:
	// Require concrete derived class to clean itself up during destruction,
	// especially when the class has been instantiated through the base Metric
	// class.
	virtual ~Metric() {};

	int year_;
	int value_;
	int annual_growth_;

protected:
	// Expect a subclass to provide the values for the members.
	// How the values are computed is up to the subclass, but the members are
	// required to be initialized.
	Metric(int year, int value, int annual_growth);
};

#endif
