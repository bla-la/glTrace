#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3usvEXT_wrp						\
    ((void  (*)(const GLushort *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3usvEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3usvEXT(const GLushort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3usvEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3usvEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3usvEXT");
            if(!GL_ENTRY_PTR(glSecondaryColor3usvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3usvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3usvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3usvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3usvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3usvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3usvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3usvEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3usvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3usvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3usvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3usvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3usvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3usvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3usvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3usvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3usvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3usvEXT_Idx) = get_ts();
        }


	

}