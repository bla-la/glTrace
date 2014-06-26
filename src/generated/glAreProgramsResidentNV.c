#include <glTraceCommon.h>
#include <generated.h>

#define glAreProgramsResidentNV_wrp						\
    ((GLboolean  (*)(GLsizei n,const GLuint *programs,GLboolean *residences                                        \
    ))GL_ENTRY_PTR(glAreProgramsResidentNV_Idx))


GLAPI GLboolean  APIENTRY glAreProgramsResidentNV(GLsizei n,const GLuint *programs,GLboolean *residences)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAreProgramsResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glAreProgramsResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glAreProgramsResidentNV_wrp(n,programs,residences);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAreProgramsResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAreProgramsResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glAreProgramsResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAreProgramsResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glAreProgramsResidentNV_Idx));


        if(last_diff > 1000000000){
            printf("glAreProgramsResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAreProgramsResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glAreProgramsResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glAreProgramsResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glAreProgramsResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAreProgramsResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAreProgramsResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAreProgramsResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAreProgramsResidentNV_Idx) = get_ts();
        }


	return retval;

}