#include <glTraceCommon.h>
#include <generated.h>

#define glTexGenfv_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glTexGenfv_Idx))


GLAPI void  APIENTRY glTexGenfv(GLenum coord,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexGenfv_Idx))
	{
            GL_ENTRY_PTR(glTexGenfv_Idx) = dlsym(RTLD_NEXT,"glTexGenfv");
            if(!GL_ENTRY_PTR(glTexGenfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexGenfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGenfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGenfv_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGenfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGenfv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGenfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGenfv_Idx),
				 GL_ENTRY_LAST_TS(glTexGenfv_Idx));
        if(last_diff > 1000000000){
            printf("glTexGenfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGenfv_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenfv_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGenfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGenfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGenfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGenfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGenfv_Idx) = get_ts();
        }


	

}