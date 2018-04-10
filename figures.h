#ifndef FIGURES_H_
#define FIGURES_H_

#include <utility>
#include <vector>
#include <iostream>

class Figure {};

class Circle : public Figure {
public:
	std::pair<double, double> center;
	double radius;
};

class Polygon : public Figure {
public:
	std::vector<std::pair<double, double>> vertex;
	int num_vertex;
};

class Triangle : public Polygon {};

class Quadrangle : public Polygon {};

int check_inside(Circle &, Polygon &);

#endif