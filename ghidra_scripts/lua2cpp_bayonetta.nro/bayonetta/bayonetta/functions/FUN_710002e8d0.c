
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e8d0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_SPECIAL_LANDING_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      bVar1 = true;
      goto LAB_710002e98c;
    }
  }
  bVar1 = false;
LAB_710002e98c:
  lib::L2CValue::L2CValue(param_1,bVar1);
  return;
}

