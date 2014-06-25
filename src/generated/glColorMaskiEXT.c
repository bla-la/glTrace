#include <glTraceCommon.h>
#include <generated.h>

#define glColorMaskiEXT_wrp						\
    ((void  (*)(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a                                        \
    ))GL_ENTRY_PTR(glColorMaskiEXT_Idx))


GLAPI void  APIENTRY glColorMaskiEXT(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorMaskiEXT_Idx))
	{
            GL_ENTRY_PTR(glColorMaskiEXT_Idx) = dlsym(RTLD_NEXT,"glColorMaskiEXT");
            if(!GL_ENTRY_PTR(glColorMaskiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorMaskiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorMaskiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorMaskiEXT_wrp(index,r,g,b,a);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorMaskiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorMaskiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glColorMaskiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorMaskiEXT_Idx),
				 GL_ENTRY_LAST_TS(glColorMaskiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glColorMaskiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorMaskiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaskiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaskiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorMaskiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorMaskiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorMaskiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorMaskiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorMaskiEXT_Idx) = get_ts();
        }


	

}