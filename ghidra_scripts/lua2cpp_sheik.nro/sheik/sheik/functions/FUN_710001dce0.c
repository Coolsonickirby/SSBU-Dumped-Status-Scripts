
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001dce0(long param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_STATUS_SPECIAL_S_WORK_INT_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::operator=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::as_integer(aLStack64);
    bVar2 = lib::L2CValue::as_bool(aLStack80);
    bVar3 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::EffectModule__kill_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,(bool)(bVar2 & 1),
               (bool)(bVar3 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

