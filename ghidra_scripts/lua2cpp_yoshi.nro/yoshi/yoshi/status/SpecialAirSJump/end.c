
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialAirSJump_end(L2CFighterYoshi *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_AIR_S_JUMP);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_LOOP);
      uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_TURN);
        uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
          uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar2 & 1) == 0) goto LAB_710001397c;
        }
      }
    }
  }
  FUN_710001efa0(this);
LAB_710001397c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

