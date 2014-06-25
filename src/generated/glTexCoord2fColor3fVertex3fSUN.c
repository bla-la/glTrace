#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord2fColor3fVertex3fSUN_wrp						\
    ((void  (*)(GLfloat s,GLfloat t,GLfloat r,GLfloat g,GLfloat b,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glTexCoord2fColor3fVertex3fSUN_Idx))


GLAPI void  APIENTRY glTexCoord2fColor3fVertex3fSUN(GLfloat s,GLfloat t,GLfloat r,GLfloat g,GLfloat b,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord2fColor3fVertex3fSUN_Idx))
	{
            GL_ENTRY_PTR(glTexCoord2fColor3fVertex3fSUN_Idx) = dlsym(RTLD_NEXT,"glTexCoord2fColor3fVertex3fSUN");
            if(!GL_ENTRY_PTR(glTexCoord2fColor3fVertex3fSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord2fColor3fVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord2fColor3fVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord2fColor3fVertex3fSUN_wrp(s,t,r,g,b,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord2fColor3fVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord2fColor3fVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord2fColor3fVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord2fColor3fVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord2fColor3fVertex3fSUN_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord2fColor3fVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord2fColor3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2fColor3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2fColor3fVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord2fColor3fVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord2fColor3fVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord2fColor3fVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord2fColor3fVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord2fColor3fVertex3fSUN_Idx) = get_ts();
        }


	

}