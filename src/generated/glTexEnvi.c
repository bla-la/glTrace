#include <glTraceCommon.h>
#include <generated.h>

#define glTexEnvi_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glTexEnvi_Idx))


GLAPI void  APIENTRY glTexEnvi(GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexEnvi_Idx))
	{
            GL_ENTRY_PTR(glTexEnvi_Idx) = dlsym(RTLD_NEXT,"glTexEnvi");
            if(!GL_ENTRY_PTR(glTexEnvi_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexEnvi_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexEnvi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexEnvi_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexEnvi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexEnvi_Idx) ++;

        GL_ENTRY_LAST_TS(glTexEnvi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexEnvi_Idx),
				 GL_ENTRY_LAST_TS(glTexEnvi_Idx));
        if(last_diff > 1000000000){
            printf("glTexEnvi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexEnvi_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvi_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvi_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexEnvi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexEnvi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexEnvi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexEnvi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexEnvi_Idx) = get_ts();
        }


	

}