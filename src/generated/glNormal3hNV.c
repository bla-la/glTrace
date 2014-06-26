#include <glTraceCommon.h>
#include <generated.h>

#define glNormal3hNV_wrp						\
    ((void  (*)(GLhalfNV nx,GLhalfNV ny,GLhalfNV nz                                        \
    ))GL_ENTRY_PTR(glNormal3hNV_Idx))


GLAPI void  APIENTRY glNormal3hNV(GLhalfNV nx,GLhalfNV ny,GLhalfNV nz)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormal3hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormal3hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormal3hNV_wrp(nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormal3hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormal3hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glNormal3hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormal3hNV_Idx),
				 GL_ENTRY_LAST_TS(glNormal3hNV_Idx));


        if(last_diff > 1000000000){
            printf("glNormal3hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormal3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormal3hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormal3hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormal3hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormal3hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormal3hNV_Idx) = get_ts();
        }


	

}