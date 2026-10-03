
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100002360(L2CFighterMiiswordsman *this,L2CValue *return_value)

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
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_WAZA_CUSTOMIZE_TO);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar1 & 1U) == 0) goto LAB_7100002d94;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_1);
  uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_7100002d94;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_MAX);
  uVar3 = lib::L2CValue::operator<(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_7100002d94;
  lib::L2CValue::L2CValue(aLStack144,(int)LUA_SCRIPT_LINE_MAX);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      lua2cpp::L2CAgentBase::sv_delete_status_func((L2CAgentBase *)this,aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_1);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_2);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100003860);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100003c50);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100003e50);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_3);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100003ed0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_71000042c0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100004520);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_1);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialS_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialS_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialS_end);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_2);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100004d20);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100005100);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100005340);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_3);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100005350);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100005740);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100005a40);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_1);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialHi_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialHi_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialHi_end);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_2);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100006400);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_71000067e0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100006cb0);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_3);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100006d20);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100007100);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100007500);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_1);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialLw_pre);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialLw_main);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,
                 L2CFighterMiiswordsman::status::SpecialLw_end);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_2);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100007b40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100007f20);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100008140);
      goto LAB_7100002d08;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_3);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100008150);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100008530);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack96,aLStack80,FUN_7100008c80);
      goto LAB_7100002d08;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack96,aLStack80,L2CFighterMiiswordsman::status::SpecialN_pre
              );
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack96,aLStack80,
               L2CFighterMiiswordsman::status::SpecialN_main);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack96,aLStack80,L2CFighterMiiswordsman::status::SpecialN_end
              );
LAB_7100002d08:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,aLStack128);
  FUN_7100008c90(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,0x30e525daca);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
LAB_7100002d94:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

