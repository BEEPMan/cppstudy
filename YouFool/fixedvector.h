#pragma once

template <typename T, size_t N>
class fixedvector
{
public:
	fixedvector();
	bool add(const T& data);
	size_t getSize() const;
	size_t getCapacity() const;
private:
	size_t mSize;
	T mArray[N];
};

template<typename T, size_t N>
fixedvector<T, N>::fixedvector()
	:mSize(0)
{
}

template<typename T, size_t N>
bool fixedvector<T, N>::add(const T& data)
{
	if (mSize >= N)return false;
	mArray[mSize++] = data;
	return true;
}

template<typename T, size_t N>
size_t fixedvector<T, N>::getSize() const
{
	return mSize;
}

template<typename T, size_t N>
size_t fixedvector<T, N>::getCapacity() const
{
	return N;
}