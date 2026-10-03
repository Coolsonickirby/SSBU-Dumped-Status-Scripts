
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013fe0(L2CAgent *param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  app::lua_bind::ControlModule__reset_trigger_impl(param_1->moduleAccessor);
  app::lua_bind::AttackModule__clear_all_impl(param_1->moduleAccessor);
  app::lua_bind::AttackModule__clear_inflict_kind_status_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,_MA_MSC_CMD_CANCEL_UNABLE_CANCEL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  app::sv_module_access::cancel(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  app::lua_bind::ControlModule__clear_command_impl(param_1->moduleAccessor,false);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TRAIL_STATUS_ATTACK_AIR_N_FLAG_ENABLE_COMBO);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TRAIL_STATUS_ATTACK_AIR_N_FLAG_CONNECT_COMBO);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TRAIL_STATUS_ATTACK_AIR_N_FLAG_HIT_SPEED_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMBO_KIND_AIR_N_COMBINATION);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ComboModule__set_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    FUN_71000144f0(aLStack96,param_1);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  return;
}

