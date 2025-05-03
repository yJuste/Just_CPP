// ************************************************************************** //
//                                                                            //
//                bsp.cpp                                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Point.class.h"

/*
 *	Calcul du vecteur:		v(AB) = (x, y) = (bx - ax, by - ay)
 *	Calcul du déterminant:		det(u, v) = xy' - yx'
 *
 *	Les vecteurs des points A, B, C avec point:
 *
 *	u(PA) = (ax - px, ay - py)
 *	v(PB) = (bx - px, by - py)
 *	w(PC) = (cx - px, cy - py)
 *
 *	Les déterminants associés:
 *
 *	det(u, v) = (ax - px)(by - py) - (bx - px)(ay - py)
 *	det(v, w) = (bx - px)(cy - py) - (cx - px)(by - py)
 *	det(w, u) = (cx - px)(ay - py) - (ax - px)(cy - py)
 *
 *	Si les 3 déterminants du point sont > 0, alors le point fait parti du triangle.
 *	Si les 3 déterminants du point sont < 0, alors le point fait parti du triangle.
 *
 *	Dans les autres cas, le point ne fait pas parti du triangle.
 *
 */
bool	bsp( const Point a, const Point b, const Point c, const Point point )
{
	float		ux = a.getX().toFloat() - point.getX().toFloat();
	float		uy = a.getY().toFloat() - point.getY().toFloat();

	float		vx = b.getX().toFloat() - point.getX().toFloat();
	float		vy = b.getY().toFloat() - point.getY().toFloat();

	float		wx = c.getX().toFloat() - point.getX().toFloat();
	float		wy = c.getY().toFloat() - point.getY().toFloat();

	Point		vector_PA( ux, uy );
	Point		vector_PB( vx, vy );
	Point		vector_PC( wx, wy );

	std::cout << "\033[35m";
	std::cout << "------------------Vecteur :------------------" << std::endl;
	std::cout << "  Vecteur PA: " << vector_PA << std::endl;
	std::cout << "  Vecteur PB: " << vector_PB << std::endl;
	std::cout << "  Vecteur PC: " << vector_PC << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\033[0m" << std::endl;

	float		det_UV = ux * vy - vx * uy;
	float		det_VW = vx * wy - wx * vy;
	float		det_WU = wx * uy - ux * wy;

	std::cout << "\033[34m";
	std::cout << "----------------Determinant :----------------" << std::endl;
	std::cout << "  Determinant UV: " << det_UV << std::endl;
	std::cout << "  Determinant VW: " << det_VW << std::endl;
	std::cout << "  Determinant WU: " << det_WU << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\033[0m" << std::endl;

	std::cout << "\033[91m";
	std::cout << "----------------Résultats :------------------" << std::endl;
	std::cout << "  Les 3 déterminants sont ils tous:" << std::endl;
	std::cout << "	tous les det > 0 ??" << std::endl;
	std::cout << "	tous les det < 0 ??" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\033[0m" << std::endl;

	if ((det_UV > 0 && det_VW > 0 && det_WU > 0) || (det_UV < 0 && det_VW < 0 && det_WU < 0))
		return true;
	return false;
}
