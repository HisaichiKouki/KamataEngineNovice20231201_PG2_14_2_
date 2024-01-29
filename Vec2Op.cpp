#include "Vec2Op.h"


void Vec2Op::Vec2OpScreenPrintf(int posX, int posY, int digit, const char* memo)
{
	if (digit>7)
	{
		digit = 7;
	}
	Novice::ScreenPrintf(posX, posY , memo);
	Novice::ScreenPrintf(posX, posY+20, "[x=%0.*f y=%0.*f]", digit, x_, digit, y_);
}

Vec2Op Vec2Op::operator+(const Vec2Op& obj)
{
	Vec2Op sc;
	sc.x_ = x_ + obj.x_;
	sc.y_ = y_ + obj.y_;
	return sc;
}

void Vec2Op::operator+=(const Vec2Op& obj)
{
	
	x_ +=  obj.x_;
	y_ += obj.y_;
	

}

Vec2Op Vec2Op::operator-(const Vec2Op& obj)
{
	Vec2Op sc;
	sc.x_ = x_ - obj.x_;
	sc.y_ = y_ - obj.y_;
	return sc;
}

void Vec2Op::operator-=(const Vec2Op& obj)
{
	Vec2Op sc;
	sc.x_ -= obj.x_;
	sc.y_ -= obj.y_;
}

Vec2Op Vec2Op::operator/(const Vec2Op& obj)
{
	Vec2Op sc;
	sc.x_ = x_ / obj.x_;
	sc.y_ = y_ / obj.y_;
	return sc;
}

void Vec2Op::operator/=(const Vec2Op& obj)
{
	Vec2Op sc;
	sc.x_ /= obj.x_;
	sc.y_ /= obj.y_;
}

Vec2Op Vec2Op::operator*(const Vec2Op& obj)
{
	Vec2Op sc;
	sc.x_ = x_ * obj.x_;
	sc.y_ = y_ * obj.y_;
	return sc;
}

void Vec2Op::operator*=(const Vec2Op& obj)
{
	Vec2Op sc;
	sc.x_ *= obj.x_;
	sc.y_ *= obj.y_;
}

//Vec2Op Vec2Op::NormalizeVec2(const Vec2Op& vec2)
//{
//	Vec2Op result=vec2;
//	float length = sqrtf(vec2.x_ * vec2.x_ + vec2.y_ * vec2.y_);
//	result.x_ /= length;
//	result.y_ /= length;
//	return result;
//}

Vec2Op Vec2Normalize(const Vec2Op& vec2)
{
	Vec2Op result = vec2;
	if (vec2.x_!=0||vec2.y_!=0)
	{
		float length = sqrtf(vec2.x_ * vec2.x_ + vec2.y_ * vec2.y_);
		result.x_ /= length;
		result.y_ /= length;
	}
	
	return result;
}
