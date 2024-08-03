#include "solution.hpp"
#include "solutionone.hpp"

using namespace std;

int main(){

	Solution solution;
	string searchWord="mouse";
	vector<string> products={"mobile","mouse","moneypot","monitor","mousepad"};
	vector<vector<string>> outputT=solution.suggestedProducts(products, searchWord);
	cout<<"ANSWER COMPLEX= "<<endl;
	for(int i=0; i<outputT.size(); i++){
		for(int j=0; j<outputT[i].size(); j++){
			cout<<outputT[i][j]<<endl;
		}
	}

	vector<string> operations={"StockSpanner", "next", "next", "next", "next", "next", "next", "next"};
	vector<vector<int>> values={{}, {100}, {80}, {60}, {70}, {60}, {75}, {85}};

	StockSpanner* stockSpanner=nullptr;
	vector<int> output;
	for(int i=0; i<operations.size(); ++i){
		if(operations[i]=="StockSpanner"){
			stockSpanner=new StockSpanner();
			output.push_back(-1); //representa "null" en el output
		}else if(operations[i]=="next"){
			int result=stockSpanner->next(values[i][0]);
			output.push_back(result);
		}
	}

	for(int i=0; i<output.size(); ++i){
		if(output[i]==-1){
			cout<<"null";
		}else{
			cout<<output[i];
		}
		if(i != output.size()-1){
			cout<<", ";
		}
	}

	delete stockSpanner;

	return 0;
}

/*
Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"
Output: [["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],
["mouse","mousepad"],["mouse","mousepad"],["mouse","mousepad"]]
*/
