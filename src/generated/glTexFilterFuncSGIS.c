#include <glTraceCommon.h>
#include <generated.h>

#define glTexFilterFuncSGIS_wrp						\
    ((void  (*)(GLenum target,GLenum filter,GLsizei n,const GLfloat *weights                                        \
    ))GL_ENTRY_PTR(glTexFilterFuncSGIS_Idx))


GLAPI void  APIENTRY glTexFilterFuncSGIS(GLenum target,GLenum filter,GLsizei n,const GLfloat *weights)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexFilterFuncSGIS_Idx))
	{
            GL_ENTRY_PTR(glTexFilterFuncSGIS_Idx) = dlsym(RTLD_NEXT,"glTexFilterFuncSGIS");
            if(!GL_ENTRY_PTR(glTexFilterFuncSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexFilterFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexFilterFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexFilterFuncSGIS_wrp(target,filter,n,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexFilterFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexFilterFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glTexFilterFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexFilterFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glTexFilterFuncSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glTexFilterFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexFilterFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTexFilterFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTexFilterFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexFilterFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexFilterFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexFilterFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexFilterFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexFilterFuncSGIS_Idx) = get_ts();
        }


	

}