/*
** svn $Id$
*******************************************************************************
<<<<<<< HEAD
** Copyright (c) 2002-2016 The ROMS/TOMS Group                               **
=======
** Copyright (c) 2002-2013 The ROMS/TOMS Group                               **
>>>>>>> master
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for North East North America Application.
**
** Application flag:   NENA
** Input script:       ocean_nena.in
*/

#define UV_ADV
#define UV_SADVECTION
#define DJ_GRADPS
#define UV_COR
#define UV_QDRAG
#define UV_VIS2
<<<<<<< HEAD
#define MIX_S_UV
#define SPLINES_VDIFF
#define SPLINES_VVISC
#define TS_U3HADVECTION
#define TS_SVADVECTION
=======
#define UV_PSOURCE
#define MIX_S_UV
#define TS_U3HADVECTION
#define TS_SVADVECTION
#define TS_PSOURCE
>>>>>>> master
#define SOLVE3D
#define SALINITY
#define NONLIN_EOS
#define CURVGRID
<<<<<<< HEAD
=======
#define SPLINES
>>>>>>> master
#define MASKING
#define AVERAGES
#define SRELAXATION
#define QCORRECTION
#define SOLAR_SOURCE
#define DIURNAL_SRFLUX
#define LMD_MIXING
#ifdef LMD_MIXING
# define LMD_RIMIX
# define LMD_CONVEC
# define LMD_SKPP
# define LMD_NONLOCAL
<<<<<<< HEAD
# define RI_MIXING
#endif
=======
#endif
#undef  GLS_MIXING
>>>>>>> master
#define BIO_FENNEL
#ifdef BIO_FENNEL
# define CARBON
# define DENITRIFICATION
# define BIO_SEDIMENT
# define DIAGNOSTICS_BIO
# define ANA_SPFLUX
# define ANA_BPFLUX
#endif
<<<<<<< HEAD
=======
#undef  M2CLIMATOLOGY
#undef  M3CLIMATOLOGY
#undef  TCLIMATOLOGY
#undef  ZCLIMATOLOGY
>>>>>>> master

#define ANA_BSFLUX
#define ANA_BTFLUX