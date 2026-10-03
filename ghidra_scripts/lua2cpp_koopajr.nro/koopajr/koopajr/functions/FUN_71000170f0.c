
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000170f0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,1.0);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_STATUS_SPECIAL_N_FLOAT_CHARGE);
    fVar3 = (float)lib::L2CValue::as_number(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__add_float_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar3,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

