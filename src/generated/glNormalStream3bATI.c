#include <glTraceCommon.h>
#include <generated.h>

#define glNormalStream3bATI_wrp						\
    ((void  (*)(GLenum stream,GLbyte nx,GLbyte ny,GLbyte nz                                        \
    ))GL_ENTRY_PTR(glNormalStream3bATI_Idx))


GLAPI void  APIENTRY glNormalStream3bATI(GLenum stream,GLbyte nx,GLbyte ny,GLbyte nz)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormalStream3bATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalStream3bATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalStream3bATI_wrp(stream,nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalStream3bATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalStream3bATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalStream3bATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalStream3bATI_Idx),
				 GL_ENTRY_LAST_TS(glNormalStream3bATI_Idx));


        if(last_diff > 1000000000){
            printf("glNormalStream3bATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalStream3bATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3bATI_Idx),
	             GL_ENTRY_CALL_TIME(glNormalStream3bATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalStream3bATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalStream3bATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalStream3bATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalStream3bATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalStream3bATI_Idx) = get_ts();
        }


	

}