
void FUN_7100023aa0(long param_1,L2CValue *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = lib::L2CValue::as_integer(param_2);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,-1);
  uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__kill_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,true,true);
    lib::L2CValue::L2CValue(aLStack64,-1);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

