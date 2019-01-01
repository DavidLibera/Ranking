#include <iostream>
#include <vector>

using namespace std;

vector<int> findPoint(int px, int py, int qx, int qy) {

	
    int vx,vy;
    int rx,ry;

    vx = qx-px; 
    vy = qy-py;

    rx = px + 2*vx;
    ry = py + 2*vy;

	vector<int> Result = {rx,ry};
	
    return Result;
}

int main()
{
	
	vector<int> R;
	R = findPoint(0,0,4,8);
	
	for(std::size_t i=0; i<R.size(); ++i) 
		std::cout << R[i] << '\n'; 
	
	std::cout << "End program with 'Enter'";

	cin.ignore();
	
    return 0;
}