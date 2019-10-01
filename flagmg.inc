/* License: https://github.com/Kalendarky/Licenses/blob/master/v1/README.md */
#if defined _flagmg_included
	#endinput
#endif
#define _flagmg_included

stock flagmg_Addflags(id, const flags[])
{
	if(!is_user_connected(id))
		return;
	
	if(get_user_flags(id) & read_flags(flags))
		return;
	
	set_user_flags(id, get_user_flags(id) + read_flags(flags));
}
stock flagmg_Setflags(id, const flags[])
{
	if(!is_user_connected(id))
		return;
	
	set_user_flags(id, read_flags(flags));
}
stock flagmg_Getflags(id, const flags[])
{		
	if(has_all_flags(id, flags))
		return true;
	else
		return false;
}
