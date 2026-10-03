
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100026d30(L2CValue *param_1,long param_2)

{
  int iVar1;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar2;
  float fVar3;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_LINE_LENGTH);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 600),0x1643785f9d);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar2,iVar1);
  lib::L2CValue::L2CValue(param_1,fVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

