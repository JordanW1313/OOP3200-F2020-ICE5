#pragma once
#include <string>
#ifndef __VECTOR3D__
#define __VECTOR3D__

template <class T>
class Vector3D
{
public:
	Vector3D(const T x = static_cast<T>(0.0), const T y = static_cast<T>(0.0), const T z = static_cast<T>(0.0));
	~Vector3D();

	//accessors
	T GetX() const;
	T GetY() const;
	T GetZ() const;

	// mutators
	void SetX(const T x);
	void SetY(const T y);
	void SetZ(const T z);
	void Set(const T x, const T y, const T z);

	std::string ToString() const;

private:
	T m_x;
	T m_y;
	T m_z;
};

/* Implementation Section */
template <class T>
Vector3D<T>::Vector3D(const T x, const T y, const T z) : m_x(x), m_y(y), m_z(z)
{
}

template <class T>
Vector3D<T>::~Vector3D()
{
}

template <class T>
T Vector3D<T>::GetX() const
{
	return m_x;
}

template <class T>
T Vector3D<T>::GetY() const
{
	return m_y;
}

template <class T>
T Vector3D<T>::GetZ() const
{
	return m_z;
}

template <class T>
void Vector3D<T>::SetX(const T x)
{
	m_x = x;
}

template <class T>
void Vector3D<T>::SetY(const T y)
{
	m_y = y;
}

template <class T>
void Vector3D<T>::SetZ(const T z)
{
	m_z = z;
}

template <class T>
void Vector3D<T>::Set(const T x, const T y, const T z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

template <class T>
std::string Vector3D<T>::ToString() const
{
	return "(" + std::to_string(m_x) + ", " + std::to_string(m_y) + ", " + std::to_string(m_z) + ")";
}

#endif
