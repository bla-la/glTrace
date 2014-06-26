#include <glTraceCommon.h>
#include <generated.h>

#define glTextureColorMaskSGIS_wrp						\
    ((void  (*)(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha                                        \
    ))GL_ENTRY_PTR(glTextureColorMaskSGIS_Idx))


GLAPI void  APIENTRY glTextureColorMaskSGIS(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureColorMaskSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureColorMaskSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureColorMaskSGIS_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureColorMaskSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureColorMaskSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureColorMaskSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureColorMaskSGIS_Idx),
				 GL_ENTRY_LAST_TS(glTextureColorMaskSGIS_Idx));


        if(last_diff > 1000000000){
            printf("glTextureColorMaskSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureColorMaskSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTextureColorMaskSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTextureColorMaskSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureColorMaskSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureColorMaskSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureColorMaskSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureColorMaskSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureColorMaskSGIS_Idx) = get_ts();
        }


	

}