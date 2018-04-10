#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include "figures.h"

int check_inside(Circle & c, Polygon & p) {
	int touch = 0;
	for (int i = 0; i < 4; ++i) {
		double length = std::sqrt((p.vertex[i].first - c.center.first) * (p.vertex[i].first - c.center.first)
						+ (p.vertex[i].second - c.center.second) * (p.vertex[i].second - c.center.second));
		if (length > c.radius)
			return 1;
		else if (length == c.radius)
			++touch;
	}
	if (touch == p.num_vertex)
		return 0;
	else
		return -1;
}