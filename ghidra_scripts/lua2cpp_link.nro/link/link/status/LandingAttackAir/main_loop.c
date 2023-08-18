
void __thiscall
L2CFighterLink::status::LandingAttackAir_main_loop(L2CFighterLink *this,L2CValue *return_value)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::status_LandingAttackAir_Main(this);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      iVar3 = 0;
      goto LAB_710000ee2c;
    }
  }
  iVar3 = 1;
LAB_710000ee2c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

