
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028c00(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_BUCKET);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_INT_OIL_FRAME_1);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar3,0);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x34cf1a892);
        lib::L2CValue::L2CValue(aLStack96,0x5b65edced);
        lVar4 = lib::L2CValue::as_integer(aLStack80);
        lVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar4,lVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_INT_OIL_FRAME_2);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar3,0);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x34cf1a892);
        lib::L2CValue::L2CValue(aLStack96,0x52f578d57);
        lVar4 = lib::L2CValue::as_integer(aLStack80);
        lVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar4,lVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_INT_OIL_FRAME_3);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar3,0);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x34cf1a892);
        lib::L2CValue::L2CValue(aLStack96,0x55850bdc1);
        lVar4 = lib::L2CValue::as_integer(aLStack80);
        lVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar4,lVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_COMMON);
        lib::L2CValue::L2CValue(aLStack96,0xaec2db62e);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        lib::L2CAgent::push_lua_stack(param_2,aLStack96);
        app::sv_module_access::effect(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

