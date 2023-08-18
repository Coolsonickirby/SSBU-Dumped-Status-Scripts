
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::LandingFallSpecial_init(L2CFighterDiddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_ATTACK2);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_JUMP2);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_FLIP_FALL);
      uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
        goto LAB_710000d6d0;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0xdc81fdc09);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main(this,(L2CValue)0xb0);
LAB_710000d6d0:
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

