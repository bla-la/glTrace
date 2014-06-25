#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3svEXT_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3svEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3svEXT(const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3svEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3svEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3svEXT");
            if(!GL_ENTRY_PTR(glSecondaryColor3svEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3svEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3svEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3svEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3svEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3svEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3svEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3svEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3svEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3svEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3svEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3svEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3svEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3svEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3svEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3svEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3svEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3svEXT_Idx) = get_ts();
        }


	

}