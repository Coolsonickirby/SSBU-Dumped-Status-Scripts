
void FUN_710001ffe0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  uVar2 = app::lua_bind::CatchModule__capture_object_id_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack48,uVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack48);
  pvVar3 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar3 == (void *)0x0) {
    lib::L2CValue::L2CValue(param_1,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(param_1,pvVar3);
  }
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

