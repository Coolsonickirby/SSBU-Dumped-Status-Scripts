
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100002a50(L2CFighterMiifighter *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_WAZA_CUSTOMIZE_ORG);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_WAZA_CUSTOMIZE_TO);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar1 & 1U) == 0) goto LAB_710000342c;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_1);
  uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_710000342c;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_MAX);
  uVar3 = lib::L2CValue::operator<(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_710000342c;
  lib::L2CValue::L2CValue(aLStack144,(int)LUA_SCRIPT_LINE_MAX + 1);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      lua2cpp::L2CAgentBase::sv_delete_status_func((L2CAgentBase *)this,aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_1);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100003cb0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000040a0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100004630);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100004860);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100004c50);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000050e0);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_1);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialS_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialS_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialS_end);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100005e50);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100006230);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000066c0);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000066d0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100006ab0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100007110);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_1);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialHi_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialHi_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialHi_end);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000079c0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100007da0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100008110);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100008120);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100008500);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000090d0);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_1);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialLw_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialLw_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,
                 L2CFighterMiifighter::status::SpecialLw_end);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000092e0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_71000096c0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100009b10);
      goto LAB_71000033fc;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100009b90);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_7100009f70);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack112,aLStack80,FUN_710000a460);
      goto LAB_71000033fc;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack112,aLStack80,L2CFighterMiifighter::status::SpecialN_pre)
    ;
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack112,aLStack80,L2CFighterMiifighter::status::SpecialN_main
              );
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack112,aLStack80,L2CFighterMiifighter::status::SpecialN_end)
    ;
LAB_71000033fc:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,aLStack96);
  FUN_710000a4e0(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
LAB_710000342c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

