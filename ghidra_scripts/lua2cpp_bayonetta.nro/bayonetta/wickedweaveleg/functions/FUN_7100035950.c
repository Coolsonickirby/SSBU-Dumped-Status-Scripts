
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100035950(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_BAYONETTA_WICKEDWEAVELEG_INSTANCE_WORK_ID_FLAG_REMOVE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_BAYONETTA_WICKEDWEAVELEG_INSTANCE_WORK_ID_FLAG_REMOVE);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

