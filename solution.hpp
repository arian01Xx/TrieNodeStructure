#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class StockSpanner{
public:
	//precio, dias pasados
	stack<pair<int,int>> s;
	StockSpanner(){

	}

	int next(int price){
		long long int count=1;
		while(s.size()!=0 && s.top().first<=price){
			count=count+s.top().second;
			s.pop();
		}
		s.push({price, count});
		return count;
	}
};

#endif // SOLUTION_HPP