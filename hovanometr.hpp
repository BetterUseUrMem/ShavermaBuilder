namespace hh {

	enum sous_type
	{
		chesnochnuy,
		ostriu,
		tomatnyu,
		sirnuy
	};

	struct shaverstruct {
		int pomidor;
		int myaso;
		int kapusta;
		int kartoshka;
		int morkov_koryaskaya;
		sous_type sous;
	};

	class ShavermBuilder {
	private:
		float c;
	public:
		void Calc(shaverstruct *s) {
				int sous{};
				switch (s->sous)
				{
				case chesnochnuy:
					sous = 335;
					break;
				case ostriu:
					sous = 11;
					break;
				case tomatnyu:
					sous = 29;
					break;
				case sirnuy:
					sous = 356;
					break;
				default:
					sous = 335;
					break;
				}

				c = ((s->kapusta/100) * 27) + ((s->kartoshka/100) * 77) + ((s->morkov_koryaskaya/100) * 134)
					+ ((s->myaso/100) * 110) + ((s->pomidor/100) * 18) + sous;
			}

		float GetCalories() {
			return c;
		}

	};
}
