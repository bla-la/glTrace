#include <glTraceCommon.h>
#include <generated.h>

#define glPolygonMode_wrp						\
    ((void  (*)(GLenum face,GLenum mode                                        \
    ))GL_ENTRY_PTR(glPolygonMode_Idx))


GLAPI void  APIENTRY glPolygonMode(GLenum face,GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPolygonMode_Idx))
	{
            GL_ENTRY_PTR(glPolygonMode_Idx) = dlsym(RTLD_NEXT,"glPolygonMode");
            if(!GL_ENTRY_PTR(glPolygonMode_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPolygonMode_Idx))
    	{
            GL_ENTRY_PREV_TS(glPolygonMode_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPolygonMode_wrp(face,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPolygonMode_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPolygonMode_Idx) ++;

        GL_ENTRY_LAST_TS(glPolygonMode_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPolygonMode_Idx),
				 GL_ENTRY_LAST_TS(glPolygonMode_Idx));
        if(last_diff > 1000000000){
            printf("glPolygonMode %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPolygonMode_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonMode_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonMode_Idx) /
	             GL_ENTRY_CALL_COUNT(glPolygonMode_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPolygonMode_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPolygonMode_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPolygonMode_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPolygonMode_Idx) = get_ts();
        }


	

}