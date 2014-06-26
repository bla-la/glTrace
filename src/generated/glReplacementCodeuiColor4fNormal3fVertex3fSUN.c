#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiColor4fNormal3fVertex3fSUN_wrp						\
    ((void  (*)(GLuint rc,GLfloat r,GLfloat g,GLfloat b,GLfloat a,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc,GLfloat r,GLfloat g,GLfloat b,GLfloat a,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiColor4fNormal3fVertex3fSUN_wrp(rc,r,g,b,a,nx,ny,nz,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx));


        if(last_diff > 1000000000){
            printf("glReplacementCodeuiColor4fNormal3fVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx) = get_ts();
        }


	

}