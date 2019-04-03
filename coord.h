#ifndef COORD_H_
#define COORD_H_

#include <stdint.h>
#include "cubie.h"
#include "moves.h"

#define N_TWIST_COORDS 2187
#define N_FLIP_COORDS 2048
#define N_SLICE_COORDS 11880
#define N_SLICE_COORDS_P2 24

#define N_UEDGES_COORDS 11880
#define N_DEDGES_COORDS 11880
#define N_UDEDGES_COORDS_P2 40320

#define N_CORNERS_COORDS 40320
#define N_EDGES_COORDS 4790001600

typedef uint16_t Coord;

extern Coord (*twist_move)[N_MOVES];
extern Coord (*flip_move)[N_MOVES];
extern Coord (*slice_move)[N_MOVES];
extern Coord (*uedges_move)[N_MOVES];
extern Coord (*dedges_move)[N_MOVES];
extern Coord (*udedges_move)[N_MOVES_P2];
extern Coord (*corners_move)[N_MOVES];

extern Coord (*merge_uedges_dedges)[N_DEDGES_COORDS];

Coord getTwist(CubieCube &cube);
Coord getFlip(CubieCube &cube);
Coord getSlice(CubieCube &cube);
Coord getUEdges(CubieCube &cube);
Coord getDEdges(CubieCube &cube);
Coord getUDEdges(CubieCube &cube);
Coord getCorners(CubieCube &cube);

void setTwist(CubieCube &cube, Coord twist);
void setFlip(CubieCube &cube, Coord flip);
void setSlice(CubieCube &cube, Coord slice);
void setUEdges(CubieCube &cube, Coord uedges);
void setDEdges(CubieCube &cube, Coord dedges);
void setUDEdges(CubieCube &cube, Coord udedges);
void setCorners(CubieCube &cube, Coord corners);
void setEdges(CubieCube &cube, Coord edges);

void initTwistMove();
void initFlipMove();
void initSliceMove();
void initUEdgesMove();
void initDEdgesMove();
void initUDEdgesMove();
void initCornersMove();

void initMergeUEdgesDEdges();

#endif

