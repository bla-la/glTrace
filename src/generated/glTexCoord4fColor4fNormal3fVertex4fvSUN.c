#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4fColor4fNormal3fVertex4fvSUN_wrp						\
    ((void  (*)(const GLfloat *tc,const GLfloat *c,const GLfloat *n,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx))


GLAPI void  APIENTRY glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat *tc,const GLfloat *c,const GLfloat *n,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx))
	{
            GL_ENTRY_PTR(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) = dlsym(RTLD_NEXT,"glTexCoord4fColor4fNormal3fVertex4fvSUN");
            if(!GL_ENTRY_PTR(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4fColor4fNormal3fVertex4fvSUN_wrp(tc,c,n,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord4fColor4fNormal3fVertex4fvSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx) = get_ts();
        }


	

}