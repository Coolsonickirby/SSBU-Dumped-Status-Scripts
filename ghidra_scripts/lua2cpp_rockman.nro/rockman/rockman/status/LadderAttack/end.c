
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::LadderAttack_end(L2CFighterRockman *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_end_LadderAttack(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,lVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack128,pLVar5);
    FUN_710000a880(aLStack112,aLStack128);
    lib::L2CValue::operator_(aLStack112);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      FUN_710000aa60(this);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

