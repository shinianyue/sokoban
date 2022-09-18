#pragma once
#include <ctime>
/*here lies the funs in graveyard

bool time_trigger(double time_slot,double trigger_times) {	//time_slot = the time you need to finish the whole mission.	use "ms" plz.
	double trigger_time = time_slot / trigger_times;
	static int time_start = 0;
	static int count = 0;
	time_start = clock();
	while (1) {
		if (time_start == clock() + CLOCKS_PER_SEC*0.01) {	// one ms later
			count++;
			if (double(clock())-time_start == time_slot){
				return 0;
			}
			return 1;
		}
		if (count == trigger_times) {
			break;
		}
	}
}

*/

bool check_of_air(int x0[], int y0[], int x, int y) {//尾气处理函数，试试看嗷
	int i;
	int length = 20;
	for (i = 0; i < length; i++) {
		if (x0[i] == x) {
			if (y0[i] == y) {
				return(1);
			}
		}
	}
	return(0);
}
bool wcompare(int mount, int xd[], int yd[], int map01[][50]) {
	int m1 = 0;
	for (m1 = 0; m1 <= mount - 1; m1++) {
		if (map01[yd[m1]][xd[m1]] == 2) {
			continue;
		}
		else {
			return 0;
		}

	}
	return 1;
}