void R_activate ( const pDevDesc r1 ) ;
void R_circle ( double r1, double r2, double r3, const pGEcontext r4, pDevDesc r5 ) ;
void R_clip ( double r1, double r2, double r3, double r4, pDevDesc r5 ) ;
void R_close ( pDevDesc r1 ) ;
void R_deactivate ( pDevDesc r1 ) ;
Rboolean R_locator ( double * r1, double * r2, pDevDesc r3 ) ;
void R_line ( double r1, double r2, double r3, double r4, const pGEcontext r5, pDevDesc r6 ) ;
void R_metricInfo ( int r1, const pGEcontext r2, double * r3, double * r4, double * r5, pDevDesc r6 ) ;
void R_mode ( int r1, pDevDesc r2 ) ;
void R_newPage ( const pGEcontext r1, pDevDesc r2 ) ;
void R_polygon ( int r1, double * r2, double * r3, const pGEcontext r4, pDevDesc r5 ) ;
void R_polyline ( int r1, double * r2, double * r3, const pGEcontext r4, pDevDesc r5 ) ;
void R_rect ( double r1, double r2, double r3, double r4, const pGEcontext r5, pDevDesc r6 ) ;
void R_size ( double * r1, double * r2, double * r3, double * r4, pDevDesc r5 ) ;
double R_strWidth ( const char * r1, const pGEcontext r2, pDevDesc r3 ) ;
void R_text ( double r1, double r2, const char * r3, double r4, double r5, const pGEcontext r6, pDevDesc r7 ) ;
void R_onExit ( pDevDesc r1 ) ;
SEXP R_getEvent ( SEXP r1, const char * r2 ) ;
Rboolean R_newFrameConfirm ( pDevDesc r1 ) ;
void R_textUTF8 ( double r1, double r2, const char * r3, double r4, double r5, const pGEcontext r6, pDevDesc r7 ) ;
double R_strWidthUTF8 ( const char * r1, const pGEcontext r2, pDevDesc r3 ) ;

