#include <glTraceCommon.h>
#include <generated.h>

#define glNormalStream3bvATI_wrp						\
    ((void  (*)(GLenum stream,const GLbyte *coords                                        \
    ))GL_ENTRY_PTR(glNormalStream3bvATI_Idx))


GLAPI void  APIENTRY glNormalStream3bvATI(GLenum stream,const GLbyte *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalStream3bvATI_Idx))
	{
            GL_ENTRY_PTR(glNormalStream3bvATI_Idx) = dlsym(RTLD_NEXT,"glNormalStream3bvATI");
            if(!GL_ENTRY_PTR(glNormalStream3bvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalStream3bvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalStream3bvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalStream3bvATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalStream3bvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalStream3bvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalStream3bvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalStream3bvATI_Idx),
				 GL_ENTRY_LAST_TS(glNormalStream3bvATI_Idx));
        if(last_diff > 1000000000){
            printf("glNormalStream3bvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalStream3bvATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3bvATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3bvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalStream3bvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalStream3bvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalStream3bvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalStream3bvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalStream3bvATI_Idx) = get_ts();
        }


	

}