
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100029e10(L2CAgent *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_FLY_REFLECT_LR);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_FLY_REFLECT_U);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xee085517c);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack64);
      app::sv_information::damage_log_value(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator<(aLStack64,aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_END_REACTION)
        ;
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar1);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0);
        lib::L2CValue::L2CValue
                  (aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_DAMAGE_REACTION_FRAME);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar1,iVar2);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_END_REACTION)
        ;
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar1);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_DAMAGE_REACTION_FRAME);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar1,iVar2);
      }
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

