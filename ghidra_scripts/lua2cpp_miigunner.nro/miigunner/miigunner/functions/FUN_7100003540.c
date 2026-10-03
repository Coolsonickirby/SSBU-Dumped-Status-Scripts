
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003540(L2CFighterMiigunner *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
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
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_WAZA_CUSTOMIZE_TO);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar1 & 1U) == 0) goto LAB_7100003f74;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_1);
  uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_7100003f74;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_MAX);
  uVar3 = lib::L2CValue::operator<(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_7100003f74;
  lib::L2CValue::L2CValue(aLStack144,(int)LUA_SCRIPT_LINE_MAX);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      lua2cpp::L2CAgentBase::sv_delete_status_func((L2CAgentBase *)this,aLStack128,aLStack80);
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
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100004350);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100004740);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100004b60);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100004c60);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100005050);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100005250);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_1);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,L2CFighterMiigunner::status::SpecialS_pre
                );
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,
                 L2CFighterMiigunner::status::SpecialS_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,L2CFighterMiigunner::status::SpecialS_end
                );
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100005880);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100005c70);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100006150);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100006160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100006400);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100006410);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_1);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,
                 L2CFighterMiigunner::status::SpecialHi_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,
                 L2CFighterMiigunner::status::SpecialHi_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,
                 L2CFighterMiigunner::status::SpecialHi_end);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100006dd0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_71000071c0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100007460);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100007470);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100007850);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100007cf0);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_1);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,
                 L2CFighterMiigunner::status::SpecialLw_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,
                 L2CFighterMiigunner::status::SpecialLw_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,
                 L2CFighterMiigunner::status::SpecialLw_end);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100008660);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100008a50);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100008c50);
      goto LAB_7100003ee8;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_3);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100008c60);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_7100009040);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack128,aLStack80,FUN_71000094f0);
      goto LAB_7100003ee8;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack128,aLStack80,L2CFighterMiigunner::status::SpecialN_pre);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack128,aLStack80,L2CFighterMiigunner::status::SpecialN_main)
    ;
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack128,aLStack80,L2CFighterMiigunner::status::SpecialN_end);
LAB_7100003ee8:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,aLStack96);
  FUN_7100009500(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,0x30e525daca);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
LAB_7100003f74:
  lib::L2CValue::L2CValue(aLStack176,0x298e3fa1ee);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

