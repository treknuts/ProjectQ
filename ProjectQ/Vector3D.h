class Vector3D
	{
	public:
		Vector3D();

		Vector3D(int a, int b, int c) {
			this->x = a;
			this->y = b;
			this->z = c;
		}

		~Vector3D();
		int x;
		int y;
		int z;
		float magnitude;

	private:

	};

	Vector3D::Vector3D()
	{
		this->x = 1;
		this->y = 1;
		this->z = 1;
	}

	Vector3D::Vector3D() {

	}

	Vector3D::~Vector3D()
	{
	}

	Vector3D operator+(const Vector3D& u, const Vector3D& w) {
		Vector3D v;

		v.x = u.x + w.x;
		v.y = u.y + w.y;
		v.z = u.z + w.z;

		return v;
	}


