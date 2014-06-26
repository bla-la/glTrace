#include <glTraceCommon.h>
#include <generated.h>

#define glNormal3fVertex3fSUN_wrp						\
    ((void  (*)(GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glNormal3fVertex3fSUN_Idx))


GLAPI void  APIENTRY glNormal3fVertex3fSUN(GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormal3fVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormal3fVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormal3fVertex3fSUN_wrp(nx,ny,nz,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormal3fVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormal3fVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glNormal3fVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormal3fVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glNormal3fVertex3fSUN_Idx));


        if(last_diff > 1000000000){
            printf("glNormal3fVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormal3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3fVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormal3fVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormal3fVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormal3fVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormal3fVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormal3fVertex3fSUN_Idx) = get_ts();
        }


	

}