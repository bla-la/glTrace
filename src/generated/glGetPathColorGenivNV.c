#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathColorGenivNV_wrp						\
    ((void  (*)(GLenum color,GLenum pname,GLint *value                                        \
    ))GL_ENTRY_PTR(glGetPathColorGenivNV_Idx))


GLAPI void  APIENTRY glGetPathColorGenivNV(GLenum color,GLenum pname,GLint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPathColorGenivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathColorGenivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathColorGenivNV_wrp(color,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathColorGenivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathColorGenivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathColorGenivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathColorGenivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathColorGenivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetPathColorGenivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathColorGenivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathColorGenivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathColorGenivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathColorGenivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathColorGenivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathColorGenivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathColorGenivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathColorGenivNV_Idx) = get_ts();
        }


	

}