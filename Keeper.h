#include "TRAIN.h"
class KEEPER
{
	TRAIN** arr;
	int size;
public:
	KEEPER() {
		printf("keeper ������\n");
		size = 0;
		arr = nullptr;
	}
	~KEEPER() {
		for (int i = 0; i < size; i++)
			delete arr[i];
		printf("keeper ������\n");
	}
	void add();
	void edit();
	void delet();
	void sorting();
	void seeall();
	void seeWithDestination();
	void seeWithNumber();
	void seeWithTime();
};