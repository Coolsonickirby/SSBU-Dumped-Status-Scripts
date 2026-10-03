
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003db60(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_FINAL_INT_FINAL_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,0);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,false);
      FUN_710003ea60(param_2,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

