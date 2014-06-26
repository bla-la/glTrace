#include <glTraceCommon.h>
#include <generated.h>

#define glColorMaterial_wrp						\
    ((void  (*)(GLenum face,GLenum mode                                        \
    ))GL_ENTRY_PTR(glColorMaterial_Idx))


GLAPI void  APIENTRY glColorMaterial(GLenum face,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorMaterial_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorMaterial_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorMaterial_wrp(face,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorMaterial_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorMaterial_Idx) ++;

        GL_ENTRY_LAST_TS(glColorMaterial_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorMaterial_Idx),
				 GL_ENTRY_LAST_TS(glColorMaterial_Idx));


        if(last_diff > 1000000000){
            printf("glColorMaterial %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorMaterial_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaterial_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaterial_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorMaterial_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorMaterial_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorMaterial_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorMaterial_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorMaterial_Idx) = get_ts();
        }


	

}