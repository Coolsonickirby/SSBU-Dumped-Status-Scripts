
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019710(L2CAgent *param_1)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_MA_MSC_CMD_EFFECT_EFFECT_COMMON);
  lib::L2CValue::L2CValue(aLStack96,0x8820306e5);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  app::sv_module_access::effect(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_invincible_frame_global_impl(param_1->moduleAccessor,iVar2,true,0);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
  HVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_whole_impl(param_1->moduleAccessor,HVar3,0);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AreaModule__set_whole_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_FINAL_END);
  uVar4 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::GroundModule__set_collidable_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

