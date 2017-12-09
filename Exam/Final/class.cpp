class Thermostat {

	public:
		Thermostat();
		Thermostat(double newTemp, int newHour);
		double getTemp() const;
		void setTemp(double newTemp);
		double getHour() const;
		void setHour(int newHour);
		double fToC();

	private:
		double temp;
		int hour;


};

Thermostat::Thermostat(double newTemp, int newHour) {

	temp = newTemp;
	hour = newHour;

}

int main() {

	Thermostat one(72.1,14);
	Thermostat two(52.8,4);

	cout << one.getTemp() << endl;
	two.setTemp(62.8);

	cout << two.fToC() << endl;

	return 0;
}
