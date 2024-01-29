#pragma once
#include <Novice.h>
#include <corecrt_math.h>


class Vec2Op
{
public:
	float x_;
	float y_;
	Vec2Op(float x = 0, float y = 0) { x_ = x; y_ = y; }

	/// <summary>
	/// 値を描画
	/// </summary>
	/// <param name="posX">描画位置X</param>
	/// <param name="posY">描画位置Y</param>
	/// <param name="digit">桁数</param>
	void Vec2OpScreenPrintf(int posX, int posY,int digit,const char *memo);

	Vec2Op operator+(const Vec2Op& obj);
	void operator+=(const Vec2Op& obj);

	Vec2Op operator-(const Vec2Op& obj);
	void operator-=(const Vec2Op& obj);

	Vec2Op operator/(const Vec2Op& obj);
	void operator/=(const Vec2Op& obj);

	Vec2Op operator*(const Vec2Op& obj);
	void operator*=(const Vec2Op& obj);

		;
};

Vec2Op Vec2Normalize(const Vec2Op& vec2);
