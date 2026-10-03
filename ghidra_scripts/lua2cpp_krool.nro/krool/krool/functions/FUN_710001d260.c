
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d260(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = aLStack160;
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_LW_FLAG_REFLECTOR_CHK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_710001d560;
      lib::L2CValue::L2CValue(aLStack64,_MA_MSC_SHIELD_SET_STATUS);
      lib::L2CValue::L2CValue(aLStack80,_COLLISION_KIND_REFLECTOR);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_REFLECTOR_KIND_WAIST);
      lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NONE);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLECTOR_GROUP_EXTEND);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      app::sv_module_access::shield(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) goto LAB_710001d560;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_STATUS_SPECIAL_LW_FLAG_REFLECTOR_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_MA_MSC_SHIELD_SET_STATUS);
      lib::L2CValue::L2CValue(aLStack80,_COLLISION_KIND_REFLECTOR);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_REFLECTOR_KIND_WAIST);
      lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NORMAL);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLECTOR_GROUP_EXTEND);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      app::sv_module_access::shield(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      this = aLStack112;
    }
    lib::L2CValue::~L2CValue(this);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_710001d560:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

