#include <cmath>

const float G = 1;

struct Velocity {
	float VelX;
	float VelY;
};
struct Coordinate {
	float CooX;
	float CooY;
	float RangeX(Coordinate A) {
		return (A.CooX - CooX);
	}
	float RangeY(Coordinate A) {
		return  (A.CooY - CooY);
	}
	float Range(Coordinate A) {
		return sqrt(((A.CooX - CooX) * (A.CooX - CooX)) + ((A.CooY - CooY) * (A.CooY - CooY)));
	}

};
struct Accelarate {
	float AccX;
	float AccY;
};

class CelestialBody {
	int Mass;
	Velocity Velo;
	Coordinate Coor;
public:
	Accelarate AccInPoint(Coordinate  PointSpace) { 
		Accelarate AccInPoint;
		AccInPoint.AccX = G * Mass * (Coor.RangeX(PointSpace) / abs(Coor.RangeX(PointSpace))) / powf(Coor.RangeX(PointSpace), 2);
	};
};

class Star: public CelestialBody {
	int Luminosity;
public:
	 
};
class Planet : public CelestialBody {
	int Humanity;
public:

};
class Ship : public CelestialBody {
	bool Life;
	int Health;
	int Energy;
	int Fuel;
	int Crew;
	int Shaft;
public:
	bool IsAlive() { return Life; };
	void GetDamage(int Damage) { Health -= Damage; };
	void GetEnergy(int GetEnergy) { Energy += GetEnergy; };

};

class AiShip : public CelestialBody {
	int Humanity;
public:

};

template <int Star, int Planet, int GreenShip, int RedShip> class World {
public:
};