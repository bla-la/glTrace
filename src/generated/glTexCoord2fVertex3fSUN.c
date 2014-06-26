#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord2fVertex3fSUN_wrp						\
    ((void  (*)(GLfloat s,GLfloat t,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glTexCoord2fVertex3fSUN_Idx))


GLAPI void  APIENTRY glTexCoord2fVertex3fSUN(GLfloat s,GLfloat t,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord2fVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord2fVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord2fVertex3fSUN_wrp(s,t,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord2fVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord2fVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord2fVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord2fVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord2fVertex3fSUN_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord2fVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord2fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2fVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord2fVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord2fVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord2fVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord2fVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord2fVertex3fSUN_Idx) = get_ts();
        }


	

}