#pragma once

#include <cmath>

class vbVec2
{                      // adapted from https://github.com/dcow/RayTracer
	public:
#pragma warning (push)
#pragma warning (disable:4201)
		union { struct { float x, y; }; float cell[2]; };
#pragma warning (pop)
		vbVec2() : x(0.f), y(0.f) {}
		vbVec2(float v) : x(v), y(v) {}
		vbVec2(float x, float y) : x(x), y(y) {}
		vbVec2 operator - () const { return vbVec2(-x, -y); }
		vbVec2 operator + (const vbVec2& addOperand) const { return vbVec2(x + addOperand.x, y + addOperand.y); }
		vbVec2 operator - (const vbVec2& operand) const { return vbVec2(x - operand.x, y - operand.y); }
		vbVec2 operator * (const vbVec2& operand) const { return vbVec2(x * operand.x, y * operand.y); }
		vbVec2 operator * (float operand) const { return vbVec2(x * operand, y * operand); }
		void operator -= (const vbVec2& a) { x -= a.x; y -= a.y; }
		void operator += (const vbVec2& a) { x += a.x; y += a.y; }
		void operator *= (const vbVec2& a) { x *= a.x; y *= a.y; }
		void operator *= (float a) { x *= a; y *= a; }
		float& operator [] (const int idx) { return cell[idx]; }
		float length() { return sqrtf(x * x + y * y); }
		float sqrLength() { return x * x + y * y; }
		vbVec2 normalized() { float r = 1.0f / length(); return vbVec2(x * r, y * r); }
		void normalize() { float r = 1.0f / length(); x *= r; y *= r; }
		static vbVec2 normalize(vbVec2 v) { return v.normalized(); }
		float dot(const vbVec2& operand) const { return x * operand.x + y * operand.y; }

};

