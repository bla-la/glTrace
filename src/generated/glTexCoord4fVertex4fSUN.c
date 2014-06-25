#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4fVertex4fSUN_wrp						\
    ((void  (*)(GLfloat s,GLfloat t,GLfloat p,GLfloat q,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glTexCoord4fVertex4fSUN_Idx))


GLAPI void  APIENTRY glTexCoord4fVertex4fSUN(GLfloat s,GLfloat t,GLfloat p,GLfloat q,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord4fVertex4fSUN_Idx))
	{
            GL_ENTRY_PTR(glTexCoord4fVertex4fSUN_Idx) = dlsym(RTLD_NEXT,"glTexCoord4fVertex4fSUN");
            if(!GL_ENTRY_PTR(glTexCoord4fVertex4fSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord4fVertex4fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4fVertex4fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4fVertex4fSUN_wrp(s,t,p,q,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4fVertex4fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4fVertex4fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4fVertex4fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4fVertex4fSUN_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4fVertex4fSUN_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord4fVertex4fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4fVertex4fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4fVertex4fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4fVertex4fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4fVertex4fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4fVertex4fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4fVertex4fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4fVertex4fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4fVertex4fSUN_Idx) = get_ts();
        }


	

}