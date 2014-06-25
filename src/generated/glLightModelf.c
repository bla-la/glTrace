#include <glTraceCommon.h>
#include <generated.h>

#define glLightModelf_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glLightModelf_Idx))


GLAPI void  APIENTRY glLightModelf(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightModelf_Idx))
	{
            GL_ENTRY_PTR(glLightModelf_Idx) = dlsym(RTLD_NEXT,"glLightModelf");
            if(!GL_ENTRY_PTR(glLightModelf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightModelf_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightModelf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightModelf_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightModelf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightModelf_Idx) ++;

        GL_ENTRY_LAST_TS(glLightModelf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightModelf_Idx),
				 GL_ENTRY_LAST_TS(glLightModelf_Idx));
        if(last_diff > 1000000000){
            printf("glLightModelf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightModelf_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelf_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelf_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightModelf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightModelf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightModelf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightModelf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightModelf_Idx) = get_ts();
        }


	

}