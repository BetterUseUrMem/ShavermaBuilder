#include <iostream>

namespace WAYRMA
{
	enum lavash_type
	{
		Myagkiy,
		Tverdyu,
		Hrystashyu
	};

	enum sous_type
	{
		chesnochnuy,
		ostriu,
		firmennuy,
		tomatnyu,
		sirnuy
	};

	struct Shaverma
	{
		int pomidor;
		int myaso;
		int kapusta;
		int kartoshka;
		int morkov_koryaskaya;
		sous_type sous;
		lavash_type lavash;
	};

	void PRIGOTOVIT
	{
		std::cout << "Shaverma gorovitsya..." << std::endl;
	    Sleep(50000);
		std::cout << "Gotovo!!! BON APPETI" << std::endl;
	}
}
