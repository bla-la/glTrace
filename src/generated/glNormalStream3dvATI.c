#include <glTraceCommon.h>
#include <generated.h>

#define glNormalStream3dvATI_wrp						\
    ((void  (*)(GLenum stream,const GLdouble *coords                                        \
    ))GL_ENTRY_PTR(glNormalStream3dvATI_Idx))


GLAPI void  APIENTRY glNormalStream3dvATI(GLenum stream,const GLdouble *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalStream3dvATI_Idx))
	{
            GL_ENTRY_PTR(glNormalStream3dvATI_Idx) = dlsym(RTLD_NEXT,"glNormalStream3dvATI");
            if(!GL_ENTRY_PTR(glNormalStream3dvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalStream3dvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalStream3dvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalStream3dvATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalStream3dvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalStream3dvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalStream3dvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalStream3dvATI_Idx),
				 GL_ENTRY_LAST_TS(glNormalStream3dvATI_Idx));
        if(last_diff > 1000000000){
            printf("glNormalStream3dvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalStream3dvATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3dvATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3dvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalStream3dvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalStream3dvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalStream3dvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalStream3dvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalStream3dvATI_Idx) = get_ts();
        }


	

}