
void FUN_710001fed0(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710001ffe0(aLStack64,param_1);
  iVar3 = lib::L2CValue::as_integer(param_2);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  uVar5 = lib::L2CValue::operator==(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(param_3);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(pBVar6,uVar4,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

