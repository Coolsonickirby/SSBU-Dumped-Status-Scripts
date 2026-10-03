
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100035b00(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_RETURN_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_EFFECT_HANDLE_NULL);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__remove_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,0);
    lib::L2CValue::L2CValue(aLStack64,_EFFECT_HANDLE_NULL);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_RETURN_EFFECT_HANDLE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

