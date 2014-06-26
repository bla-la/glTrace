#include <glTraceCommon.h>
#include <generated.h>

#define glVariantdvEXT_wrp						\
    ((void  (*)(GLuint id,const GLdouble *addr                                        \
    ))GL_ENTRY_PTR(glVariantdvEXT_Idx))


GLAPI void  APIENTRY glVariantdvEXT(GLuint id,const GLdouble *addr)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVariantdvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantdvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantdvEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantdvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantdvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantdvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantdvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantdvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVariantdvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantdvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantdvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantdvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantdvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantdvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantdvEXT_Idx) = get_ts();
        }


	

}