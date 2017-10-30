#include "DataFormats/GeometrySurface/interface/Bounds.h"
#include "DataFormats/GeometrySurface/interface/GeomExceptions.h"

float Bounds::howMuchInside(const Local3DPoint&, const LocalError&) const {
    throw GeometryError("howMuchInside not implemented");
}

