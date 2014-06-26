#include <glTraceCommon.h>
#include <generated.h>

#define glClientActiveTexture_wrp						\
    ((void  (*)(GLenum texture                                        \
    ))GL_ENTRY_PTR(glClientActiveTexture_Idx))


GLAPI void  APIENTRY glClientActiveTexture(GLenum texture)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClientActiveTexture_Idx))
    	{
            GL_ENTRY_PREV_TS(glClientActiveTexture_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClientActiveTexture_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClientActiveTexture_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClientActiveTexture_Idx) ++;

        GL_ENTRY_LAST_TS(glClientActiveTexture_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClientActiveTexture_Idx),
				 GL_ENTRY_LAST_TS(glClientActiveTexture_Idx));


        if(last_diff > 1000000000){
            printf("glClientActiveTexture %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClientActiveTexture_Idx),
	             GL_ENTRY_CALL_TIME(glClientActiveTexture_Idx),
	             GL_ENTRY_CALL_TIME(glClientActiveTexture_Idx) /
	             GL_ENTRY_CALL_COUNT(glClientActiveTexture_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClientActiveTexture_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClientActiveTexture_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClientActiveTexture_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClientActiveTexture_Idx) = get_ts();
        }


	

}